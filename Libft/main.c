#include "libft.h"

int main(void)
{
/* 
    // ft_calloc
	char *num = (char *)ft_calloc(5, sizeof(char));
	size_t i;
	int *num1 = (int *)ft_calloc(5, sizeof(int));
        for(i = 0; i < 5; i++)
		printf("%d", num1[i]);
	printf("\n");

	char *s = ft_calloc(4, sizeof(char));
	printf("[%c][%c][%c][%c]\n", s[0], s[1], s[2], s[3]);

    // ft_strdup

	char *src = "Adios";
	printf("%s\n", src);

	char *s = "Hello, world!";
    char *result; */

	// ft_strnstr
    // Caso 1: substring normal
	char *s = "Hello, world!";
    char *result = ft_substr(s, 0, 5);
    printf("Test 1: '%s' (esperado: 'Hello')\n", result);
    free(result);

    // Caso 2: substring desde mitad de cadena
    char *result1 = ft_substr(s, 7, 5);
    printf("Test 2: '%s' (esperado: 'world')\n", result);
    free(result1);

    // Caso 3: len mayor que lo que queda
    char *result2 = ft_substr(s, 7, 50);
    printf("Test 3: '%s' (esperado: 'world!')\n", result);
    free(result2);

    // Caso 4: start > longitud de la cadena
    char *result3 = ft_substr(s, 50, 5);
    printf("Test 4: '%s' (esperado: '')\n", result);
    free(result3);

    // Caso 5: start al final de la cadena
    char *result4 = ft_substr(s, 13, 5);
    printf("Test 5: '%s' (esperado: '')\n", result);
    free(result4);

    // Caso 6: len = 0
    char *result5 = ft_substr(s, 0, 0);
    printf("Test 6: '%s' (esperado: '')\n", result);
    free(result5);
	return 0;
}
