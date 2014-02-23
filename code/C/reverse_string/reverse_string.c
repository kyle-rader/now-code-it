/* reverse.c
 * 
 * Problem: Write a function to reverse a string.
 *
 * Author: Kyle Rader
 * Date  : 2-21-14
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(char * input);

int main(int argc, char * argv[]) {

  char my_string[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};

  printf("original:'%s'\n", my_string);

  reverse(my_string);

  printf("reversed:'%s'\n", my_string);

  return 0;
}


void reverse(char * input) {
  char * fwd_scanner = input;
  char * rvr_scanner = input;
  char tmp = 0;

  if (*input == 0)
    return;

  while (*(rvr_scanner + 1) != 0) { rvr_scanner++; }

  while (fwd_scanner < rvr_scanner) {
    tmp = *fwd_scanner;
    *fwd_scanner++ = *rvr_scanner;
    *rvr_scanner-- = tmp;
  }
}
