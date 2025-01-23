# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/22 12:50:32 by alejandj          #+#    #+#              #
#    Updated: 2025/01/23 14:02:02 by alejandj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC =	ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_strlen.c			\
		ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memmove.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_strnstr.c		\
		ft_atoi.c			\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_itoa.c			\
		ft_strmapi.c		\
		ft_striteri.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\


SRC_BONUS = ft_lstnew_bonus.c			\
			ft_lstadd_front_bonus.c		\
			ft_lstsize_bonus.c			\
			ft_lstlast_bonus.c			\
			ft_lstadd_back_bonus.c		\
			ft_lstdelone_bonus.c		\
			ft_lstclear_bonus.c			\
			ft_lstiter_bonus.c			\
			ft_lstmap_bonus.c			\

OBJECTS = ${SRC:.c=.o}
OBJECTS_BONUS = ${SRC_BONUS:.c=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -c $(SRC)
	@ar rcs $(NAME) $(OBJECTS)
	@echo "Library $(NAME) created."

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS) $(OBJECTS_BONUS)
	@echo "Object files removed."

fclean: clean
	@rm -rf $(NAME)
	@echo "Library $(NAME) removed"

re: fclean all

bonus: $(OBJECTS_BONUS)
	$(CC) $(CFLAGS) -c $(SRC) $(SRC_BONUS)
	@ar rcs $(NAME) $(OBJECTS) $(OBJECTS_BONUS)
	@echo "Bonus objects compiled and library updated."