/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:04:07 by slucas            #+#    #+#             */
/*   Updated: 2022/03/15 15:36:06 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s1, char const *set, int index)
{
	int	j;
	int	ref;
	int	count;

	j = 0;
	ref = 1;
	count = 0;
	if (index)
		ref = -ref;
	while (set[j])
	{
		while (s1[index] == set[j])
		{
			index += (1 * ref);
			count++;
			j = 0;
		}
		j++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		total;
	int		start;
	int		end;
	int		i;

	start = ft_count(s1, set, 0);
	end = ft_count(s1, set, (ft_strlen(s1) - 1));
	total = ft_strlen(s1) - (start + end);
	if (!*s1 || total < 0)
		return (0x0);
	str = malloc(sizeof(*str) * (total + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (total--)
	{
		str[i] = s1[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
