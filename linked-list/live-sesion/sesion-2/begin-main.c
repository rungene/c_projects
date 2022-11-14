#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_s *head;

    head = NULL;
    begin_node(&head, 0);
    begin_node(&head, 1);
    begin_node(&head, 2);
    begin_node(&head, 3);
    begin_node(&head, 4);
    begin_node(&head, 98);
    begin_node(&head, 402);
    begin_node(&head, 1024);
    print_list(head);
    return (0);
}
