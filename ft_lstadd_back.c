/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 12:25:03 by insantia          #+#    #+#             */
/*   Updated: 2026-11-13 12:25:03 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
int	main(void)
{
	t_list	*start;
	t_list	*midle;
	t_list	*end;

	start = ft_lstnew("Hello");
	midle = ft_lstnew("How are you");
	end = ft_lstnew("Goodbye");
	ft_lstadd_back(&start, midle);
	ft_lstadd_back(&midle, end);
	printf("%s ", (char *)start ->content);
	printf("%s ", (char *)start ->next->content);
	printf("%s", (char *)start ->next->next->content);
	return (0);
}
*/