/* reverse.c
 *
 * Problem: Reverse a singly linked list
 *
 * Author: Kyle W. Rader
 * Date  : 2-24-14
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int num;
  struct Node *next;
};


void reverse_list(struct Node **head);
void print_list(struct Node *head);

int main(int argc, char *argv[]) {

  struct Node *list = (struct Node *)malloc(sizeof(struct Node));
  list->num = 1;
  list->next = (struct Node *)malloc(sizeof(struct Node));
  list->next->num = 2;
  list->next->next = NULL;
  
  print_list(list);
  reverse_list(&list);
  print_list(list);

  free(list->next);
  free(list);

  return 0;
}

void reverse_list(struct Node **head) {
  struct Node *last, *cur, *next;
  last = NULL;

  if (head == NULL || *head == NULL) {
    printf("reverse_list: Cannot pass a null list.\n");
    exit(1);
  }
  else {
    cur = *head;
    next = cur->next;
    while ( cur != NULL) {
      cur->next = last;
      last = cur;
      cur = next;
      if (next != NULL) {
	next = next->next;
      }
    }
    *head = last;
  }
}

void print_list(struct Node *head) {
  printf("\nList:\n");
  while (head != NULL) {
    printf("%d\n", head->num);
    head = head->next;
  }
}
