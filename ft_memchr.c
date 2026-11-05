/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:49:12 by insantia          #+#    #+#             */
/*   Updated: 2026/11/05 11:10:34 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    size_t  i;

    ptr = (unsigned char *)s;

    while (ptr[i] != '\0' && i < n)
    {
        if (ptr[i] == (unsigned char)c)
        {
            return (&ptr[i]);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    unsigned char   ptr[] = "Hello";

    printf("%s", (char *)ft_memchr(ptr, 'e', 3));
    return (0);
}