#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
/**
//0-Print list
// check README.md for more info
size_t listint_len(const listint_t *h)
{
    size_t nodes = 0;

    while (h)
    {
        nodes++;
        h = h->next;
    }
    return (nodes);
}
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
*/

/*
// 3. Add node at the end of a list
/** 
 * add_nodeint_end - Adds a new node at the end
 *                      of a listint_t list.
 * 
 * @head: A pointer to the address of the
 *          head of the listint_t list. 
 * @n: The integer for the new code to contain 
 * @return: If the function fails - NULL
 *          Otherwise - the address of the new element. 
 
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new, *last;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);
    
    new->n = n;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    
    else
    {
        last = *head;
        while (last->next != NULL)
                last = last->next;
        last->next = new;
    }

    return(head);
}
//Test code (main function):
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
    return (0);
}
*/

//4 - Free listint_t list

/**
 * free_listint - Frees a listint_t list.
 * 
 * @head: A pointer to the head of the listint_t to be freed. 
 */
void free_listint(listint_t *head)
{
    listint_t *tmp;

    while (head)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}

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
    free_listint(head);
    head = NULL;
    return (0);
}