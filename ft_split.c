/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:48:23 by slucas            #+#    #+#             */
/*   Updated: 2022/03/15 20:33:17 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
		if (s[i])
			i++;
	}
	return (count);
}

static int	ft_size(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i] && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

static char	*ft_dup(char const *s, int size)
{
	char	*dst;
	int		i;
	
	i = 0;
	dst = malloc(sizeof(*dst) * (size + 1));
	if (!dst)
		return (NULL);
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	*ft_pos(char const *s, char c, int index)
{
	char	*pos;

	pos = (char *)s;
	while (pos[index])
	{
		if (pos[index] != c && pos[index - 1] != c)
			return (&pos[index]);
		index++;
	}
	return (0x0);
}

char	**ft_split(char const *s, char c)
{
	char	**tabptr;
	int		count;
	int		i;
	int		j;
	
	count = 0;
	count = ft_count(s, c);
	tabptr = malloc(sizeof(*tabptr) * (count + 1));
	i = 0;
	j = 0;
	while (i < count)
	{
		while (s[j])
		{
			//if ou while
			//tabptr[i] = ft_dup(&s[j], ft_size(&s[j], c));
			// CA A FAIRE DANS LE DUP ?
			tabptr[i] = ft_dup(ft_pos(s, c, j), ft_size(ft_pos(s, c, j), c));
			printf("%s\n", tabptr[i]);
			j++;
		}
		i++;
	}
	tabptr[i] = "0";
	return (tabptr);
}
