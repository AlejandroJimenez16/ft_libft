/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:11:29 by alejanjiga        #+#    #+#             */
/*   Updated: 2025/01/14 17:38:53 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//MAÑANA OPTIMIZAR FUNCION

int	words_count(char const *s, char c)
{
	int	i;
	int in_word;
	int count;

	in_word = 0;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;	
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		n_times;
	int		num_words;
	int		num_chara;
	char	*word;
	char 	**arr;

	i = 0;
	num_words = words_count(s, c);
	num_chara = 0;
	n_times = 0;
	arr = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (n_times < num_words)
	{
		while (s[i] != '\0' && s[i] != c)
        {
            num_chara++;
            i++;
        }
		
		if (num_chara > 0)
        {
            word = (char *)malloc((num_chara + 1) * sizeof(char));
            if (!word)
                return (NULL);

            ft_strlcpy(word, &s[i - num_chara], num_chara + 1);
            arr[n_times] = word;
            num_chara = 0;
            n_times++;
        }
		while (s[i] == c) 
		{
        	i++;
    	}
	}
	arr[n_times] = NULL;
	return (arr);
}

int main(void)
{
	char *src = "Hola que tal";
	
	char **arr = ft_split(src, ' ');

	int n = 3;

	for(int i=0; i < n; i++)
	{
		printf("%s", arr[i]);
		printf("\n");
	}

}