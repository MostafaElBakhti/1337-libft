
## My Own Makefile 


# The name of the output library
# static library
NAME = libft.a 
# The compiler to use
CC = cc 
# Compiler flags: show all warnings, treat warnings as errors
CFLAGS = -Wall -Wextra -Werror
# Command to remove files
RM = rm -f


# (Unused comment line)
###   test 

# All .c files in the directory
SRCS = $(wildcard *.c)
# All .o files corresponding to .c files
OBJS = $(SRCS:.c=.o) 
# pattern substitution 

# (Unused comment line)
## start make all 

# Default target: build the library
all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
# Rule to build .o files from .c files (depends on libft.h)
# $< is the source file, $@ is the target object file
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to build the library from object files
# ar rcs creates the static library
# Echo a message when done

# Remove all object files
clean:
	$(RM) $(OBJS)

# Remove object files and the library
fclean: clean
	$(RM) $(NAME)

# Rebuild everything from scratch (force clean, then build all)
re: fclean all
# (Optional) Declare phony targets (uncomment to use)
# .PHONY: all clean fclean re