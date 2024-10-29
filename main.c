/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:20:38 by azahid            #+#    #+#             */
/*   Updated: 2024/10/23 17:51:59 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h" // Include your libft header

void test_ft_atoi() {
    printf("Testing ft_atoi:\n");
    char *test_cases[] = {"42", "-42", "0", "  1234", "999999999"};
    for (int i = 0; i < 5; i++) {
        printf("ft_atoi(\"%s\") = %d, atoi(\"%s\") = %d\n", test_cases[i], ft_atoi(test_cases[i]), test_cases[i], atoi(test_cases[i]));
    }
    printf("\n");
}

void test_ft_bzero() {
    printf("Testing ft_bzero:\n");
    char test_cases[5][10] = {"hello", "test", "12345", "world", "abcd"};
    for (int i = 0; i < 5; i++) {
        char ft_result[10], std_result[10];
        memcpy(ft_result, test_cases[i], 10);
        memcpy(std_result, test_cases[i], 10);
        ft_bzero(ft_result, 3);
        bzero(std_result, 3);
        printf("ft_bzero: %s, bzero: %s\n", ft_result, std_result);
    }
    printf("\n");
}

void test_ft_calloc() {
    printf("Testing ft_calloc:\n");
    int *ft_result = (int *)ft_calloc(5, sizeof(int));
    int *std_result = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("ft_calloc[%d] = %d, calloc[%d] = %d\n", i, ft_result[i], i, std_result[i]);
    }
    free(ft_result);
    free(std_result);
    printf("\n");
}

void test_ft_isalnum() {
    printf("Testing ft_isalnum:\n");
    char test_cases[] = {'A', '1', '%', 'z', ' '};
    for (int i = 0; i < 5; i++) {
        printf("ft_isalnum(%c) = %d, isalnum(%c) = %d\n", test_cases[i], ft_isalnum(test_cases[i]), test_cases[i], isalnum(test_cases[i]));
    }
    printf("\n");
}

void test_ft_isalpha() {
    printf("Testing ft_isalpha:\n");
    char test_cases[] = {'A', '1', '%', 'z', ' '};
    for (int i = 0; i < 5; i++) {
        printf("ft_isalpha(%c) = %d, isalpha(%c) = %d\n", test_cases[i], ft_isalpha(test_cases[i]), test_cases[i], isalpha(test_cases[i]));
    }
    printf("\n");
}

void test_ft_isascii() {
    printf("Testing ft_isascii:\n");
    int test_cases[] = {65, 127, 128, -1, 0};
    for (int i = 0; i < 5; i++) {
        printf("ft_isascii(%d) = %d, isascii(%d) = %d\n", test_cases[i], ft_isascii(test_cases[i]), test_cases[i], isascii(test_cases[i]));
    }
    printf("\n");
}

void test_ft_isdigit() {
    printf("Testing ft_isdigit:\n");
    char test_cases[] = {'0', '9', 'a', '5', '%'};
    for (int i = 0; i < 5; i++) {
        printf("ft_isdigit(%c) = %d, isdigit(%c) = %d\n", test_cases[i], ft_isdigit(test_cases[i]), test_cases[i], isdigit(test_cases[i]));
    }
    printf("\n");
}

void test_ft_isprint() {
    printf("Testing ft_isprint:\n");
    char test_cases[] = {' ', 'a', '~', '\t', '1'};
    for (int i = 0; i < 5; i++) {
        printf("ft_isprint(%c) = %d, isprint(%c) = %d\n", test_cases[i], ft_isprint(test_cases[i]), test_cases[i], isprint(test_cases[i]));
    }
    printf("\n");
}

void test_ft_memchr() {
    printf("Testing ft_memchr:\n");
    char str[] = "hello world";
    char test_cases[] = {'o', 'w', 'z', 'l', '\0'};
    for (int i = 0; i < 5; i++) {
        printf("ft_memchr(\"%s\", '%c') = %s, memchr(\"%s\", '%c') = %s\n", str, test_cases[i], (char *)ft_memchr(str, test_cases[i], strlen(str)), str, test_cases[i], (char *)memchr(str, test_cases[i], strlen(str)));
    }
    printf("\n");
}

void test_ft_memcmp() {
    printf("Testing ft_memcmp:\n");
    char str1[] = "abcdef";
    char str2[] = "abcdeg";
    printf("ft_memcmp: %d, memcmp: %d\n", ft_memcmp(str1, str2, 5), memcmp(str1, str2, 5));
    printf("\n");
}

void test_ft_memcpy() {
    printf("Testing ft_memcpy:\n");
    char src[5][10] = {"hello", "test", "12345", "world", "abcd"};
    char dest_ft[10], dest_std[10];
    for (int i = 0; i < 5; i++) {
        ft_memcpy(dest_ft, src[i], 6);
        memcpy(dest_std, src[i], 5);
        printf("ft_memcpy: %s, memcpy: %s\n", dest_ft, dest_std);
    }
    printf("\n");
}

void test_ft_memmove() {
    printf("Testing ft_memmove:\n");
    char src[5][10] = {"hello", "test", "12345", "world", "abcd"};
    char dest_ft[10], dest_std[10];
    for (int i = 0; i < 5; i++) {
        ft_memmove(dest_ft, src[i], 5);
        memmove(dest_std, src[i], 5);
        printf("ft_memmove: %s, memmove: %s\n", dest_ft, dest_std);
    }
    printf("\n");
}

void test_ft_memset() {
    printf("Testing ft_memset:\n");
    char test_cases[5][10] = {"hello", "test", "12345", "world", "abcd"};
    for (int i = 0; i < 5; i++) {
        char ft_result[10], std_result[10];
        memcpy(ft_result, test_cases[i], 10);
        memcpy(std_result, test_cases[i], 10);
        ft_memset(ft_result, '*', 3);
        memset(std_result, '*', 3);
        printf("ft_memset: %s, memset: %s\n", ft_result, std_result);
    }
    printf("\n");
}

void test_ft_strchr() {
    printf("Testing ft_strchr:\n");
    char *str = "hello world";
    char c = 'l';
    printf("ft_strchr: %s, strchr: %s\n", ft_strchr(str, c), strchr(str, c));
    printf("\n");
}

void test_ft_strdup() {
    printf("Testing ft_strdup:\n");
    char *test_cases[] = {"hello", "world", "", "test", "libft"};
    for (int i = 0; i < 5; i++) {
        char *ft_result = ft_strdup(test_cases[i]);
        char *std_result = strdup(test_cases[i]);
        printf("ft_strdup: %s, strdup: %s\n", ft_result, std_result);
        free(ft_result);
        free(std_result);
    }
    printf("\n");
}

void test_ft_strlcat() {
    printf("Testing ft_strlcat:\n");
    char dest_ft[20] = "Hello";
    char dest_std[20] = "Hello";
    char *src = " World";
    size_t size = 15;
    printf("ft_strlcat: %zu, strlcat: %zu\n", ft_strlcat(dest_ft, src, size), strlcat(dest_std, src, size));
    printf("Result ft_strlcat: %s, Result strlcat: %s\n", dest_ft, dest_std);
    printf("\n");
}

void test_ft_strlcpy() {
    printf("Testing ft_strlcpy:\n");
    char dest_ft[20], dest_std[20];
    char *src = "Hello World";
    printf("ft_strlcpy: %zu, strlcpy: %zu\n", ft_strlcpy(dest_ft, src, 10), strlcpy(dest_std, src, 10));
    printf("Result ft_strlcpy: %s, Result strlcpy: %s\n", dest_ft, dest_std);
    printf("\n");
}

void test_ft_strlen() {
    printf("Testing ft_strlen:\n");
    char *test_cases[] = {"hello", "world", "les", "", "libft"};
    for (int i = 0; i < 5; i++) {
        printf("ft_strlen(\"%s\") = %d, strlen(\"%s\") = %zu\n", test_cases[i], ft_strlen(test_cases[i]), test_cases[i], strlen(test_cases[i]));
    }
    printf("\n");
}

void test_ft_strncmp() {
    printf("Testing ft_strncmp:\n");
    char *s1 = "hello";
    char *s2 = "hello";
    printf("ft_strncmp: %d, strncmp: %d\n", ft_strncmp(s1, s2, 3), strncmp(s1, s2, 3));
    printf("\n");
}

void test_ft_strnstr() {
    printf("Testing ft_strnstr:\n");
    char *big = "hello world";
    char *little = "world";
    size_t len = 11;
    printf("ft_strnstr: %s, strnstr: %s\n", ft_strnstr(big, little, len), strnstr(big, little, len));
    printf("\n");
}

void test_ft_strrchr() {
    printf("Testing ft_strrchr:\n");
    char *str = "hello world";
    char c = 'l';
    printf("ft_strrchr: %s, strrchr: %s\n", ft_strrchr(str, c), strrchr(str, c));
    printf("\n");
}

void test_ft_tolower() {
    printf("Testing ft_tolower:\n");
    char test_cases[] = {'A', 'Z', 'm', 'a', '1'};
    for (int i = 0; i < 5; i++) {
        printf("ft_tolower(%c) = %c, tolower(%c) = %c\n", test_cases[i], ft_tolower(test_cases[i]), test_cases[i], tolower(test_cases[i]));
    }
    printf("\n");
}

void test_ft_toupper() {
    printf("Testing ft_toupper:\n");
    char test_cases[] = {'a', 'z', 'M', 'A', '1'};
    for (int i = 0; i < 5; i++) {
        printf("ft_toupper(%c) = %c, toupper(%c) = %c\n", test_cases[i], ft_toupper(test_cases[i]), test_cases[i], toupper(test_cases[i]));
    }
    printf("\n");
}

int main() {
    // Call all testing functions
    test_ft_atoi();
    test_ft_bzero();
    test_ft_calloc();
    test_ft_isalnum();
    test_ft_isalpha();
    test_ft_isascii();
    test_ft_isdigit();
    test_ft_isprint();
    test_ft_memchr();
    test_ft_memcmp();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_memset();
    test_ft_strchr();
    test_ft_strdup();
    test_ft_strlcat();
    test_ft_strlcpy();
    test_ft_strlen();
    test_ft_strncmp();
    test_ft_strnstr();
    test_ft_strrchr();
    test_ft_tolower();
    test_ft_toupper();

    return 0;
}

