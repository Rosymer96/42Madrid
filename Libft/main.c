#include "libft.h"

int main(void)
{

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
	return 0;
}
