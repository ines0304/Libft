/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:49:41 by insantia          #+#    #+#             */
/*   Updated: 2026/11/13 12:13:26 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (n != 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		n--;
		i++;
	}
	return (0);
}

/*
int main(void)
{
    unsigned char   str1[] = "hello";
    unsigned char   str2[] = "hellohh";

    printf("%d", ft_memcmp(str1, str2, 7));
    return (0);
}
*/