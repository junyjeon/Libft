
<div align="center">
<h1 align="center">
<img src="https://raw.githubusercontent.com/PKief/vscode-material-icon-theme/ec559a9f6bfd399b82bb44393651661b08aaf7ba/icons/folder-markdown-open.svg" width="100" />
<br>
libft
</h1>
<h3 align="center">📍 Bringing innovation and collaboration to your code - libft!</h3>
<h3 align="center">🚀 Developed with the software and tools below.</h3>
<p align="center">

<img src="https://img.shields.io/badge/C-A8B9CC.svg?style=for-the-badge&logo=C&logoColor=black" alt="" />
<img src="https://img.shields.io/badge/GNU%20Bash-4EAA25.svg?style=for-the-badge&logo=GNU-Bash&logoColor=white" alt="sample" />
</p>

</div>

---
## 📚 Table of Contents
- [📚 Table of Contents](#-table-of-contents)
- [📍Overview](#-introdcution)
- [🔮 Features](#-features)
- [⚙️ Project Structure](#project-structure)
- [🧩 Modules](#modules)
- [🏎💨 Getting Started](#-getting-started)
- [🗺 Roadmap](#-roadmap)
- [🤝 Contributing](#-contributing)
- [🪪 License](#-license)
- [📫 Contact](#-contact)
- [🙏 Acknowledgments](#-acknowledgments)

---

## 📍Overview

libft is a library of useful self-written functions for C programming. It includes a wide variety of functions for memory management, string manipulation, math operations, character checking and numeric conversion.

## 🔮 Feautres

> `[📌  INSERT-PROJECT-FEATURES]`

---

<img src="https://raw.githubusercontent.com/PKief/vscode-material-icon-theme/ec559a9f6bfd399b82bb44393651661b08aaf7ba/icons/folder-github-open.svg" width="80" />

## ⚙️ Project Structure

```bash
repo
├── Makefile
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_itoa.c
├── ft_lstadd_back.c
├── ft_lstadd_front.c
├── ft_lstclear.c
├── ft_lstdelone.c
├── ft_lstiter.c
├── ft_lstlast.c
├── ft_lstmap.c
├── ft_lstnew.c
├── ft_lstsize.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
├── ft_split.c
├── ft_strchr.c
├── ft_strdup.c
├── ft_striteri.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_tolower.c
├── ft_toupper.c
├── libft.h
└── test.sh

0 directories, 46 files
```
---

<img src="https://raw.githubusercontent.com/PKief/vscode-material-icon-theme/ec559a9f6bfd399b82bb44393651661b08aaf7ba/icons/folder-src-open.svg" width="80" />

## 💻 Modules
<details closed><summary>Root</summary>

| File              | Summary                                                                                                                                                                                                                                                                                       | Module            |
|:------------------|:----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|:------------------|
| test.sh           | This code is a bash script that clones several repositories and runs tests on a library . It clones Libftest , libft - war - machine , libft - unit - test , and libftTester , runs tests , and then cleans                                                                                   | test.sh           |
| ft_lstlast.c      | This code creates a function that returns the last element of a linked list . It takes in a pointer to a linked list and returns a pointer to the last element of the list .                                                                                                                  | ft_lstlast.c      |
| ft_strmapi.c      | This code creates a new string by applying a function to each character of an existing string . The new string is allocated with malloc and returned .                                                                                                                                        | ft_strmapi.c      |
| ft_memmove.c      | This code is a function that copies a given number of bytes from a source memory location to a destination memory location . It takes three parameters : a pointer to the destination memory location , a pointer to the source memory location , and the number of bytes                     | ft_memmove.c      |
| ft_lstadd_front.c | This code adds a new element to the beginning of a linked list . It takes in a pointer to a linked list and a pointer to the new element to be added , and updates the linked list to include the new element .                                                                               | ft_lstadd_front.c |
| libft.h           | Libft is a library of functions written in C that provides a variety of useful functions for manipulating strings , memory , and lists . It includes functions for checking character types , copying and moving memory , manipulating strings , and creating and manipulating linked lists . | libft.h           |
| ft_lstsize.c      | This code is a function that returns the size of a linked list . It takes in a pointer to a linked list and iterates through it , incrementing a counter each time , and returns the counter when it reaches the end of the list .                                                            | ft_lstsize.c      |
| ft_itoa.c         | This code creates a function that takes an integer as an argument and returns a string representation of the integer . It allocates memory for the string , adds the appropriate characters to the string , and returns the string .                                                          | ft_itoa.c         |
| ft_strchr.c       | This code is a function that searches for a character in a string and returns a pointer to the first occurrence of the character in the string .                                                                                                                                              | ft_strchr.c       |
| ft_memcpy.c       | This code is a function that copies n bytes from memory area src to memory area dest . It includes a check to make sure that dest and src are not the same , and then copies the bytes from src to dest .                                                                                     | ft_memcpy.c       |
| ft_substr.c       | This code creates a substring of a given string , starting at a given index and with a given length . It allocates memory for the substring and returns a pointer to it .                                                                                                                     | ft_substr.c       |
| ft_lstdelone.c    | This code is a function that deletes a single element from a linked list , freeing the memory associated with it . It takes in a pointer to the element to be deleted and a pointer to a function that deletes the content of the element .                                                   | ft_lstdelone.c    |
| ft_memset.c       | This code is a function that fills the first n bytes of the memory area pointed to by s with the constant byte c. It returns a pointer to the memory area s.                                                                                                                                  | ft_memset.c       |
| ft_putstr_fd.c    | This code is a function that takes in a string and a file descriptor as parameters and writes the string to the file descriptor .                                                                                                                                                             | ft_putstr_fd.c    |
| ft_strlcat.c      | This code is a function that copies a string from src to dst , up to a maximum of dstsize characters , and returns the total length of the string it tried to create .                                                                                                                        | ft_strlcat.c      |
| ft_isascii.c      | This code is a function that checks if a given character is an ASCII character ( 0 - 127 ) . It returns 1 if the character is an ASCII character and 0 if it is not .                                                                                                                         | ft_isascii.c      |
| ft_strtrim.c      | This code is a function that takes two strings as parameters and returns a new string that is a trimmed version of the first string . It removes any characters from the beginning and end of the string that are present in the second string .                                              | ft_strtrim.c      |
| ft_toupper.c      | This code is a function that takes in an integer and returns the uppercase version of the character if it is a lowercase letter .                                                                                                                                                             | ft_toupper.c      |
| ft_strdup.c       | This code creates a duplicate of a given string using malloc and memcpy . It returns a pointer to the duplicate string .                                                                                                                                                                      | ft_strdup.c       |
| ft_lstnew.c       | This code creates a new element of type t_list , which is a linked list element , and assigns the content parameter to the content field of the element . It then sets the next field of the element to NULL and returns the element .                                                        | ft_lstnew.c       |
| ft_isalpha.c      | This code checks if a given character is an alphabetic character ( a - z or A - Z ) and returns 1 if it is , or 0 if it is not .                                                                                                                                                              | ft_isalpha.c      |
| ft_isprint.c      | This code checks if a given character is printable or not , returning 1 if it is and 0 if it is not .                                                                                                                                                                                         | ft_isprint.c      |
| ft_putnbr_fd.c    | This code is a function that prints an integer to a given file descriptor . It handles negative numbers and the special case of -2147483648 .                                                                                                                                                 | ft_putnbr_fd.c    |
| ft_putendl_fd.c   | This code is a function that writes a string to a file descriptor , followed by a newline character . It takes two arguments , a string and a file descriptor , and uses the write function to write the string and newline to the file descriptor                                            | ft_putendl_fd.c   |
| ft_lstadd_back.c  | This code adds a new element to the end of a linked list . It takes in a pointer to a linked list and a pointer to the new element to be added . It then finds the last element in the list and adds the new element to                                                                       | ft_lstadd_back.c  |
| ft_strlen.c       | This code is a function that returns the length of a given string . It takes in a string as an argument and iterates through it , incrementing a counter until it reaches the end of the string . It then returns the counter , which is                                                      | ft_strlen.c       |
| ft_isdigit.c      | This code is a function that checks if a given character is a digit ( 0 - 9 ) . It returns 1 if the character is a digit , and 0 if it is not .                                                                                                                                               | ft_isdigit.c      |
| ft_strnstr.c      | This code is a function that searches for a substring within a string , up to a certain length . It returns a pointer to the beginning of the substring if it is found , or 0 if it is not found .                                                                                            | ft_strnstr.c      |
| ft_lstiter.c      | This code iterates through a linked list and applies a given function to each element of the list .                                                                                                                                                                                           | ft_lstiter.c      |
| ft_strncmp.c      | This code is a function that compares two strings up to a certain number of characters and returns the difference between them .                                                                                                                                                              | ft_strncmp.c      |
| ft_bzero.c        | This code creates a function called ft_bzero which sets the first ' len ' bytes of the memory area pointed to by ' b ' to zero . It uses the ft_memset function to accomplish this .                                                                                                          | ft_bzero.c        |
| ft_memcmp.c       | This code is a function that compares two memory areas and returns the difference between them . It takes in two memory areas and a size as parameters and returns an integer .                                                                                                               | ft_memcmp.c       |
| ft_tolower.c      | This code is a function that takes in an integer and returns the lowercase version of the character if it is an uppercase letter .                                                                                                                                                            | ft_tolower.c      |
| ft_lstmap.c       | This code creates a new list from an existing list by applying a function to each element of the existing list . It also includes a function to delete elements from the list .                                                                                                               | ft_lstmap.c       |
| ft_strlcpy.c      | This code is a function that copies the string pointed to by src , including the terminating null byte ( ' \0 ' ) , to the buffer pointed to by dst . The function takes in three parameters , dst , src , and dstsize , and returns                                                          | ft_strlcpy.c      |
| ft_striteri.c     | This code is a function that applies a given function to each character of a given string , passing its index as first argument .                                                                                                                                                             | ft_striteri.c     |
| ft_isalnum.c      | This code checks if a given character is an alphanumeric character ( a letter or a number ) . It returns 1 if the character is alphanumeric and 0 if it is not .                                                                                                                              | ft_isalnum.c      |
| ft_putchar_fd.c   | This code is a function that writes a character to a given file descriptor . It takes in a character and an integer file descriptor as parameters and uses the write function to write the character to the file descriptor .                                                                 | ft_putchar_fd.c   |
| ft_memchr.c       | This code is a function that searches for a character in a given string and returns a pointer to the first occurrence of the character . It takes in three parameters : a pointer to the string , the character to search for , and the size of the                                           | ft_memchr.c       |
| ft_split.c        | This code is a function that splits a string into an array of strings based on a given character . It takes in a string and a character as parameters and returns an array of strings . It also includes a function to free the allocated memory .                                            | ft_split.c        |
| ft_atoi.c         | This code is a function that converts a string to an integer . It takes in a string as an argument and returns the integer value of the string . It also takes into account any leading whitespace or signs ( + /- ) .                                                                        | ft_atoi.c         |
| ft_lstclear.c     | This code is a function that clears a linked list , deleting each element and freeing the memory associated with it . It takes in a pointer to a linked list and a pointer to a function that deletes the data of each element .                                                              | ft_lstclear.c     |
| ft_strjoin.c      | This code creates a new string by combining two existing strings , s1 and s2 , and returns the new string . It allocates memory for the new string , copies the characters from s1 and s2 into the new string , and adds                                                                      | ft_strjoin.c      |
| ft_strrchr.c      | This code is a function that searches for the last occurrence of a character in a string and returns a pointer to it . It takes two parameters , a string and a character , and returns a pointer to the last occurrence of the character in the string                                       | ft_strrchr.c      |
| ft_calloc.c       | This code creates a function that allocates memory for an array of a given size and sets all of the memory to 0 . It returns a pointer to the allocated memory .                                                                                                                              | ft_calloc.c       |

</details>
<hr />

## 🚀 Getting Started

### ✅ Prerequisites

Before you begin, ensure that you have the following prerequisites installed:
> `[📌  INSERT-PROJECT-PREREQUISITES]`

### 💻 Installation

1. Clone the libft repository:
```sh
git clone https://github.com/junyjeon/libft
```

2. Change to the project directory:
```sh
cd libft
```

3. Install the dependencies:
```sh
gcc -o myapp main.c
```

### 🤖 Using libft

```sh
./myapp
```

### 🧪 Running Tests
```sh
#run tests
```

<hr />

## 🛠 Future Development
- [X] [📌  COMPLETED-TASK]
- [ ] [📌  INSERT-TASK]
- [ ] [📌  INSERT-TASK]


---

## 🤝 Contributing
Contributions are always welcome! Please follow these steps:
1. Fork the project repository. This creates a copy of the project on your account that you can modify without affecting the original project.
2. Clone the forked repository to your local machine using a Git client like Git or GitHub Desktop.
3. Create a new branch with a descriptive name (e.g., `new-feature-branch` or `bugfix-issue-123`).
```sh
git checkout -b new-feature-branch
```
4. Make changes to the project's codebase.
5. Commit your changes to your local branch with a clear commit message that explains the changes you've made.
```sh
git commit -m 'Implemented new feature.'
```
6. Push your changes to your forked repository on GitHub using the following command
```sh
git push origin new-feature-branch
```
7. Create a pull request to the original repository.
Open a new pull request to the original project repository. In the pull request, describe the changes you've made and why they're necessary.
The project maintainers will review your changes and provide feedback or merge them into the main branch.

---

## 🪪 License

This project is licensed under the `[📌  INSERT-LICENSE-TYPE]` License. See the [LICENSE](https://docs.github.com/en/communities/setting-up-your-project-for-healthy-contributions/adding-a-license-to-a-repository) file for additional info.

---

## 🙏 Acknowledgments

[📌  INSERT-DESCRIPTION]


---

