/* odds.c
 * 
 * Problem:
 * Code a function to print the odd number 1 to 99
 *
 * Author: Kyle W. Rader
 * Date  : 2-22-14
 *
 */

#include <stdio.h>
#include <stdlib.h>

int print_odds();

int main (int argc, char * argv[]) {

  print_odds();

  return 0;
}

int print_odds() {
  int i = 1;
  for (i = 1; i <= 99; i+=2) {
    printf("%3d\n", i);
  }
}
