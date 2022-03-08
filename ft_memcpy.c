/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:39:08 by slucas            #+#    #+#             */
/*   Updated: 2022/03/08 15:47:34 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr;

	ptr = (char *)dst;
	if (!dst || !src)
		return (dst);
	while (n--)
		*ptr++ = *(char *)src++;
	return (dst);
}
