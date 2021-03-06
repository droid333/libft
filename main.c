/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:09:18 by slucas            #+#    #+#             */
/*   Updated: 2022/03/21 15:47:25 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
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
	printf("la vraie::: %s\n", strchr("tripouille", 't' + 256));
	printf("la mienne:: %s\n", ft_strchr("tripouille", 't' + 256));
	return (0);
}
*/

/**********
 * FT_STRRCHR *
 * *********/
/*
int	main(void)
{
	printf("la vraie::: %s\n", strrchr("tripouille", 't' + 256));
	printf("la mienne:: %s\n", ft_strrchr("tripouille", 't' + 256));
	return (0);
}
*/

/**********
 * FT_STRNCMP *
 * *********/
/*
int	main(void)
{
	char	s1[] = "t";
	char	s2[] = "";
	size_t	n = 0;

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
	char	hay[] = "MZIRIBMZIRIBMZE123";
	char	nee[] = "MZIRIBMZE";
	size_t	n = ft_strlen(nee);

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
	char	*s1 = strdup("");
	char	*s2 = ft_strdup("");

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
	char	*test = ft_substr("bonjour", 10, 1);

	printf("test::: %s\n", test);
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
	char	*s = ft_strjoin("", "");

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
	char	*str = ft_strtrim(" \t \t \n  \n\n\n\t", " \n\t");

	printf("%s\n", str);
	free(str);
	return (0);
}
*/

/**********
 * FT_SPLIT *
 * *********/
/*
int	main(void)
{
	char	s[] = " bonjour les     gen s ";
	char	c = ' ';
	char	**ptr = ft_split(s, c);

	// free les char* avec une while (free(tabptr[i]))
	free(ptr);
	return (0);
}
*/

/**********
 * FT_ITOA *
 * *********/
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
*/

/**********
 * FT_STRMAPI *
 * *********/
/*
static char	test(unsigned int i, char c)
{
	i *= 2;
	c -= 32;
	printf("%d", i);
	printf("%c", c);
	return (c);
}

int	main(void)
{
	char	s[] = "bonjour";
	char	(*f)(unsigned int, char) = &test;
	
	printf("%s", ft_strmapi(s, f));
	return (0);
}
*/

/**********
 * FT_STRITERI *
 * *********/
/*
static void	test(unsigned int i, char *c)
{
	i *= 1;
	*c -= 32;
	//printf("%d", i);
	printf("%s", c);
}

int	main(void)
{
	char str[] = "bonjour";
	void	(*f)(unsigned int, char*) = &test;
	
	ft_striteri(str, f);
	return (0);
}
*/

/**********
 * FT_PUTCHAR_FD *
 * *********/
/*
int	main(void)
{
	ft_putchar_fd('L', 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
*/

/**********
 * FT_PUTSTR_FD *
 * *********/
/*
int	main(void)
{
	ft_putstr_fd("salut", 1);
	ft_putstr_fd("bonjour", 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
*/

/**********
 * FT_PUTENDL_FD *
 * *********/
/*
int main(void)
{
	ft_putendl_fd("salut", 1);
	return (0);
}
*/

/**********
 * FT_PUTNBR_FD *
 * *********/
/*
int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}
*/

/******************************************
 ******************************************/

/**********
 * FT_LSTNEW *
 * *********/
/*
int	main(void)
{
	t_list *list;
	//list = NULL;
	list = ft_lstnew("tutu");
	
	//while (list)
	ft_putstr_fd(list->content, 1);
	//free(list);
	return (0);
}
*/

/**********
 * FT_LSTADD_FRONT *
 * *********/
/*
int	main(void)
{
	t_list **lst = NULL;
	
	t_list *a = NULL;
	t_list *b = NULL;
	t_list *c = NULL;
	t_list *d = NULL;
	
	lst = malloc(sizeof(*lst));
	
	a = ft_lstnew("0");
	b = ft_lstnew("1");
	c = ft_lstnew("2");
	d = ft_lstnew("3");
	
	*lst = b;
	
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	ft_lstadd_front(lst, a);
	t_list *tmp;
	tmp = a;
	
	while (tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	printf("%s\n", (*lst)->content);
	return (0);
}
*/

/**********
 * FT_LSTSIZE *
 * *********/
/*
int	main(void)
{
	t_list *a = NULL;
	t_list *b = NULL;
	t_list *c = NULL;
	
	a = ft_lstnew("0");
	b = ft_lstnew("1");
	c = ft_lstnew("2");
	
	a->next = b;
	b->next = c;
	c->next = NULL;

	printf("%d\n", ft_lstsize(a));
	return (0);
}
*/

/**********
 * FT_LSTLAST *
 * *********/
/*
int	main(void)
{
	t_list *a = NULL;
	t_list *b = NULL;
	t_list *c = NULL;
	t_list *d = NULL;
	
	a = ft_lstnew("0");
	b = ft_lstnew("1");
	c = ft_lstnew("2");
	d = ft_lstnew("3");
	
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	printf("%s\n", (ft_lstlast(a)->content));
	return (0);
}
*/

/**********
 * FT_LSTADD_BACK *
 * *********/

int main(void)
{
	t_list	**lst = NULL;
	
	t_list	*a = NULL;
	t_list	*b = NULL;
	t_list	*c = NULL;
	t_list	*d = NULL;

	lst = malloc(sizeof(*lst));
	
	a = ft_lstnew("0");
	b = ft_lstnew("1");
	c = ft_lstnew("2");
	d = ft_lstnew("3");
	
	*lst = b;

	b->next = c;
	c->next = d;
	d->next = NULL;
	a->next = NULL;

	ft_lstadd_back(lst, a);
	
	t_list	*tmp = NULL;
	tmp = *lst;
	//tmp = b;
	while (tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	printf("%p\n", d->next);
	printf("%p\n", a);
	return (0);
}


