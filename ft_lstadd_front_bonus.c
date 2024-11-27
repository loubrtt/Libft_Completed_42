/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:37:11 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:21:15 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new -> next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main (void)
// {
// 	int content1 = 10 ;
// 	int content2 = 9;
// 	t_list *list = ft_lstnew(&content1);
// 	t_list *new = ft_lstnew(&content2);
	
// 	printf("premier element %d\n\n", *(int *)list->content);
// 	ft_lstadd_front(&list, new);
// 	printf("element 1 apres la fonction %d\n", *(int *)list->content);
// 	printf("element 2 %d", *(int *)list->next->content);
// }
