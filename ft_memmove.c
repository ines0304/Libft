/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:31:14 by insantia          #+#    #+#             */
/*   Updated: 2026/10/31 14:14:07 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;
	size_t				i;

	ptr = (unsigned char *)dest;
	ptr2 = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (ptr > ptr2)
	{
		while (n > 0)
		{
			ptr[n - 1] = ptr2[n -1];
			n--;
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			ptr[i] = ptr2[i];
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned char	src[] = "Hello";
	unsigned char	det[] = "goodbye";
	
	printf("%s\n", (unsigned char *)ft_memmove(det, src, 3));
	printf("%s", (unsigned char *)ft_memmove(src + 2, src, 3));
	return (0);
}
*/