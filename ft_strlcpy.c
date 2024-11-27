/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:02:37 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:56:57 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
//     size_t i = 0;
//     char dst[i];
// 	char dsti[i];
//     const char * restrict src = "Ligne du code";
//     const char * restrict srci = "Ligne du code";
//     printf("Nombre de caractères copiés ma ft: 
// %zu\n", ft_strlcpy(dst, src, i));
//     printf("Contenu de dst : %s\n", dst);
// 	printf("Nombre de caractères copiés ft off: 
// %zu\n", strlcpy(dsti, srci, i));
//     printf("Contenu de dst : %s\n", dst);
//     return 0;
// }