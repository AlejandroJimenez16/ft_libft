NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

FILES = *.c
OBJECTS = *.o
HEADERS = *.h

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(FILES)
	@ar rcs $(NAME) $(OBJECTS) $(HEADERS)

%.c:
	$(CC) $(CFLAGS) $(FILES)

clean:
	@rm -rf $(OBJECTS)
	@echo "Deleted object files"

fclean: clean
	@rm -rf $(NAME)
	@echo "Library $(NAME) removed"

re: fclean all