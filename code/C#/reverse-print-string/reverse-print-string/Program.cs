using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace reverse_print_string
{
	class Program
	{
		static public void reverse_print(string input, bool first = true)
		{
			if (input.Length == 1)
			{
				System.Console.Write(input);
			}
			else
			{
				System.Console.Write(input[input.Length - 1]);
				reverse_print(input.Substring(0, input.Length - 1), false);
			}
			if (first)
				System.Console.WriteLine();
		}

		static void Main(string[] args)
		{
			string hi = "hello world";
			reverse_print(hi);
		}
	}
}
