/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 12:27:43 by insantia          #+#    #+#             */
/*   Updated: 2026-11-13 12:27:43 by insantia         ###   ########.pt       */
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