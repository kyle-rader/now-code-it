/* time.c
 * 
 * Problem:
 * Code a function to print the 12x12 times table
 *
 * Author: Kyle W. Rader
 * Date  : 2-22-14
 *
 */

#include <stdio.h>
#include <stdlib.h>

int print_time();

int main (int argc, char * argv[]) {

  print_time();

  return 0;
}

int print_time() {
  int i = 0, k = 0, j = 0;
  for (i = 0; i <= 12; i++) {
    if (i == 1) {
      for (j=0; j < 65; j++) { printf("%c", j < 64 ? '-' : '\n'); }
    }
    printf(i == 0 ? "    |" : "%3d |", i);
    for (k = 1; k <= 12; k++) {
      printf(" %3d%c", (i == 0 ? 1 : i)*k, k == 12 ? '\n' : ' ');
    }
  }
}
