/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:18:45 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:42:42 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *haystack = "Alessia";
    char *needle = "essi";

    printf("ft_strnstr [%s]\n", ft_strnstr(haystack, needle, 10));
    printf("strnstr [%s]\n\n", strnstr(haystack, needle, 10));

	printf("ft_strnstr [%s]\n", ft_strnstr(haystack, needle, 5));
    printf("strnstr [%s]\n\n", strnstr(haystack, needle, 5));

	printf("ft_strnstr [%s]\n", ft_strnstr("Hola Alessia", "Hola", 4));
    printf("strnstr [%s]\n\n", strnstr("Hola Alessia", "Hola", 4));

	printf("ft_strnstr [%s]\n", ft_strnstr("Hola Alessia", "", 10));
    printf("strnstr [%s]\n\n", strnstr("Hola Alessia", "", 10));

	printf("ft_strnstr [%s]\n", ft_strnstr("", "Hola", 10));
    printf("strnstr [%s]\n\n", strnstr("", "Hola", 10));

	printf("ft_strnstr [%s]\n", ft_strnstr("Hola Alessia", "Hola", 1000));
    printf("strnstr [%s]\n\n", strnstr("Hola Alessia", "Hola", 1000));
    return (0);
}
