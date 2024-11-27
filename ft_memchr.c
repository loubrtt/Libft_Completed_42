/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 00:11:34 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:41:42 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
//     char *s = "ligne de code.";
//     int c = 108;
//     char *s1 = "ligne de code";
//     int c1 = 108;
//     size_t i = 0;
//     printf("ma fonction = %s \n\nla fonction officielle %s", (char *)ft_memchr(s,c, i), 
//     (char *)memchr(s1,c1 , i));
// }
