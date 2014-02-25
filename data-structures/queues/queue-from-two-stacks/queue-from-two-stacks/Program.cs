using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace queue_from_two_stacks
{
	public class MyQueue
	{
		private Stack<int> enque_stack, deque_stack;
		public int count;

		public MyQueue()
		{
			this.enque_stack = new Stack<int>();
			this.deque_stack = new Stack<int>();
			this.count = 0;
		}

		public void enque(int value)
		{
			this.enque_stack.Push(value);
			this.count++;
		}

		public int? deque()
		{
			if (deque_stack.Count == 0)
			{
				while (enque_stack.Count > 0)
				{
					deque_stack.Push(enque_stack.Pop());
				}
			}
			count -= deque_stack.Count > 0 ? 1 : 0;
			return deque_stack.Count > 0 ? (int?)deque_stack.Pop() : null;
		}
	}

	class Program
	{
		static void Main(string[] args)
		{
			MyQueue Q = new MyQueue();
			for (int i = 0; i < 10; i++)
			{
				Q.enque(i);
			}

			for (int i = 0; i < 5; i++)
			{
				Console.WriteLine(Q.deque());
			}

			for (int i = 10; i < 20; i++)
			{
				Q.enque(i);
			}

			while (Q.count > 0)
			{
				Console.WriteLine(Q.deque());
			}

		}
	}
}
