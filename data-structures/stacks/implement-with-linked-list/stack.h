/* stack.h
 *
 * Header file for stack implementation with linked lists.
 *
 * Author: Kyle W. Rader
 * Date  : 2-24-14
 *
 */

#ifndef STACK
#define STACK

struct StackNode {
  int value;
  struct StackNode * next;
};

struct Stack {
  int size;
  struct StackNode * head;
};

void push(struct Stack *stack, int value);
int pop(struct Stack *stack);
struct Stack *create_stack();
void delete_stack(struct Stack *stack);

#endif
