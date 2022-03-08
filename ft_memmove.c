/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:07:05 by slucas            #+#    #+#             */
/*   Updated: 2022/03/08 18:49:16 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (!dst || !src)
		return (dst);
	if (dst > src)
	{
		dst2 += len - 1;
		src2 += len - 1;
		while (len--)
			*dst2-- = *src2--;
	}
	else
	{
		while (len--)
			*dst2++ = *src2++;
	}
	return (dst);
}
