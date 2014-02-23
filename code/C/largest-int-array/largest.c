/* largest.c
 * 
 * Problem:
 * Code a function to find the largest int in an array.
 *
 * Author: Kyle W. Rader
 * Date  : 2-22-14
 *
 */

#include <stdio.h>
#include <stdlib.h>

int find_max(int num_array[], int length);

int main (int argc, char * argv[]) {

  int numbers[] = { 1, 45, 3, 6, 4, 8, 12, 19, 33, 34};
  int size = 10;

  int max = find_max(numbers, size);
  
  printf("Array:\n");
  for (size = size; size >= 0; size --) {
    printf(" %2d%c", numbers[size], size > 0 ? ',' : '\n');
  }
  printf("max:%d\n", max);

  return 0;
}

int find_max(int num_array[], int length) {
  int max = 0, i = 0;
  if (length <= 0) {
    printf("Error: length must be greater than 0\n");
    exit(1);
  }
  else {
    max = num_array[0];
    for (i = 1; i < length; i++) {
      max = max < num_array[i] ? num_array[i] : max;
    }
  }
  return max;  
}
