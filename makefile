CC = cc
CFLAGS = -Wall -Werror -Wextra

Prueba: programa.c
	$(CC) $(CFLAGS) programa.c -o programa