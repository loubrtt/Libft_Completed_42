/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:02:51 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:56:20 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while ((dst[i] != '\0') && (dst[i]) && (i < dstsize - 1))
		i++;
	while ((src[j]) && (i < dstsize - 1))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (len_dst + ft_strlen(src));
}

// #include <stdio.h>
// #include <bsd/string.h>//compiler avec le flag -lbsd
// int main (void)
// {
// 	char dst[10] = "Ligne ";
// 	char *src = "du code";
// 	char dsti[10] = "Ligne ";
// 	char *srci = "du code";
// 	size_t len = 6;

// 	printf("%zu = len de ma fonction t\n%zu = len de la fonction officielle\n\n",
// 	ft_strlcat(dst, src, len), strlcat(dsti, srci, len));
// 	printf("%s ma fonction\n%s la fonction officielle\n", dst, dsti);
// }