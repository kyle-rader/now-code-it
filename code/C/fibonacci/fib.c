/* fib.c
 * 
 * Problem:
 * Code a function to compute the Nth fibonacci number.
 *
 * Author: Kyle W. Rader
 * Date  : 2-22-14
 *
 */

#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main (int argc, char * argv[]) {

  int i = 0;
  for (i = 0; i < 10; i++) {
    printf("fib number: %d: %d\n", i, fib(i));
  }

  return 0;
}

int fib(int n) {
  return n <= 1 ? n : fib(n-1) + fib (n-2);
}
