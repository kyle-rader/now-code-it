/* main.c 
 *
 * For testing stack implementation.
 *
 * AUthor: Kyle W. Rader
 * Date  : 2-24-14
 *
 */

#inlcude <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(int argc, char * argv[]) {

  struct Stack * stack = create_stack();
  int i = 0;

  for (i = 0; i < 15; i++) {
    push(stack, i);
  }

  printf("stack:\n");
  for (i = i; i > 0; i--) {
    printf("val:%d\n", pop(stack));
  }

  delete_stack(stack);

  return 0;
}
