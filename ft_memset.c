/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 09:19:33 by insantia          #+#    #+#             */
/*   Updated: 2026/10/29 18:42:56 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned char	*ptr ;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		ptr[n - 1] = (unsigned char) c;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char str[20] = "Hello";

    ft_memset(str, '0', 20);
    printf("%s", str);
    return (0);
}
*/