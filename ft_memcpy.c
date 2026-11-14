/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:27:30 by insantia          #+#    #+#             */
/*   Updated: 2026/11/14 11:09:14 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (n != 0)
	{
		ptr2[i] = ptr1[i];
		n--;
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	unsigned char	src[] = "Hello";
	unsigned char	dest[5];

	printf("%s", (unsigned char *)ft_memcpy(dest, src, 3));
	return (0);
}
*/