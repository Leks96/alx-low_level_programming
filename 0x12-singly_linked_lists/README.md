__0x12. C - Singly linked lists__

__0. Print list__
* a function that prints all the elements of a list_t list.

__1. List length__
* a function that returns the number of elements in a linked list_t list.

__2. Add node__
* a function that adds a new node at the beginning of a list_t list.

__3. Add node at the end__
* a function that adds a new node at the end of a list_t list.

__4. Free list__
* a function that frees a list_t list.

__DATA STRUCTURE__

```
/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```
