#ifndef LIBFT_BONUS_H
#define LIBFT_BONUS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct		s_list
{
    void			*content;
    struct s_list	*next;
}					t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new)

#endif