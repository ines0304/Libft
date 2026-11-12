/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:53:01 by insantia          #+#    #+#             */
/*   Updated: 2026/11/12 10:33:46 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	letter;
	int				len_s;

	letter = (unsigned char)c;
	len_s = ft_strlen(s);
	while (len_s >= 0)
	{
		if ((unsigned char)s[len_s] == letter)
		{
			return ((char *)&s[len_s]);
		}
		len_s--;
	}
	return (NULL);
}
/*
int main(void)
{
    const char  s[] = "";

    printf("%s\n", ft_strrchr(s, 'p'));
    printf("%s", strrchr(s, 'l'));
    return (0);
}
*/