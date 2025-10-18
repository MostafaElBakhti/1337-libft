# 1337-libft
A small C library that reimplements a subset of the standard C library (libc) as a learning project. This repository contains portable, well-documented implementations of common string, memory and linked-list utility functions used to practice low-level C programming, pointer manipulation and test-driven development.

Why this project exists
- Recreate basic libc functions to understand their behavior and edge cases.
- Improve C coding style, memory management and debugging skills.
- Provide a lightweight, dependency-free utility library for small C projects.

Highlights
- Memory functions: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp
- String functions: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strdup, ft_substr, ft_strjoin, ft_strtrim, ft_split
- Character checks/conversions: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower
- Conversions and I/O helpers: ft_atoi, ft_itoa, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
- Linked list utilities: ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap
- Optional/bonus functions and tests may be included depending on the exercise scope.

Quick start
- Build: run make (expects a provided Makefile)
- Clean: make clean
- Full clean: make fclean
- Rebuild: make re
- Link into your project: gcc -L. -lft -Iinclude your_program.c -o your_program

Testing and style
- Aim for no memory leaks (use valgrind during development).
- Follow the project's coding norms (header guards, comments, and function prototypes in include/).
- Add unit tests or example programs in the examples/ or tests/ directory to validate behavior.

Contributing
- Fork the repository, create a feature branch, add tests for new behaviors, and submit a pull request with a concise description of changes.
- Keep commits small and focused; include explanations for non-obvious implementations.

License
- Include a permissive license (e.g., MIT) in LICENSE file if you plan to share or reuse the code.

For questions or suggestions, open an issue describing the change or bug and include a short reproducible example.