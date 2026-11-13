/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 12:25:21 by insantia          #+#    #+#             */
/*   Updated: 2026-11-13 12:25:21 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new ->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*new;
	t_list	*start;

	new = ft_lstnew("goodbye");
	start = ft_lstnew("hello");

	ft_lstadd_front(&start, new);
	printf("%s\n", (char *)start->content);
	printf("%s", (char *)start->next->content);
	free(start);
	return (0);
}
*/