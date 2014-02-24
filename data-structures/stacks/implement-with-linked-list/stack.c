/* stack.c 
 *
 * Body file for stack implementation with linked lists.
 *
 * Author: Kyle W. Rader
 * Date  : 2-24-14
 *
 */

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void push(struct Stack *stack, int value) {
  struct StackNode *new_node = (struct StackNode *)malloc(sizeof(struct StackNode));
  new_node->value = value;
  new_node->next = stack->head;
  stack->head = new_node;
  stack->size++;
}

int pop(struct Stack *stack) {
  int pop_value = 0;
  struct StackNode * old_head = NULL;
  if (stack->size > 0) {
    pop_value = stack->head->value;
    old_head = stack->head;
    stack->head = stack->head->next;
    free(old_head);
    stack->size--;
  }
  return pop_value;
}

struct Stack *create_stack() {
  struct Stack * new_stack = (struct Stack *)malloc(sizeof(struct Stack));
  new_stack->size = 0;
  new_stack->head = NULL;
  return new_stack;
}

void delete_stack(struct Stack *stack) {
  while (stack->size > 0) {
    pop(stack);
  }
  printf("freed list\n");
  free(stack);
}
