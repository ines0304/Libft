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
	//se nao der espaço na pricipal, posso logo fazer o malloc aqui
	static int	j;

	j = 0;
	while (src[j] != '\0' && j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**vtr;
	int		i;

	vtr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (vtr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (is_equal(s, s[i]) == 0)
			break ;
		ft_split(&s[i + 1], c)
		i++;
		//posso so ir copiando enquanto nao for igualm, quando for igua damos break chamamos recursiva a comecar na proxima casa
		// a pergunat é, comom é que vamos guardando as palavras ? precisamos de ter o double pointer ja com a memoria alocada e ir escrevendo em cada posicao
		// ou seja quando chegarmos à proxima posição temos que incrementar a posição do double pointer tambem 

	}
	str = malloc(i);
	if (str == NULL)
		return (NULL);
	copy(str, s, i);

}