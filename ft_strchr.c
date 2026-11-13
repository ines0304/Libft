/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 12:28:24 by insantia          #+#    #+#             */
/*   Updated: 2026-11-13 12:28:24 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	letter;
	int				i;

	letter = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == letter)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (letter == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main(void)
{
    char  s[] = "Hello";
    
    printf("%s\n", ft_strchr(s, 'e'));
    printf("%s", strchr(s, 'H'));
    return (0);
}
*/