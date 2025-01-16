/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:44:48 by alejandj          #+#    #+#             */
/*   Updated: 2025/01/16 17:21:32 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/**
 * @brief Adds a new node at the beggining of the list.
 * 
 * @param lst Address of the pointer to the first node of the list.
 * @param new The new node to add at the front of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
int main(void)
{
	//VALORES
	char *val1= "Primero";
	char *val2 = "Segundo";

	//CREAR NODOS
	t_list *first = ft_lstnew(val1);
	t_list *second = ft_lstnew(val2);
	
	//AÑADIR AL PRINCIPIO
	ft_lstadd_front(&first, second);

	//RECORRER LISTA
	t_list *current = first;
	
	while(current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}
*/