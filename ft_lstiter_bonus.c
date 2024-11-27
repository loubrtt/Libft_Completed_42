/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:42:49 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:30:59 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*todo;
	t_list	*suivant;

	if (lst == NULL || f == NULL)
		return ;
	todo = lst;
	while (todo != NULL)
	{
		suivant = todo -> next;
		f(todo -> content);
		todo = suivant;
	}
}

// #include <stdio.h>
// void multiply(void *content)
// {
// 	*(int *)content *= 10;
// }

// int main (void)
// {
// 	int a = 5;
// 	int b = 6;
// 	t_list *list = ft_lstnew(&a);
// 	t_list *new = ft_lstnew(&b);
// 	ft_lstadd_back(&list, new);
// 	printf("[%d] valeur 1 avant la fonction\n", *(int *)list->content);
// 	printf("[%d] valeur 2 avant la fonction\n\n", *(int *)list->next->content);
// 	ft_lstiter(list, &multiply);
// 	printf("[%d] valeur 1 apres la fonction\n", *(int *)list->content);
// 	printf("[%d] valeur 2 apres la fonction\n", *(int *)list->next->content);
// }