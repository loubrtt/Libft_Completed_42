/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:32:43 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:25:57 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastone;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	lastone = *lst;
	while (lastone -> next != NULL)
		lastone = lastone -> next;
	lastone -> next = new;
}

// #include <stdio.h>
// int main (void)
// {
// 	int content1 = 10;
// 	int content2 = 15;
// 	t_list *list = ft_lstnew(&content1);
// 	t_list *new = ft_lstnew(&content2);
	
// 	printf("premier element %d \n", *(int *)list->content);
// 	ft_lstadd_back(&list, new);
// 	printf("element suivant %d", *(int *)list->next ->content);
// }