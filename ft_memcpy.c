/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:24:59 by insantia          #+#    #+#             */
/*   Updated: 2026/11/05 11:08:24 by insantia         ###   ########.fr       */
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
	i = 0;
	if (!src || !dest)
		return (NULL);
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