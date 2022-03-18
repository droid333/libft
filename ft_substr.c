/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:07:59 by slucas            #+#    #+#             */
/*   Updated: 2022/03/18 17:32:22 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	s_len;
	unsigned int	i;

	s_len = 0;
	s_len = ft_strlen(s);
	//if (*s && start < s_len && len > 0)
	if (*s && len > 0)
	{
		ptr = malloc(sizeof(*ptr) * (len + 1));
		if (!ptr)
			return (NULL);
		if (start >= s_len)
		{
			ptr[0] = '\0';
			return (ptr);
		}
		i = 0;
		while (s[i] && len--)
		{
			ptr[i] = s[i + start];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (0x0);
}
