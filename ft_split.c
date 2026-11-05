/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:11:30 by insantia          #+#    #+#             */
/*   Updated: 2026/11/05 12:51:52 by insantia         ###   ########.fr       */
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
	return (count + 1);
}

static int	count_letters(char const *s, char c, int word)
{
	static int	count;
	static int	i;
	static int	start;

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

static int	ft_first_position(char const *s, char c, int word)
{
	static int	count;
	static int	i;

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

	words = count_words(s, c);
	ptr = malloc((words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (words > i)
	{
		ptr[i] = malloc(count_letters(s, c, i + 1) * sizeof(char));
		if (ptr[i] == NULL)
		{
			free_split(ptr, words);
			return (NULL);
		}
		ptr[i] = ft_substr(s, ft_first_position(s, c, i + 1),
				count_letters(s, c, i + 1));
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
/*
int	main(void)
{
	char const	s[] = "Tetse abc ds";
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