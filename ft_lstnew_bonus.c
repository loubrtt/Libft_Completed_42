/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:48:03 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:38:29 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (newlist == NULL)
		return (newlist);
	newlist -> content = content;
	newlist -> next = NULL;
	return (newlist);
}

// #include <stdio.h>
// int main (void)
// {
// 	int *i;
// 	int a;
	
// 	a = 10;
// 	i = &a;
// 	t_list *list = ft_lstnew(i);
// 	printf("mon int = %d \n\nle node creer avec mon int = %d", *i, *(int *)list->content);
// }