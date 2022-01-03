#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle -checks if a singly-linked list contains a cycle
 * @list: A singly-linked list.
 * Retrn: 0 if no cycle or 1 if ther is cycle
 */
int check_cycle(listint_t *list)
{
   listint_t *turtle, *hare;
   if (list == NULL || list->next == NULL)
     return (0);

   turtle = list->next;
   hare = list->next->next;

   while (turtle && hare && hare->next)
     {
       if (turtle == hare)
	 return (1);

       turtle = turtle->next;
       hare = hare->next->next;
     }
   return (0);
}
