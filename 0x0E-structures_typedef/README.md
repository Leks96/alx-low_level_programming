## 0x0E. C - Structures, typedef

A struct in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically 
grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or 
by the struct declared name which returns the same address.
The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry
(file length, name, extension, physical address, etc.), orother mixed-type records (name, address, telephone, balance, etc.).

### Tasks

#### 0. Poppy
a new type `struct dog` with the following elements
`name`, type = `char *`
`age`, type = `float`
`owner`, type = `char *`

#### 1. A dog is the only thing on earth that loves you more than you love yourself
A function that initialize a variable of type `struct dog`
Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner)`;

#### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
A function that prints a `struct dog`
Prototype: `void print_dog(struct dog *d);`
If an element of `d` is `NULL`, print `(nil)` instead of this element. (if name is `NULL`, print Name: `(nil)`)
If `d` is `NULL` print nothing.

#### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
A new type `dog_t` as a new name for the type `struct dog`.

