/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:14:53 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:16:03 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "!Hola Alessia!";
	char	*res_ft;
	char	*res_orig;

	res_ft = ft_memchr(str, 'A', 10);
	res_orig = memchr(str, 'A', 10);
	printf("ft_memchr: [%s]\n", res_ft);
	printf("memchr: [%s]\n\n", res_orig);

	res_ft = ft_memchr(str, 'i', 5);
	res_orig = memchr(str, 'i', 5);
	printf("ft_memchr: [%s]\n", res_ft);
	printf("memchr: [%s]\n\n", res_orig);

	res_ft = ft_memchr(str, '!', 2);
	res_orig = memchr(str, '!', 2);

	printf("ft_memchr: [%s]\n\n", res_ft);
	printf("memchr: [%s]\n\n", res_orig);

	res_ft = ft_memchr(str, '\0', 15);
	res_orig = memchr(str, '\0', 15);
	printf("ft_memchr: [%s]\n\n", res_ft);
	printf("memchr: [%s]\n\n", res_orig);

	return (0);
}