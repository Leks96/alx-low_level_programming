__0x13. C - More singly linked lists__


__0. Print list__
* a function that prints all the elements of a listint_t list.

__1. List length__
* a function that returns the number of elements in a linked listint_t list.

__2. Add node__
* a function that adds a new node at the beginning of a listint_t list.

__3. Add node at the end__
* a function that adds a new node at the end of a listint_t list.

__4. Free list__
* a function that frees a listint_t list.

__5. Free__
* a function that frees a listint_t list.

__6. Pop__
* a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

__7. Get node at index__
* a function that returns the nth node of a listint_t linked list.

__8. Sum list__
* a function that returns the sum of all the data (n) of a listint_t linked list.

__9. Insert__
* a function that inserts a new node at a given position.

__10. Delete at index__
* a function that deletes the node at index index of a listint_t linked list.


__DATA STRUCTURE__

```
/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Description: singly linked list node structure
* 
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
```
