## My Own Makefile 


NAME = libft.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror
RM = rm -f


###   test 

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

## start make all 

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "siiiiiiiii"

clean:
	$(RM) $(OBJS)
	@echo " Object files removed."

fclean: clean
	$(RM) $(NAME)
	@echo " libft.a removed."

re: fclean all
# .PHONY: all clean fclean re