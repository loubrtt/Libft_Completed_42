/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:01:28 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:59:10 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main (void)
// {
//     char *str = "Ligne de code";

//     printf("%s \n", ft_strrchr(str, 32));
// 	printf("%s", ft_strrchr(str, 32));
// }