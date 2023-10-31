## 0x0B. C - malloc, free

The  malloc()  function allocates size bytes and returns a pointer to the allocated memory.  The memory is not initialized.  If size is 0, then malloc() returns 
either NULL, or a unique pointer value that can later be successfully passed to free().

The free() function frees the memory space pointed to by ptr, which must have been returned by a previous call to malloc(). 
Otherwise, or if free(ptr) has already been called before, undefined behavior occurs.  If ptr is NULL, no operation is performed.

### Tasks

#### * 0. Float like a butterfly, sting like a bee

 A function that creates an array of chars, and initializes it with a specific char.
 Prototype: `char *create_array(unsigned int size, char c);`
 Returns `NULL` if size = `0`
 Return a pointer to the array, or `NULL` if it fails.

#### * 1. The woman who has no imagination has no wings

A  function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
Prototype: `char *_strdup(char *str);`
The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`.
Memory for the new string is obtained with `malloc`, and can be freed with free.
Returns `NULL` if str = NULL
On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

### * 2. He who is not courageous enough to take risks will accomplish nothing in life

A function that concatenates two strings.
Prototype: `char *str_concat(char *s1, char *s2)`;
The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
if `NULL` is passed, treat it as an empty string
The function should return `NULL` on failure.

### * 3. If you even dream of beating me you'd better wake up and apologize

A function that returns a pointer to a 2 dimensional array of integers.
Prototype: `int **alloc_grid(int width, int height);`
Each element of the grid should be initialized to `0`
The function should return `NULL` on failure
if `width` or `height` is `0` or negative, return `NULL`
