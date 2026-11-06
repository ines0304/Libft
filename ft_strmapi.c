/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:44:21 by insantia          #+#    #+#             */
/*   Updated: 2026/11/06 14:13:46 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len_s;
	unsigned int	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	str = malloc(len_s * sizeof(char) + 1);
	if(str == NULL)
		return (NULL);
	i = 0;
	while(s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char alternate_case(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z')
        c += 32;
 	if (i % 2 != 0 && c >= 'a' && c <= 'z')
        c -= 32;
    return c;
}

int main(void)
{
	char *str = ft_strmapi("Hello, world", alternate_case);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/