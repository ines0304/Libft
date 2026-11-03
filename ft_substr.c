/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:56:48 by insantia          #+#    #+#             */
/*   Updated: 2026/11/03 18:09:21 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			s_len;
	size_t			j;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ("");
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] != '\0' && i < (start + len))
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

int	main(void)
{
	char	s[] = "Hello world";
	char		*str;

	str = ft_substr(s, 11, 3);
	printf("%s\n", str);
	free(str);
	return (0);
}