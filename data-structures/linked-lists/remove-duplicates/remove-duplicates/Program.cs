using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace remove_duplicates
{
	public class MyListNode {
		public int? value;
		public MyListNode next;

		public MyListNode(int? value = null, MyListNode next = null)
		{
			this.value = value;
			this.next = next;
		}
	}

	public class MyList
	{
		public int size;
		public MyListNode head, tail;

		public MyList()
		{
			size = 0;
			head = null;
			tail = null;
		}

		public void print()
		{
			MyListNode cur = this.head;
			if (this.size == 0)
			{
				System.Console.WriteLine("List is empty!");
			}
			else
			{
				while (cur != null)
				{
					System.Console.WriteLine(cur.value);
					cur = cur.next;
				}
			}
		}

		public void add(int new_value)
		{
			if (size == 0)
			{
				this.head = new MyListNode(new_value);
				this.tail = this.head;
			}
			else
			{
				this.tail.next = new MyListNode(new_value);
				this.tail = this.tail.next;
			}
			this.size++;
		}

		public void remove_duplicates()
		{
			MyListNode last, curi, curj;

			if (this.size <= 1)
				return;

			curi = this.head;
			while (curi != null)
			{
				last = curi;
				curj = curi.next;
				while (curj != null)
				{
					if (curj.value == curi.value)
						last.next = curj.next;
					else
						last = curj;
					curj = curj.next;
				}
				curi = curi.next;
			}
		}
	}

	public class Program
	{
		static void Main(string[] args)
		{
			MyList list = new MyList();

			for (int i = 0; i < 10; i++)
			{
				list.add(i % 5);
			}

			System.Console.WriteLine("Before:");
			list.print();

			list.remove_duplicates();

			System.Console.WriteLine("After:");
			list.print();
		}
	}
}
