/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-06 22:08:34 by insantia          #+#    #+#             */
/*   Updated: 2026-11-06 22:08:34 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

/*
int	main(void)
{
	t_list	*head = NULL;
	t_list	*midle;
	t_list	*end;
	int	i;

	//head = ft_lstnew("Hello");
	midle = ft_lstnew("how are you");
	end = ft_lstnew("Bye");
	ft_lstadd_front(&end, midle);
	ft_lstadd_front(&midle, head);
	printf("%s ", (char *) head ->content);
	printf("%s ", (char *) head ->next->content);
	printf("%s\n", (char *) head ->next->next->content);
	i = ft_lstsize(head);
	printf("%d", i);
	return (0);
}
*/