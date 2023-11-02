## 0x0C. C - More malloc, free

The  `malloc()` function allocates size bytes and returns a pointer to the allocated memory.  The memory is not initialized.  If size is `0`, then `malloc()` returns
either `NULL`, or a unique pointer value that can later be successfully passed to `free()`.

The `free()` function frees the memory space pointed to by ptr, which must have been returned by a previous call to `malloc()`, `calloc()`, or `realloc()`.   Otherwise 
or if `free(ptr)` has already been called before, undefined behavior occurs.  If ptr is NULL, no operation is performed. 

The  `calloc()`  function  allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.  The memory is set to
zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to `free()`.
If the  multiplication  of nmemb and size would result in integer overflow, then `calloc()` returns an error.  By contrast, an integer overflow would not be detected
in the following call to `malloc()`, with the result that an incorrectly sized block of memory would be allocated:

`malloc(nmemb * size)`

The `realloc()` function changes the size of the memory block pointed to by ptr to size bytes.  The contents will be unchanged in the range from the start of  the
region up to the minimum of the old and new sizes.  If the new size is larger than the old size, the added memory will not be initialized.  If ptr is NULL, then
the call is equivalent to malloc(size), for all values of size; if size is equal to zero, and ptr is not NULL, then the call is equivalent to `free(ptr)`.  Unless
ptr is NULL, it must have been returned by an earlier call to `malloc()`, `calloc()`, or `realloc()`.  If the area pointed to was moved, a `free(ptr)` is done.

### Tasks


#### * 0. Trust no one

A function that allocates memory using `malloc`.
Prototype: `void *malloc_checked(unsigned int b);`
Returns a pointer to the allocated memory
if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`.

#### * 1. string_nconcat

A function that concatenates two strings.
Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
If the function fails, it should return `NULL`
If `n` is greater or equal to the length of `s2` then use the entire string `s2`
if `NULL` is passed, treat it as an empty string

#### * 2. calloc

A function that allocates memory for an array, using `malloc`
Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`
If `malloc` fails, then `_calloc` returns `NULL`
