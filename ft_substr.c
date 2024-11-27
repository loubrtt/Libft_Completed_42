/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:00:41 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 14:01:06 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;

	if (ft_strlen(s) <= start)
			len = 0;
	else if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	i = 0;
	while (i < len)
	{
			ret[i] = s[start + i];
			i++;
	}
	ret[i] = '\0';
	return (ret);
}

// #include <string.h>
// #include <stdio.h>
// int main (void)
// {
//     char *str = "Ligne de code";
//     unsigned int start = 6;
//     size_t len = 1;
//	printf("ma string = %s\n", str);
// 	char *newstring = ft_substr(str, start, len);
//     printf("la nouvelle string %s", newstring);
// 	free(newstring);
// }
