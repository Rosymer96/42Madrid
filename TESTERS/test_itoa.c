/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosvela <rosvela@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:26:33 by rosvela           #+#    #+#             */
/*   Updated: 2026/02/03 15:31:49 by rosvela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    int	test_values[] = {0, 1, -1, 42, -42, 2147483647, -2147483648, 999, -999};
    char	*result;
    int	i;

    printf("=== Testing ft_itoa ===\n\n");
    
    i = 0;
    while (i < 9)
    {
        result = ft_itoa(test_values[i]);
        printf("Input: %d\n", test_values[i]);
        printf("Output: %s\n", result);
        printf("Expected: %d\n\n", test_values[i]);
        free(result);
        i++;
    }
    
    printf("=== Additional edge cases ===\n\n");
    
    // Test NULL pointer handling (if function returns NULL)
    result = ft_itoa(0);
    printf("Zero test: %s (expected: '0')\n", result);
    free(result);
    
    // Test negative boundary
    result = ft_itoa(-2147483648);
    printf("Min int test: %s (expected: '-2147483648')\n", result);
    free(result);
    
    // Test positive boundary
    result = ft_itoa(2147483647);
    printf("Max int test: %s (expected: '2147483647')\n", result);
    free(result);
    
    return (0);
}