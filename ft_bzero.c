/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:20:29 by insantia          #+#    #+#             */
/*   Updated: 2026/11/13 12:13:26 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		str[n - 1] = '\0';
		n--;
	}
}

/*
int	main(void)
{
	unsigned char	str[] = "Heloooooooool";
	int	i;

	ft_bzero(str, 3);
	i = 0;
	while (str[i] == '\0')
	{
		printf("%c ", str[i]);
		i++;
	}
	return (0);
}
*/