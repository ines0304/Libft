/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insantia <insantia@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-13 12:25:49 by insantia          #+#    #+#             */
/*   Updated: 2026-11-13 12:25:49 by insantia         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst ->next != NULL)
	{
		lst = lst ->next;
	}
	return (lst);
}

/*
int	main(void)
{
	t_list	*head;
	t_list	*midle;
	t_list	*end;
	t_list	*lst;

	head = ft_lstnew("Hello");
	midle = ft_lstnew("how are you");
	end = ft_lstnew("bye");

	ft_lstadd_front(&end, midle);
	ft_lstadd_front(&midle, head);
	printf("%s ", (char *)head ->content);
	printf("%s ", (char *)head ->next->content);
	printf("%s\n", (char *)head ->next->next->content);
	lst = ft_lstlast(head);
	printf("%s", (char *)lst ->content);
	return (0);

}
*/