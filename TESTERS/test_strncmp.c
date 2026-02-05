/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:21:24 by rosvela           #+#    #+#             */
/*   Updated: 2026/01/15 11:43:06 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s1 = "Alessia";
    char *s2 = "Alexander";

    printf("ft_strncmp: [%d]\n", ft_strncmp(s1, s2, 3)); 
	printf("strncmp: [%d]\n", strncmp(s1, s2, 3)); 


    printf("ft_strncmp: [%d]\n", ft_strncmp(s1, s2, 5));
	printf("strncmp: [%d]\n", strncmp(s1, s2, 5));

	printf("ft_strncmp: [%d]\n", ft_strncmp(s1, s2, 5));
	printf("strncmp: [%d]\n", strncmp(s1, s2, 5));

	char s3[] = {169, 0};
	char s4[] = {65, 0};

	printf("ft_strncmp: [%d]\n", ft_strncmp(s3, s4, 1));
	printf("strncmp: [%d]\n", strncmp(s3, s4, 1));
    return (0);
}