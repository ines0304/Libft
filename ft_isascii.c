/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:37:48 by insantia          #+#    #+#             */
/*   Updated: 2026/11/13 12:13:26 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	c[] = "124hjuk.,";
	int	i;
	i = 0;
	while (c[i] != '\0')
	{
		printf("%d\n", ft_isascii(c[i]));
		i++;
	}
	return (0);
}
*/