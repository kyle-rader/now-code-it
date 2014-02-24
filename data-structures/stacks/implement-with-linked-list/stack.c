/* stack.c 
 *
 * Body file for stack implementation with linked lists.
 *
 * Author: Kyle W. Rader
 * Date  : 2-24-14
 *
 */

#include “stack.h”

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
  if (size > 1) {
    pop_value = stack->head->value;
    old_head = stack->head;
    stack->head = stack->head->next;
    free(old_head);
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
  struct StackNode * cur = stack->head;
  struct StackNode * next = NULL;
  int i = 0;
  for(i = 0; i < stack->size; i++) {
    next = cur->next;
    free(cur);
    cur = next;
  }
  free(stack);
}
 
