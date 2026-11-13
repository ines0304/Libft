/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:53:40 by insantia          #+#    #+#             */
/*   Updated: 2026/11/13 12:13:26 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (letter >= 'a' && letter <= 'z')
	{
		letter = letter - 32;
	}
	return (letter);
}

/*
int main (void)
{
    printf("%d", ft_toupper('+'));
    return (0);
}
*/