#ifndef _HEADER_H_
#define _HEADER_H_

#include <stddef.h>

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_s;

size_t print_list(const listint_s *h);
listint_s *begin_node(listint_s **head, const int n);
listint_s *end_node(listint_s **head, const int n);
listint_s *insert_pos(listint_s **head, unsigned int pos, int n);
#endif /* _HEADER_H */
