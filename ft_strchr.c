/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:06:40 by slucas            #+#    #+#             */
/*   Updated: 2022/03/18 15:09:34 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s);
	while (i <= j)
	{
		if (s[i] == c)
		{
			s = &s[i];
			return ((char *)s);
		}
		i++;
	}
	return (0x0);
}
