/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:44:47 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:34:51 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastnode;

	if (lst == NULL)
		return (lst);
	lastnode = lst;
	while (lastnode -> next != NULL)
		lastnode = lastnode -> next;
	return (lastnode);
}

#include <stdio.h>
int main (void)
{
	int a = 12;
	int b = 15;
	t_list *list = ft_lstnew(&a);
	t_list *suivant = ft_lstnew(&b);
	ft_lstadd_back(&list, suivant);
	printf("premier node = [%d] \ndeuxieme node = [%d]\n\n", *(int *)list->content, *(int *)list->next->content);
	printf("retour de la fonction = [%d]", *(int *)ft_lstlast(list)->content);
}