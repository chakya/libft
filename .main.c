// Create a main function that includes all c files in the current directory and make a test cases to test all functions you've created.
// Compile the program with gcc -Wall -Wextra -Werror -pedantic *.c

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>

#include "libft.h"

#include <stdio.h>

#define ASSERT(condition) \
        if (!(condition)) { \
            printf("Assertion failed: %s, file %s, line %d\n", \
                #condition, __FILE__, __LINE__); \
            /* Custom behavior for failed assertion */ \
        } \
    

void bssert(int c, int a, int b)
{
    if (a != b)
        printf("KO input = %c: expected: %d, actual: %d\n", c, a, b);
}


void test_ft_isalnum()
{
    bssert('a', ft_isalnum('a') , 1);
    bssert('z', ft_isalnum('z') , 1);
    bssert('A', ft_isalnum('A') , 1);
    bssert('Z', ft_isalnum('Z') , 1);
    bssert('0', ft_isalnum('0') , 1);
    bssert('9', ft_isalnum('9') , 1);
    bssert(' ', ft_isalnum(' ') , 0);
    bssert('\n', ft_isalnum('\n') , 0);
    bssert('\t', ft_isalnum('\t') , 0);
    bssert('\0', ft_isalnum('\0') , 0);
    bssert('!', ft_isalnum('!') , 0);
    bssert('@', ft_isalnum('@') , 0);
    bssert('[', ft_isalnum('[') , 0);
    bssert('`', ft_isalnum('`') , 0);
    bssert('{', ft_isalnum('{') , 0);
    bssert('~', ft_isalnum('~') , 0);
    bssert('!', ft_isalnum('!') , 0);
    bssert('@', ft_isalnum('@') , 0);
    bssert('[', ft_isalnum('[') , 0);
    bssert('`', ft_isalnum('`') , 0);
    bssert('{', ft_isalnum('{') , 0);
    bssert('~', ft_isalnum('~') , 0);
    bssert('!', ft_isalnum('!') , 0);
    bssert('@', ft_isalnum('@') , 0);
    bssert('[', ft_isalnum('[') , 0);
    bssert('`', ft_isalnum('`') , 0);
    bssert('{', ft_isalnum('{') , 0);
    bssert('~', ft_isalnum('~') , 0);
    bssert('!', ft_isalnum('!') , 0);
    bssert('@', ft_isalnum('@') , 0);
    bssert('[', ft_isalnum('[') , 0);
    bssert('`', ft_isalnum('`') , 0);
    bssert('{', ft_isalnum('{') , 0);
    bssert('~', ft_isalnum('~') , 0);
    bssert('!', ft_isalnum('!') , 0);
    bssert('@', ft_isalnum('@') , 0);
    bssert('[', ft_isalnum('[') , 0);
    bssert('`', ft_isalnum('`') , 0);
    bssert('{', ft_isalnum('{') , 0);
    bssert('~', ft_isalnum('~') , 0);
    bssert('!', ft_isalnum('!') , 0);
    bssert('@', ft_isalnum('@') , 0);
    bssert('[', ft_isalnum('[') , 1);
}

void test_ft_memset()
{
    char s1[] = "hello";
    ft_memset(s1, 'a', 5);
    ASSERT(strcmp(s1, "aaaaa") == 0);

    char s2[] = "hello";
    ft_memset(s2, 'a', 0);
    ASSERT(strcmp(s2, "hello") == 0);

    char s3[] = "hello";
    ft_memset(s3, 'a', 1);
    ASSERT(strcmp(s3, "aello") == 0);

    char s4[] = "hello";
    ft_memset(s4, 'a', 2);
    ASSERT(strcmp(s4, "aallo") == 0);

    char s5[] = "hello";
    ft_memset(s5, 'a', 3);
    ASSERT(strcmp(s5, "aaalo") == 0);

    char s6[] = "hello";
    ft_memset(s6, 'a', 4);
    ASSERT(strcmp(s6, "aaaao") == 0);

    char s7[] = "hello";
    ft_memset(s7, 'a', 5);
    ASSERT(strcmp(s7, "aaaaa") == 0);

    char s8[] = "hello";
    ft_memset(s8, 'a', 6);
    ASSERT(strcmp(s8, "aaaaaa") == 0);

    char s9[] = "hello";
    ft_memset(s9, 'a', 7);
    ASSERT(strcmp(s9, "aaaaaaa") == 0);

    char s10[] = "hello";
    ft_memset(s10, 'a', 8);
    ASSERT(strcmp(s10, "aaaaaaaa") == 0);

    char s11[] = "hello";
    ft_memset(s11, 'a', 9);
    ASSERT(strcmp(s11, "aaaaaaaaa") == 0);

    char s12[] = "hello";
    ft_memset(s12, 'a', 10);
    ASSERT(strcmp(s12, "aaaaaaaaaa") == 0);

    char s13[] = "hello";
    ft_memset(s13, 'a', 11);
    ASSERT(strcmp(s13, "aaaaaaaaaaa") == 0);

    char s14[] = "hello";
    ft_memset(s14, 'a', 12);
    ASSERT(strcmp(s14, "aaaaaaaaaaaa") == 0);  
}

void test_ft_bzero()
{
    char s1[] = "hello";
    ft_bzero(s1, 5);
    ASSERT(strcmp(s1, "") == 0);

    char s2[] = "hello";
    ft_bzero(s2, 0);
    ASSERT(strcmp(s2, "hello") == 0);

    char s3[] = "hello";
    ft_bzero(s3, 1);
    ASSERT(strcmp(s3, "ello") == 0);

    char s4[] = "hello";
    ft_bzero(s4, 2);
    ASSERT(strcmp(s4, "llo") == 0);

    char s5[] = "hello";
    ft_bzero(s5, 3);
    ASSERT(strcmp(s5, "lo") == 0);

    char s6[] = "hello";
    ft_bzero(s6, 4);
    ASSERT(strcmp(s6, "o") == 0);

    char s7[] = "hello";
    ft_bzero(s7, 5);
    ASSERT(strcmp(s7, "") == 0);

    char s8[] = "hello";
    ft_bzero(s8, 6);
    ASSERT(strcmp(s8, "") == 0);

    char s9[] = "hello";
    ft_bzero(s9, 7);
    ASSERT(strcmp(s9, "") == 0);

    char s10[] = "hello";
    ft_bzero(s10, 8);
    ASSERT(strcmp(s10, "") == 0);

    char s11[] = "hello";
    ft_bzero(s11, 9);
    ASSERT(strcmp(s11, "") == 0);

    char s12[] = "hello";
    ft_bzero(s12, 10);
    ASSERT(strcmp(s12, "") == 0);

    char s13[] = "hello";
    ft_bzero(s13, 11);
    ASSERT(strcmp(s13, "") == 0);

    char s14[] = "hello";
    ft_bzero(s14, 12);
    ASSERT(strcmp(s14, "") == 0);  
}

void test_ft_memcpy()
{
    char s1[] = "hello";
    char s2[] = "world";
    ft_memcpy(s1, s2, 5);
    ASSERT(strcmp(s1, "world") == 0);

    char s3[] = "hello";
    char s4[] = "world";
    ft_memcpy(s3, s4, 0);
    ASSERT(strcmp(s3, "hello") == 0);

    char s5[] = "hello";
    char s6[] = "world";
    ft_memcpy(s5, s6, 1);
    ASSERT(strcmp(s5, "world") == 0);

    char s7[] = "hello";
    char s8[] = "world";
    ft_memcpy(s7, s8, 2);
    ASSERT(strcmp(s7, "world") == 0);

    char s9[] = "hello";
    char s10[] = "world";
    ft_memcpy(s9, s10, 3);
    ASSERT(strcmp(s9, "world") == 0);

    char s11[] = "hello";
    char s12[] = "world";
    ft_memcpy(s11, s12, 4);
    ASSERT(strcmp(s11, "world") == 0);

    char s13[] = "hello";
    char s14[] = "world";
    ft_memcpy(s13, s14, 5);
    ASSERT(strcmp(s13, "world") == 0);

    char s15[] = "hello";
    char s16[] = "world";
    ft_memcpy(s15, s16, 6);
    ASSERT(strcmp(s15, "world") == 0);

    char s17[] = "hello";
    char s18[] = "world";
    ft_memcpy(s17, s18, 7);
    ASSERT(strcmp(s17, "world") == 0);

    char s19[] = "hello";
    char s20[] = "world";
    ft_memcpy(s19, s20, 8);
    ASSERT(strcmp(s19, "world") == 0);

    char s21[] = "hello";
    char s22[] = "world";
    ft_memcpy(s21, s22, 9);
    ASSERT(strcmp(s21, "world") == 0);

    char s23[] = "hello";
    char s24[] = "world";
    ft_memcpy(s23, s24, 10);
}

void test_ft_memmove()
{
    char s1[] = "hello";
    char s2[] = "world";
    ft_memmove(s1, s2, 5);
    ASSERT(strcmp(s1, "world") == 0);

    char s3[] = "hello";
    char s4[] = "world";
    ft_memmove(s3, s4, 0);
    ASSERT(strcmp(s3, "hello") == 0);

    char s5[] = "hello";
    char s6[] = "world";
    ft_memmove(s5, s6, 1);
    ASSERT(strcmp(s5, "world") == 0);

    char s7[] = "hello";
    char s8[] = "world";
    ft_memmove(s7, s8, 2);
    ASSERT(strcmp(s7, "world") == 0);

    char s9[] = "hello";
    char s10[] = "world";
    ft_memmove(s9, s10, 3);
    ASSERT(strcmp(s9, "world") == 0);

    char s11[] = "hello";
    char s12[] = "world";
    ft_memmove(s11, s12, 4);
    ASSERT(strcmp(s11, "world") == 0);

    char s13[] = "hello";
    char s14[] = "world";
    ft_memmove(s13, s14, 5);
    ASSERT(strcmp(s13, "world") == 0);

    char s15[] = "hello";
    char s16[] = "world";
    ft_memmove(s15, s16, 6);
    ASSERT(strcmp(s15, "world") == 0);

    char s17[] = "hello";
    char s18[] = "world";
    ft_memmove(s17, s18, 7);
    ASSERT(strcmp(s17, "world") == 0);

    char s19[] = "hello";
    char s20[] = "world";
    ft_memmove(s19, s20, 8);
    ASSERT(strcmp(s19, "world") == 0);

    char s21[] = "hello";
    char s22[] = "world";
    ft_memmove(s21, s22, 9);
    ASSERT(strcmp(s21, "world") == 0);
}


int main()
{
    test_ft_isalnum();
    test_ft_memset();
    test_ft_bzero();
    test_ft_memcpy();
    test_ft_memmove();
}
// #include <ASSERT.h>
// #include <string.h>
// int main() {
//     char s1[] = "hello";
//     ft_toupper(s1);
//     ASSERT(strcmp(s1, "HELLO") == 0);

//     char s2[] = "HELLO";
//     ft_toupper(s2);
//     ASSERT(strcmp(s2, "HELLO") == 0);

//     char s3[] = "1234";
//     ft_toupper(s3);
//     ASSERT(strcmp(s3, "1234") == 0);

//     char s4[] = "hello1234";
//     ft_toupper(s4);
//     ASSERT(strcmp(s4, "HELLO1234") == 0);

//     char s5[] = "HELLO1234";
//     ft_toupper(s5);
//     ASSERT(strcmp(s5, "HELLO1234") == 0);

//     char s6[] = "";
//     ft_toupper(s6);
//     ASSERT(strcmp(s6, "") == 0);
// }