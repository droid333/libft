/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:09:18 by slucas            #+#    #+#             */
/*   Updated: 2022/03/08 20:59:42 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**********
 * FT_ISALPHA *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %d\n", isalpha('D'));
	printf("la mienne:: %d\n", ft_isalpha('D'));
	return (0);
}
*/

/**********
 * FT_ISDIGIT *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %d\n", isdigit('7'));
	printf("la mienne:: %d\n", ft_isdigit('7'));
	return (0);
}
*/

/**********
 * FT_ISALNUM *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %d\n", isalnum('a'));
	printf("la mienne:: %d\n", ft_isalnum('a'));
	return (0);
}
*/

/**********
 * FT_ISASCII *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %d\n", isascii('b'));
	printf("la mienne:: %d\n", ft_isascii('b'));
	return (0);
}
*/

/**********
 * FT_ISPRINT *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %d\n", isprint('g'));
	printf("la mienne:: %d\n", ft_isprint('g'));
	return (0);
}
*/

/**********
 * FT_STRLEN *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %lu\n", strlen("jourbon"));
	printf("la mienne:: %lu\n", ft_strlen("jourbon"));
	return (0);
}
*/

/**********
 * FT_MEMSET *
 * *********/
/*
int	main(void)
{
	char	str[] = "toutouger";
	char	str1[] = "toutouger";
	char	str2[] = "toutouger";
	int		c = 'e';
	size_t	len = 10;

	printf("la vraie::: %s\n", memset(str, c, len));
	printf("la vraie::: %s\n", memset(str1, c, len));
	printf("la mienne:: %s\n", ft_memset(str2, c, len));
	return (0);
}
*/

/**********
 * FT_BZERO *
 * *********/
/*
int	main(void)
{
	char	str1[] = "NULL";
	char	str2[] = "NULL";
	size_t	n = 2;

	bzero(str1, n);
	ft_bzero(str2, n);

	printf("la vraie::: %s\n", str1);
	printf("la mienne:: %s\n", str2);
	return (0);
}
*/

/**********
 * FT_MEMCPY *
 * *********/
/*
int	main(void)
{
	char	dst[] = "bonjour";
	char	src[] = "salutation";

	char	dst1[] = "bonjour";
	char	src1[] = "salutation";

	char	dst2[] = "bonjour";
	char	src2[] = "salutation";
	size_t	n = 8;

	printf("la vraie::: %s\n", memcpy(dst, src, n));
	printf("la vraie::: %s\n", memcpy(dst1, src1, n));
	printf("la mienne:: %s\n", ft_memcpy(dst2, src2, n));
	return (0);
}
*/

/**********
 * FT_MEMMOVE *
 * *********/
/*
int	main(void)
{
	char	dst1[] = "bonjour";
	char	dst2[] = "bonjour";
	size_t	n = 3;

	printf("la vraie::: %s\n", memmove(dst1 + 2, dst1, n));
	printf("la mienne:: %s\n", ft_memmove(dst2 + 2, dst2, n));
	return (0);
}
*/

/**********
 * FT_STRLCPY *
 * *********/
/*
int	main(void)
{
	char	dst1[] = "bonjour";
	char	src1[] = "salutationpour";

	char	dst2[] = "bonjour";
	char	src2[] = "salutationpour";
	size_t	n = 3;

	printf("la vraie::: %lu\n", strlcpy(dst1, src1, n));
	printf("la mienne:: %lu\n", ft_strlcpy(dst2, src2, n));
	printf("la vraie::: %s\n", dst1);
	printf("la mienne:: %s\n", dst2);
	return (0);
}
*/

/**********
 * FT_STRLCAT *
 * *********/

int	main(void)
{
	char	dst1[] = "bonjour";
	char	src1[] = "sa";

	char	dst2[] = "bonjour";
	char	src2[] = "sa";
	size_t	n = 9;

	printf("la vraie::: %lu\n", strlcat(dst1, src1, n));
	printf("la mienne:: %lu\n", ft_strlcat(dst2, src2, n));
	printf("la vraie::: %s\n", dst1);
	printf("la mienne:: %s\n", dst2);
	return (0);
}

