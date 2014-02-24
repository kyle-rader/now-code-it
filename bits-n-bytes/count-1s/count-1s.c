/* count-1s.c
 *
 * Problem: Write a function to count the number of
 * high bits in an int
 *
 * Author: Kyle W. Rader
 */

#include <stdio.h>
#include <stdlib.h>

/* Implementation 1: Naive, do a bitwise comparison of each bit.*/
int long_cnt(int n) {
  int cnt = 0, i = sizeof(n)*8;

  for (i = i; i > 0; i--) {
    cnt += (n & 1) ? 1 : 0;
    n = n >> 1;
  }
  return cnt;
}

/* Implementation 2: Shorter: O(log(N)) */
int short_cnt(int n) {
  int cnt = 0;
  while (n != 0) {
    n &= (n-1);
    cnt++;
  }
  return cnt;
}

int main(int argc, char * argv[]) {

  printf("Long way:\n");
  printf("5 has %d set bits\n", long_cnt(5));
  printf("15 has %d set bits\n", long_cnt(15));

  printf("Shorter way:\n");
  printf("5 has %d set bits\n", short_cnt(5));
  printf("15 has %d set bits\n", short_cnt(15));
  return 0;
}
