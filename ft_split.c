/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:28:17 by insantia          #+#    #+#             */
/*   Updated: 2026/11/14 10:24:23 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	count_letters(char const *s, char c, int word)
{
	int	count;
	int	i;
	int	start;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			if (count == word)
				return ((i - start));
		}
		else
			i++;
	}
	return (0);
}

static int	first_position(char const *s, char c, int word)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			if (count == word)
				return (i);
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (0);
}

static void	free_split(char **ptr, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ptr = malloc((words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (words > i)
	{
		ptr[i] = ft_substr(s, first_position(s, c, i + 1),
				count_letters(s, c, i + 1));
		if (ptr[i] == NULL)
		{
			free_split(ptr, i);
			return (NULL);
		}
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

/*
int	main(void)
{
	char const	s[] = "Teste abc ds";
	char	**s2;
	int		i;

	i = 0;
	s2 = ft_split(s, ' ');
	while(s2[i])
	{
		printf("%s\n", s2[i]);
		i++;
	}
	return (0);
}
*/