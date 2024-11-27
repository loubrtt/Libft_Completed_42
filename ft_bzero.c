/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:10:52 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:16:27 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}

// #include <stdio.h>
// int main (void)
// {
//     size_t n = 5;
// 	int i = 0;
//     char str[] = "Ligne de code.";
	
//     printf("La string avant la fonction => %s \n", str);
//     ft_bzero(str, n);
//     while (str[i] == 0)
//         i++;
//     printf("apres la fonction =>%s", str + i); 
// }
