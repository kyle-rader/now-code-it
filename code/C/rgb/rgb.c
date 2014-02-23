/* rgb.c
 * 
 * Problem: Write a function to format 3 rgb bytes into a hex string of 6 chars
 *
 * Author: Kyle Rader
 * Date  : Sat Feb 22 20:50:14 PST 2014
 */

#include <stdio.h>
#include <stdlib.h>

void rgb(int r, int g, int b);

int main(int argc, char * argv[]) {

  rgb(32, 16, 128);

  return 0;
}


void rgb(int r, int g, int b) {
  if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) {
    printf("rgb: Error: rgb values must be in the rang 0 - 255.\n");
    exit(1);
  }
  else {
    printf("r:%3d g:%3d b:%3d\n", r, g, b);
    printf("hex: #%2x%2x%2x\n", r, g, b);
  }
}
