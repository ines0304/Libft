/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:39:17 by insantia          #+#    #+#             */
/*   Updated: 2026/11/04 18:09:33 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_equal(char const *set, char j)
{
	static int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == j)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		s1_len;

	s1_len = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0')
	{
		if (is_equal(set, s1[i]) == 0)
			break ;
		i++;
	}
	while (s1_len > i)
	{
		if (is_equal(set, s1[s1_len - 1]) == 0)
			break ;
		s1_len--;
	}
	ptr = ft_substr(s1, i, (s1_len - i));
	return (ptr);
}

/*
int	main(void)
{
	char	s1[] = "!!XXHelX!loXX!!";
	char	set[] = "!X";
	char	*str;
	
	str = ft_strtrim(s1, set);
	printf("%s", str);
	free(str);
	return (0);
}
*/