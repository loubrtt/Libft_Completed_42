/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loubriottet <loubriottet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:54:29 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/27 13:48:00 by loubriottet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	countwords(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			while (str[i] == c && str[i])
				i++;
		}
		if (str[i] != c && str[i] != '\0')
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

static size_t	ft_lenwords(const char *s, int index, char c)
{
	size_t	i;
	size_t	len;
	int		count;

	i = 0;
	len = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (count != index && s[i] != 0)
	{
		while (s[i] != c)
			i++;
		count++;
		while (s[i] == c && s[i])
			i++;
	}
	while (s[i] != c && s[i] != 0)
	{
		len++;
		i++;
	}
	return (len);
}

static void	fillwords(char **bigtab, const char *s, char c)
{
	int		i;
	int		y;
	size_t	index;

	index = 0;
	i = 0;
	y = 0;
	while (s[i] != '\0' && index < countwords(s, c))
	{
		while (s[i] == c && s[i] != 0)
			i++;
		y = 0;
		while (s[i] != c && s[i] != 0)
			bigtab[index][y++] = s[i++];
		bigtab[index][y] = 0;
		index++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**bigtab;
	size_t	index;
	size_t	y;

	y = 0;
	index = 1;
	bigtab = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (bigtab == NULL)
		return (NULL);
	while (y < countwords(s, c))
	{
		bigtab[y] = malloc(sizeof(char) * (ft_lenwords(s, y, c) + 1));
		if (bigtab[y] == NULL)
		{
			free (bigtab);
			return (NULL);
		}
		y++;
		index++;
	}
	fillwords(bigtab, s, c);
	bigtab[index - 1] = NULL;
	return (bigtab);
}

// #include <stdio.h>
// int main (void)
// {
// 	char *str = "Ligne de code";
// 	int i = 0;
// 	char separateur = ' ';
// 	int j = 0;

// 	char **split = ft_split(str, separateur);
// 	while (split[i])
// 	{
// 		while (split[i][j] != '\0')
// 		{
// 			printf("%c", split[i][j]);
// 			j ++;
// 		}
// 		printf("\n");
// 		i++;
// 		j = 0;
// 	}
// 	while (i >= 0)
// 	{
// 		free(split[i]);
// 		i--;
// 	}
// 	free (split);
// }
