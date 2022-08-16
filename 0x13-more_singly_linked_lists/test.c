#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                              list at a given position.
 * @head: A pointer to the address of the head
 *          of the listint_t list.
 * @idx: The index of the listint_t list where the new node
 *          should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *          Otherwise - the address of the new node. 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new, *copy = *head;
    unsigned int node;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;

    if (idx == 0)
    {
        new->next = copy;
        *head = new;
        return (new);
    }

    for (node = 0; node < (idx - 1); node++)
    {
        if (copy == NULL || copy->next == NULL)
            return (NULL);
        
        copy = copy->next;
    }

    new->next = copy->next;
    copy->next = new;

    return (new);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}