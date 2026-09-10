This project has been created as part of the 42 curriculum by joshtan

<!--describe project, including its goal and a brief overview.-->

<!-- 
Part 1 - Libc functions
To begin, you must reimplement a set of functions from the 1ibc. Your version will have the same prototypes and behaviors as the originals, adhering strictly to their definitions in the man page. The only difference will be their names, which must start with the ft_’ prefix. For example, strlen becomes ft_strlen.



In order to implement the two following functions, you will use malloc ():
- calloc
- strdup

-->

# Description

<!-- Part 1-->

This project implements c library functions for the following functions:

- [x] `isalpha`
- [x] `isdigit`
- [x] `isalnum`
- [x] `isascii`
- [x] `isprint`
- [x] `strlen`
- [x] `memset`
- [x] `bzero`
- [x] `memcpy`
- [x] `memmove`
- [x] `strlcpy`
- [?] `strlcat`
- [x] `toupper`
- [x] `tolower`
- [x] `strchr`
- [x] `strrchr`
- [x] `strncmp`
- [X] `memchr`
- [x] `memcmp`
- [x] `strnstr`
- [ ] `atoi`

The function prototypes are as follows:

- [x] int isalpha(int c)
- [x] int isdigit(int c)
- [x] int isalnum(int c)
- [x] int isascii(int c)
- [x] int isprint(int c)

- [x] int toupper(int c)
- [x] int tolower(int c)

- [x] size_t strlen(const char *s);
- [x] void *memset(void *s, int c, size_t n);
- [x] void	ft_bzero(void *s, size_t n);
- [x] void *memcpy(void *dest, const void *src, size_t n);
- [x] void *memmove(void *dest, const void *src, size_t n);
- [x] size_t strlcpy(char *dst, const char *src, size_t size);  
- [ ] size_t strlcat(char *dst, const char *src, size_t size);
- [ ] char *strchr(const char *s, int c);
- [ ] char *strrchr(const char *s, int c);
- [ ] int strncmp(const char *s1, const char *s2, size_t n);
- [ ] void *memchr(const void *s, int c, size_t n);
- [ ] int memcmp(const void *s1, const void *s2, size_t n);
- [ ] char *strnstr(const char *big, const char *little, size_t len);


### IV.3 Part 2 - Additional functions

In this second part, you must develop a set of functions that are either not included in the `libc`, or exist in a different form.

> Some of the functions from Part 1 may be useful for implementing the functions below.

|                   |                                                                                                                                                                           |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_substr`                                                                                                                                                               |
| Prototype         | `char *ft_substr(char const *s, unsigned int start, size_t len);`                                                                                                         |
| Files to Submit   | -                                                                                                                                                                         |
| Parameters        | `s`: The original string from which to create the substring.<br/>`start`: The starting index of the substring within `s`.<br/>`len`: The maximum length of the substring. |
| Return Value      | The substring.<br/>`NULL` if the allocation fails.                                                                                                                        |
| External Function | `malloc`                                                                                                                                                                  |
| Description       | Allocates memory (using `malloc(3)`) and returns a substring from the string `s`. The substring starts at index `start` and has a maximum length of `len`.                |

|                   |                                                                                                                    |
| ----------------- | ------------------------------------------------------------------------------------------------------------------ |
| Function Name     | `ft_strjoin`                                                                                                       |
| Prototype         | `char *ft_strjoin(char const *s1, char const *s2);`                                                                |
| Files to Submit   | -                                                                                                                  |
| Parameters        | `s1`: The prefix string.<br/>`s2`: The suffix string.                                                              |
| Return Value      | The new string.<br/>`NULL` if the allocation fails.                                                                |
| External Function | `malloc`                                                                                                           |
| Description       | Allocates memory (using `malloc(3)`) and returns a new string, which is the result of concatenating `s1` and `s2`. |

|                   |                                                                                                                                    |
| ----------------- | ---------------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_strtrim`                                                                                                                       |
| Prototype         | `char *ft_strtrim(char const *s1, char const *set);`                                                                               |
| Files to Submit   | -                                                                                                                                  |
| Parameters        | `s1`: The string to be trimmed.<br/>`set`: The string containing the set of characters to be removed.                              |
| Return Value      | The trimmed string.<br/>`NULL` if the allocation fails.                                                                            |
| External Function | `malloc`                                                                                                                           |
| Description       | Allocates memory (using `malloc(3)`) and returns a copy of `s1` with characters from `set` removed from the beginning and the end. |

|                   |                                                                                                                                                                                                                                                                                                                |
| ----------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_split`                                                                                                                                                                                                                                                                                                     |
| Prototype         | `char **ft_split(char const *s, char c);`                                                                                                                                                                                                                                                                      |
| Files to Submit   | -                                                                                                                                                                                                                                                                                                              |
| Parameters        | `s`: The string to be split.<br/>`c`: The delimiter character.                                                                                                                                                                                                                                                 |
| Return Value      | The array of new strings resulting from the split.<br/>`NULL` if any allocation fails.<br/>The returned structure will be released using: 1) `free()` on each string in the array; 2) `free()` the array itself.                                                                                               |
| External Function | `malloc`, `free`                                                                                                                                                                                                                                                                                               |
| Description       | Allocates memory (using `malloc(3)`) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. Each string in the returned array is allocated independently. The array of pointers itself is also allocated dynamically. The returned array must be `NULL` terminated. |

|                   |                                                                                                                                               |
| ----------------- | --------------------------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_itoa`                                                                                                                                     |
| Prototype         | `char *ft_itoa(int n);`                                                                                                                       |
| Files to Submit   | -                                                                                                                                             |
| Parameters        | `n`: The integer to convert.                                                                                                                  |
| Return Value      | The string representing the integer.<br/>`NULL` if the allocation fails.                                                                      |
| External Function | `malloc`                                                                                                                                      |
| Description       | Allocates memory (using `malloc(3)`) and returns a string representing the integer received as an argument. Negative numbers must be handled. |

|                   |                                                                                                                                                                                                                                                         |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_strmapi`                                                                                                                                                                                                                                            |
| Prototype         | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`                                                                                                                                                                                       |
| Files to Submit   | -                                                                                                                                                                                                                                                       |
| Parameters        | `s`: The string to iterate over.<br/>`f`: The function to apply to each character.                                                                                                                                                                      |
| Return Value      | The string created from the successive applications of `f`.<br/>Returns `NULL` if the allocation fails.                                                                                                                                                 |
| External Function | `malloc`                                                                                                                                                                                                                                                |
| Description       | Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character itself as the second. A new string is created (using `malloc(3)`) to store the results from the successive applications of `f`. |

|                   |                                                                                                                                                                                                      |
| ----------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_striteri`                                                                                                                                                                                        |
| Prototype         | `void ft_striteri(char *s, void (*f)(unsigned int, char*));`                                                                                                                                         |
| Files to Submit   | -                                                                                                                                                                                                    |
| Parameters        | `s`: The string to iterate over.<br/>`f`: The function to apply to each character.                                                                                                                   |
| Return Value      | None                                                                                                                                                                                                 |
| External Function | None                                                                                                                                                                                                 |
| Description       | Applies the function `f` to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to `f` so it can be modified if necessary. |

|                   |                                                                                |
| ----------------- | ------------------------------------------------------------------------------ |
| Function Name     | `ft_putchar_fd`                                                                |
| Prototype         | `void ft_putchar_fd(char c, int fd);`                                          |
| Files to Submit   | -                                                                              |
| Parameters        | `c`: The character to output.<br/>`fd`: The file descriptor on which to write. |
| Return Value      | None                                                                           |
| External Function | `write`                                                                        |
| Description       | Outputs the character `c` to the specified file descriptor.                    |

|                   |                                                                             |
| ----------------- | --------------------------------------------------------------------------- |
| Function Name     | `ft_putstr_fd`                                                              |
| Prototype         | `void ft_putstr_fd(char *s, int fd);`                                       |
| Files to Submit   | -                                                                           |
| Parameters        | `s`: The string to output.<br/>`fd`: The file descriptor on which to write. |
| Return Value      | None                                                                        |
| External Function | `write`                                                                     |
| Description       | Outputs the string `s` to the specified file descriptor.                    |

|                   |                                                                                |
| ----------------- | ------------------------------------------------------------------------------ |
| Function Name     | `ft_putendl_fd`                                                                |
| Prototype         | `void ft_putendl_fd(char *s, int fd);`                                         |
| Files to Submit   | -                                                                              |
| Parameters        | `s`: The string to output.<br/>`fd`: The file descriptor on which to write.    |
| Return Value      | None                                                                           |
| External Function | `write`                                                                        |
| Description       | Outputs the string `s` to the specified file descriptor followed by a newline. |

|                   |                                                                              |
| ----------------- | ---------------------------------------------------------------------------- |
| Function Name     | `ft_putnbr_fd`                                                               |
| Prototype         | `void ft_putnbr_fd(int n, int fd);`                                          |
| Files to Submit   | -                                                                            |
| Parameters        | `n`: The integer to output.<br/>`fd`: The file descriptor on which to write. |
| Return Value      | None                                                                         |
| External Function | `write`                                                                      |
| Description       | Outputs the integer `n` to the specified file descriptor.                    |
<!-- 
### IV.4 Part 3 - linked list

Memory and string manipulation functions are useful. But you will soon discover that manipulating lists is even more useful.

In this third part, you have to implement functions using a structure to manipulate linked list. To do so, add the following structure declaration to your `libft.h` file:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

The members of the `t_list` struct are:

- `content`: The data contained in the node. Using `void *` allows you to store any type of data.
- `next`: The address of the next node, or `NULL` if the current node is the last one.

Implement the following functions in order to easily use your lists:

|                   |                                                                                                                                                                                             |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_lstnew`                                                                                                                                                                                 |
| Prototype         | `t_list *ft_lstnew(void *content);`                                                                                                                                                         |
| Files to Submit   | -                                                                                                                                                                                           |
| Parameters        | `content`: The content to store in the new node.                                                                                                                                            |
| Return Value      | A pointer to the new node                                                                                                                                                                   |
| External Function | `malloc`                                                                                                                                                                                    |
| Description       | Allocates memory (using `malloc(3)`) and returns a new node. The `content` member variable is initialized with the given parameter `content`. The variable `next` is initialized to `NULL`. |

|                   |                                                                                                                           |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_lstadd_front`                                                                                                         |
| Prototype         | `void ft_lstadd_front(t_list **lst, t_list *new);`                                                                        |
| Files to Submit   | -                                                                                                                         |
| Parameters        | `lst`: The address of a pointer to the first node of a list.<br/>`new`: The address of a pointer to the node to be added. |
| Return Value      | None                                                                                                                      |
| External Function | None                                                                                                                      |
| Description       | Adds the node `new` at the beginning of the list.                                                                         |

|                   |                                         |
| ----------------- | --------------------------------------- |
| Function Name     | `ft_lstsize`                            |
| Prototype         | `unsigned int ft_lstsize(t_list *lst);` |
| Files to Submit   | -                                       |
| Parameters        | `lst`: The beginning of the list.       |
| Return Value      | The length of the list                  |
| External Function | None                                    |
| Description       | Counts the number of nodes in the list. |

|                   |                                    |
| ----------------- | ---------------------------------- |
| Function Name     | `ft_lstlast`                       |
| Prototype         | `t_list *ft_lstlast(t_list *lst);` |
| Files to Submit   | -                                  |
| Parameters        | `lst`: The beginning of the list.  |
| Return Value      | Last node of the list              |
| External Function | None                               |
| Description       | Returns the last node of the list. |

|                   |                                                                                                                           |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_lstadd_back`                                                                                                          |
| Prototype         | `void ft_lstadd_back(t_list **lst, t_list *new);`                                                                         |
| Files to Submit   | -                                                                                                                         |
| Parameters        | `lst`: The address of a pointer to the first node of a list.<br/>`new`: The address of a pointer to the node to be added. |
| Return Value      | None                                                                                                                      |
| External Function | None                                                                                                                      |
| Description       | Adds the node `new` at the end of the list.                                                                               |

|                   |                                                                                                                                 |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_lstdelone`                                                                                                                  |
| Prototype         | `void ft_lstdelone(t_list *lst, void (*del)(void *));`                                                                          |
| Files to Submit   | -                                                                                                                               |
| Parameters        | `lst`: The node to free.<br/>`del`: The address of the function used to delete the content.                                     |
| Return Value      | None                                                                                                                            |
| External Function | `free`                                                                                                                          |
| Description       | Takes a node as parameter and frees its content using the function `del`. Free the node itself but does NOT free the next node. |

|                   |                                                                                                                                                  |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------------------------ |
| Function Name     | `ft_lstclear`                                                                                                                                    |
| Prototype         | `void ft_lstclear(t_list **lst, void (*del)(void *));`                                                                                           |
| Files to Submit   | -                                                                                                                                                |
| Parameters        | `lst`: The address of a pointer to a node.<br/>`del`: The address of the function used to delete the content of the node.                        |
| Return Value      | None                                                                                                                                             |
| External Function | `free`                                                                                                                                           |
| Description       | Deletes and frees the given node and all its successors, using the function `del` and `free(3)`. Finally, set the pointer to the list to `NULL`. |

|                   |                                                                                                                  |
| ----------------- | ---------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_lstiter`                                                                                                     |
| Prototype         | `void ft_lstiter(t_list *lst, void (*f)(void *));`                                                               |
| Files to Submit   | -                                                                                                                |
| Parameters        | `lst`: The address of a pointer to a node.<br/>`f`: The address of the function to apply to each node's content. |
| Return Value      | None                                                                                                             |
| External Function | None                                                                                                             |
| Description       | Iterates through the list `lst` and applies the function `f` to the content of each node.                        |

|                   |                                                                                                                                                                                                                                              |
| ----------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Function Name     | `ft_lstmap`                                                                                                                                                                                                                                  |
| Prototype         | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`                                                                                                                                                                   |
| Files to Submit   | -                                                                                                                                                                                                                                            |
| Parameters        | `lst`: The address of a pointer to a node.<br/>`f`: The address of the function applied to each node's content.<br/>`del`: The address of the function used to delete a node's content if needed.                                            |
| Return Value      | The new list.<br/>`NULL` if the allocation fails.                                                                                                                                                                                            |
| External Function | `malloc`, `free`                                                                                                                                                                                                                             |
| Description       | Iterates through the list `lst`, applies the function `f` to each node's content, and creates a new list resulting of the successive applications of the function `f`. The `del` function is used to delete the content of a node if needed. |
-->

-->

<!-- relevant info on compilation/installation/execution-->

# Instructions

<!-- classic references related to the topic
- [ ] documentation
- [ ] articles
- [ ] tutorials
- [ ] How AI was used - spefcifying for which task and which parts of the project
-->

# Resources
