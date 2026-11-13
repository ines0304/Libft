/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:06:24 by insantia          #+#    #+#             */
/*   Updated: 2026/11/13 12:13:26 by insantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 9)
	{
		count++;
		n = (n / 10);
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	num;

	num = n;
	str = malloc(count(num) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	i = count(num);
	str[i] = '\0';
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		str[--i] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(-1235069));
	return (0);
}
*/