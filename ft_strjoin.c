/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sueno-te <rflseijiueno@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 07:15:18 by sueno-te          #+#    #+#             */
/*   Updated: 2023/12/07 07:15:20 by sueno-te         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a new string, which is the result of
the concatenation of ’s1’ and ’s2’.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	lens1;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	new = ft_calloc((lens1 + lens2 + 1), sizeof(char));
	if (!new)
		return (0);
	i = 0;
	while (i < lens1)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < (lens1 + lens2))
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	return (new);
}
