/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:11:30 by insantia          #+#    #+#             */
/*   Updated: 2026/11/04 18:58:36 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_equal(char *str, char j)
{
	static int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] != j)
			return (1);
		i++;
	}
	return (0);
}

static char	*copy(char	*dest, char *src, int i)
{
	static int	j;

	j = 0;
	while (src[j] != '\0' && j <= i)
	{
		dest[j] = src[j]
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	while (s[i] != '\0')
	{
		if (is_equal(s, s[i]) == 0)
			break ;
		i++;
	}
	str = malloc(i);
	if (str == NULL)
		return (NULL);
	copy(str, s, i);
	ft_split
	
	
}