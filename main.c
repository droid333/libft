/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:09:18 by slucas            #+#    #+#             */
/*   Updated: 2022/03/15 20:31:07 by slucas           ###   ########.fr       */
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
	char	*dst = NULL;
	char	*src = NULL;

	char	*dst1 = NULL;
	char	*src1 = NULL;

	char	*dst2 = NULL;
	char	*src2 = NULL;
	size_t	n = 2;

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

	printf("la vraie::: %s\n", memmove(dst1, dst1 + 2, n));
	printf("la mienne:: %s\n", ft_memmove(dst2, dst2 + 2, n));
	return (0);
}
*/

/**********
 * FT_STRLCPY *
 * *********/
/*
int	main(void)
{
	char	dst1[] = "hello";
	char	src1[] = "bonjour";

	char	dst2[] = "hello";
	char	src2[] = "bonjour";
	size_t	n = 2;

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
/*
int	main(void)
{
	char	dst1[100] = "1234";
	char	src1[100] = "ABCD";

	char	dst2[100] = "1234";
	char	src2[100] = "ABCD";
	size_t	n = 2;

	printf("la vraie::: %lu\n", strlcat(dst1, src1, n));
	printf("la mienne:: %lu\n", ft_strlcat(dst2, src2, n));
	printf("la vraie::: %s\n", dst1);
	printf("la mienne:: %s\n", dst2);
	return (0);
}
*/

/**********
 * FT_TOUPPER *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %c\n", toupper('j'));
	printf("la mienne:: %c\n", ft_toupper('j'));
	return (0);
}
*/

/**********
 * FT_TOLOWER *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %c\n", tolower('Y'));
	printf("la mienne:: %c\n", ft_tolower('Y'));
	return (0);
}
*/

/**********
 * FT_STRCHR *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %s\n", strchr("salut", '\0'));
	printf("la mienne:: %s\n", ft_strchr("salut", '\0'));
	return (0);
}
*/

/**********
 * FT_STRRCHR *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %s\n", strrchr("saluat", 'u'));
	printf("la mienne:: %s\n", ft_strrchr("saluat", 'u'));
	return (0);
}
*/

/**********
 * FT_STRNCMP *
 * *********/
/*
int	main(void)
{
	char	s1[] = "bonjour";
	char	s2[] = "bonjour";
	size_t	n = 15;

	printf("la vraie::: %d\n", strncmp(s1, s2, n));
	printf("la mienne:: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/

/**********
 * FT_MEMCHR *
 * *********/
/*
int	main(void)
{
	char	s[] = "bonjour";
	int		c = 'n';
	size_t	n = 3;

	printf("la vraie::: %s\n", memchr(s, c, n));
	printf("la mienne:: %s\n", ft_memchr(s, c, n));
	return (0);
}
*/

/**********
 * FT_MEMCMP *
 * *********/
/*
int	main(void)
{
	char	s1[] = "bonjour";
	char	s2[] = "bonjiur";
	size_t	n = 2;

	printf("la vraie::: %d\n", memcmp(s1, s2, n));
	printf("la mienne:: %d\n", ft_memcmp(s1, s2, n));
	return (0);
}
*/

/**********
 * FT_STRNSTR *
 * *********/
/*
int	main(void)
{
	char	hay[] = "bonjour";
	char	nee[] = "";
	size_t	n = 0;

	printf("la vraie::: %s\n", strnstr(hay, nee, n));
	printf("la mienne:: %s\n", ft_strnstr(hay, nee, n));
	return (0);
}
*/

/**********
 * FT_ATOI *
 * *********/
/*
int	main(void)
{
	char	str[] = "   -458hj6";

	printf("la vraie::: %d\n", atoi(str));
	printf("la mienne:: %d\n", ft_atoi(str));
	return (0);
}
*/

/**********
 * FT_CALLOC *
 * *********/
/*
int	main(void)
{
	// a tester en remplissant avec des 1 (ft_memset)
	size_t	count = 5;
	size_t	size = 4;

	char	*test1 = calloc(count, size);
	char	*test2 = ft_calloc(count, size);
	
	printf("la vraie::: %s\n", test1);
	printf("la mienne:: %s\n", test2);

	free(test1);
	free(test2);
	return (0);
}
*/

/**********
 * FT_STRDUP *
 * *********/
/*
int	main(void)
{
	char	*s1 = strdup("lol");
	char	*s2 = ft_strdup("lol");

	printf("la vraie::: %s\n", s1);
	printf("la mienne:: %s\n", s2);

	free(s1);
	free(s2);
	return (0);
}
*/

/******************************************
 ******************************************/

/**********
 * FT_SUBSTR *
 * *********/
/*
int	main(void)
{
	char	*test = ft_substr("bonjour", 2, 5);

	printf("%s\n", test);
	free(test);
	return (0);
}
*/

/**********
 * FT_STRJOIN *
 * *********/
/*
int	main(void)
{
	char	*s = ft_strjoin("erty", "BNJFU");

	printf("%s\n", s);
	free(s);
	return (0);
}
*/

/**********
 * FT_STRTRIM *
 * *********/
/*
int	main(void)
{
	char	*str = ft_strtrim("12bon121", "1");

	printf("%s\n", str);
	free(str);
	return (0);
}
*/

/**********
 * FT_SPLIT *
 * *********/

int	main(void)
{
	char	s[] = "bojonjour";
	char	c = 'j';
	char	**ptr = ft_split(s, c);

	free(ptr);
	return (0);
}

