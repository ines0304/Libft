/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 12:28:03 by insantia          #+#    #+#             */
/*   Updated: 2026-11-13 12:28:03 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	if (fd < 0)
		return ;
	num = n;
	if (num < 0)
	{
		write (fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd((num / 10), fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}
*/