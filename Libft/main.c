#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    char    *s = "Hello, world!";
    char    *res;

    printf("--- INICIO DE TESTS.  FT_SUBSTR ---\n");

    // Test 1: Caso normal
    res = ft_substr(s, 0, 5);
    printf("Test 1 (Hello):  [%s]\n", res);
    free(res);

    // Test 2: Desde la mitad
    res = ft_substr(s, 7, 5);
    printf("Test 2 (world):  [%s]\n", res);
    free(res);

    // Test 3: Cortar hasta el final (len muy grande)
    res = ft_substr(s, 7, 50);
    printf("Test 3 (world!): [%s]\n", res);
    free(res);

    // Test 4: START FUERA DE RANGO (El que te fallaba)
    // Se espera un string vacio reservado, nada mas.
    res = ft_substr(s, 50, 5);
    if (res == NULL)
        printf("Test 4 (Error):  NULL (No debería ser NULL)\n");
    else
    {
        printf("Test 4 (Vacio):  [%s]\n", res);
        if (res[0] == '\0')
            printf("      -> OK: El primer caracter es un nulo.\n");
        else
            printf("      -> FAIL: Contiene basura: ASCII %d ('%c')\n", res[0], res[0]);
        free(res);
    }

    // Test 5: Len 0
    res = ft_substr(s, 0, 0);
    printf("Test 5 (Vacio):  [%s]\n", res);
    free(res);
    printf("Test strdup Vacio: [%s]\n", ft_strdup(""));
    printf("--- FIN DE TESTS ---\n");
    return (0);
    */
    printf("--- INICIO DE TESTS.  FT_SUBSTR ---\n");

    char *s1;
    char *s2;
    char *res;

    // -------------------------
    // Test 1: Strings normales
    // -------------------------
    s1 = "Hola, ";
    s2 = "mundo!";
    res = ft_strjoin(s1, s2);
    printf("Test 1 (Normal):     [%s] | Esperado: [Hola, mundo!]\n", res);
    free(res);

    // -------------------------
    // Test 2: s1 vacío
    // -------------------------
    s1 = "";
    s2 = "Prueba";
    res = ft_strjoin(s1, s2);
    printf("Test 2 (s1 vacio):   [%s] | Esperado: [Prueba]\n", res);
    free(res);

    // -------------------------
    // Test 3: s2 vacío
    // -------------------------
    s1 = "Prueba";
    s2 = "";
    res = ft_strjoin(s1, s2);
    printf("Test 3 (s2 vacio):   [%s] | Esperado: [Prueba]\n", res);
    free(res);

    // -------------------------
    // Test 4: Ambos vacíos
    // -------------------------
    s1 = "";
    s2 = "";
    res = ft_strjoin(s1, s2);
    printf("Test 4 (Ambos vacios): [%s] | Esperado: []\n", res);
    free(res);

    // -------------------------
    // Test 5: Strings largos
    // -------------------------
    s1 = "1234567890";
    s2 = "ABCDEFGHIJ";
    res = ft_strjoin(s1, s2);
    printf("Test 5 (Largo):      [%s] | Esperado: [1234567890ABCDEFGHIJ]\n", res);
    free(res);

    // -------------------------
    // Test 6: Caracteres especiales
    // -------------------------
    s1 = "Hola\n";
    s2 = "\tMundo!";
    res = ft_strjoin(s1, s2);
    printf("Test 6 (Especial):   [%s] | Esperado: [Hola\\n\\tMundo!]\n", res);
    free(res);

    // -------------------------
    // Test 7: NULL (opcional según implementación)
    // -------------------------
    s1 = NULL;
    s2 = "Hola";
    res = ft_strjoin(s1, s2);
    printf("Test 7a (s1 NULL):   [%s] | Esperado: [NULL]\n", res);
    free(res);

    s1 = "Hola";
    s2 = NULL;
    res = ft_strjoin(s1, s2);
    printf("Test 7b (s2 NULL):   [%s] | Esperado: [NULL]\n", res);
    free(res);

    printf("--- INICIO DE TESTS.  FT_STRTRIM ---\n");

    char *res1;
    // Test 1: espacios al inicio y final
    // -------------------------
    res1 = ft_strtrim("  Hola Mundo  ", " ");
    printf("Test 1 (espacios):    [%s] | Esperado: [Hola Mundo]\n", res1);
    free(res1);

    // -------------------------
    // Test 2: guiones al inicio y final
    // -------------------------
    res1 = ft_strtrim("--abc--", "-");
    printf("Test 2 (guiones):     [%s] | Esperado: [abc]\n", res1);
    free(res1);

    // -------------------------
    // Test 3: caracteres especiales
    // -------------------------
    res1 = ft_strtrim("\n\tHola\t\n", "\n\t");
    printf("Test 3 (especiales):  [%s] | Esperado: [Hola]\n", res1);
    free(res1);

    // -------------------------
    // Test 4: string vacío
    // -------------------------
    res1 = ft_strtrim("", " ");
    printf("Test 4 (vacio s1):    [%s] | Esperado: []\n", res1);
    free(res1);

    // -------------------------
    // Test 5: set vacío
    // -------------------------
    res1 = ft_strtrim("Hola Mundo", "");
    printf("Test 5 (vacio set):   [%s] | Esperado: [Hola Mundo]\n", res1);
    free(res1);

    // -------------------------
    // Test 6: s1 = set (todo eliminado)
    // -------------------------
    res1 = ft_strtrim("aaaaa", "a");
    printf("Test 6 (todo set):    [%s] | Esperado: []\n", res1);
    free(res1);

    // -------------------------
    // Test 7: sin coincidencias (no se recorta)
    // -------------------------
    res1 = ft_strtrim("Hola Mundo", "xyz");
    printf("Test 7 (sin recorte): [%s] | Esperado: [Hola Mundo]\n", res1);
    free(res1);

    // -------------------------
    // Test 8: NULL (opcional, según implementación)
    // -------------------------
    res1 = ft_strtrim(NULL, " ");
    printf("Test 8a (s1 NULL):    [%s] | Esperado: [NULL]\n", res1); // imprime (null)
    free(res1);

    res1 = ft_strtrim("Hola", NULL);
    printf("Test 8b (set NULL):   [%s] | Esperado: [NULL]\n", res1); // imprime (null)
    free(res1);

    // -------------------------
    // Test: set con 2 caracteres
    // -------------------------
    res1 = ft_strtrim("++_Hola_Mundo__+", "+_");
    printf("Test Set 2 chars:     [%s] | Esperado: [Hola_Mundo]\n", res1);
    free(res1);

    // -------------------------
    // Test: set con 3 caracteres
    // -------------------------
    res1 = ft_strtrim("***--Hola--***", "*-");
    printf("Test Set 3 chars:     [%s] | Esperado: [Hola]\n", res1);
    free(res1);
}