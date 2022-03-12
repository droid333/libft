/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:04:07 by slucas            #+#    #+#             */
/*   Updated: 2022/03/13 00:19:37 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (set[j])
	{
		while (s1[i] == set[j])
		{
			i++;
			count++;
			j = 0;
		}
		j++;
	}
	return (count);
}

static char	*ft_strrev(char const *s, int len)
{
	int		i;
	char	temp;
	char	*str;

	i = 0;
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	while (len)
	{
		temp = s[i];
		str[i] = s[len - 1];
		str[len - 1] = temp;
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		total;
	int		start;
	int		end;
	int		i;

	if (!*s1)
		return (0x0);
	start = ft_count(s1, set);
	str = ft_strrev(s1, ft_strlen(s1));
	end = ft_count(str, set);
	free(str);
	total = ft_strlen(s1) - (start + end);
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
