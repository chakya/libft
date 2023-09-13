// Create a main function that includes all c files in the current directory and make a test cases to test all functions you've created.
// Compile the program with gcc -Wall -Wextra -Werror -pedantic *.c

#include "libft.h"

#define ASSERT(a , b) \
        if (!(strcmp((char *)a,(char *)b) == 0)) { \
            printf("Assertion failed: output=%s expected=%s %s %s, file %s, line %d\n", \
                (char *)a,(char *)b, #a, #b, __FILE__, __LINE__); \
            /* Custom behavior for failed assertion */ \
        } \


void BSSERT(int a, int b)
{
    if (a != b)
        printf("Assertion failed: expected: %d, actual: %d file %s, line %d\n", a, b, __FILE__, __LINE__);
}

void test_ft_atoi()
{
    char s1[] = "hello";
    BSSERT(ft_atoi(s1), atoi(s1));

    char s2[] = "1234";
    BSSERT(ft_atoi(s2), atoi(s2));

    char s3[] = "-1234";
    BSSERT(ft_atoi(s3), atoi(s3));

    char s4[] = "+1234";
    BSSERT(ft_atoi(s4), atoi(s4));

    char s5[] = "1234hello";
    BSSERT(ft_atoi(s5), atoi(s5));

    char s6[] = "hello1234";
    BSSERT(ft_atoi(s6), atoi(s6));

    char s7[] = "1234hello1234";
    BSSERT(ft_atoi(s7), atoi(s7));

    char s8[] = "hello1234hello";
    BSSERT(ft_atoi(s8), atoi(s8));

    char s9[] = "--1234";
    BSSERT(ft_atoi(s9), atoi(s9));

    char s10[] = "++1234";
    BSSERT(ft_atoi(s10), atoi(s10));

    char s11[] = "-+1234";
    BSSERT(ft_atoi(s11), atoi(s11));

    char s12[] = "+-1234";
    BSSERT(ft_atoi(s12), atoi(s12));

    char s23[] = "-1234-1234-1234";
    BSSERT(ft_atoi(s23), atoi(s23));

    char s32[] = "+1234hello";
    BSSERT(ft_atoi(s32), atoi(s32));
}

void test_ft_bzero()
{
    char s1[] = "hello";
    ft_bzero(s1, 5);
    ASSERT(s1, "");

    char s2[] = "hello";
    ft_bzero(s2, 0);
    ASSERT(s2, "hello");

    char s3[] = "hello";
    ft_bzero(s3 + 1, 1);
    ASSERT(s3, "h");

    char s4[] = "hello";
    ft_bzero(s4+2, 2);
    ASSERT(s4, "he");

    char s5[] = "hello";
    ft_bzero(s5 + 3, 3);
    ASSERT(s5, "hel");

}

void test_ft_isalnum()
{
    BSSERT(ft_isalnum('a') , 1);
    BSSERT(ft_isalnum('z') , 1);
    BSSERT(ft_isalnum('A') , 1);
    BSSERT(ft_isalnum('Z') , 1);
    BSSERT(ft_isalnum('0') , 1);
    BSSERT(ft_isalnum('9') , 1);
    BSSERT(ft_isalnum(' ') , 0);
    BSSERT(ft_isalnum('\n') , 0);
    BSSERT(ft_isalnum('\t') , 0);
    BSSERT(ft_isalnum('\0') , 0);
    BSSERT(ft_isalnum('!') , 0);
    BSSERT(ft_isalnum('@') , 0);
    BSSERT(ft_isalnum('[') , 0);
    BSSERT(ft_isalnum('`') , 0);
    BSSERT(ft_isalnum('{') , 0);
    BSSERT(ft_isalnum('~') , 0);
    BSSERT(ft_isalnum('!') , 0);
    BSSERT(ft_isalnum('@') , 0);
    BSSERT(ft_isalnum('[') , 0);
    BSSERT(ft_isalnum('`') , 0);
    BSSERT(ft_isalnum('{') , 0);
    BSSERT(ft_isalnum('~') , 0);
    BSSERT(ft_isalnum('!') , 0);
    BSSERT(ft_isalnum('@') , 0);
    BSSERT(ft_isalnum('[') , 0);
    BSSERT(ft_isalnum('`') , 0);
    BSSERT(ft_isalnum('{') , 0);
    BSSERT(ft_isalnum('~') , 0);
    BSSERT(ft_isalnum('!') , 0);
    BSSERT(ft_isalnum('@') , 0);
    BSSERT(ft_isalnum('[') , 0);
    BSSERT(ft_isalnum('`') , 0);
    BSSERT(ft_isalnum('{') , 0);
    BSSERT(ft_isalnum('~') , 0);
    BSSERT(ft_isalnum('!') , 0);
    BSSERT(ft_isalnum('@') , 0);
    BSSERT(ft_isalnum('[') , 0);
    BSSERT(ft_isalnum('`') , 0);
    BSSERT(ft_isalnum('{') , 0);
    BSSERT(ft_isalnum('~') , 0);
    BSSERT(ft_isalnum('!') , 0);
    BSSERT(ft_isalnum('@') , 0);
    BSSERT(ft_isalnum('[') , 1);
}

void test_atoi(){}

void test_ft_memset()
{
    char s1[] = "hello";
    ft_memset(s1, 'a', 5);
    ASSERT(s1, "aaaaa");

    char s2[] = "hello";
    ft_memset(s2, 'a', 0);
    ASSERT(s2, "hello");

    char s3[] = "hello";
    ft_memset(s3, 'a', 1);
    ASSERT(s3, "aello");

    char s4[] = "hello";
    ft_memset(s4, 'a', 2);
    ASSERT(s4, "aallo");

    char s5[] = "hello";
    ft_memset(s5, 'a', 3);
    ASSERT(s5, "aaalo");

    char s6[] = "hello";
    ft_memset(s6, 'a', 4);
    ASSERT(s6, "aaaao");

    char s7[] = "hello";
    ft_memset(s7, 'a', 5);
    ASSERT(s7, "aaaaa");

}

void test_ft_memcpy()
{
    char s1[] = "hello";
    char s2[] = "world";
    ft_memcpy(s1, s2, 5);
    ASSERT(s1, "world");

    char s3[] = "hello";
    char s4[] = "world";
    ft_memcpy(s3, s4, 0);
    ASSERT(s3, "hello");

    char s5[] = "hello";
    char s6[] = "world";
    ft_memcpy(s5, s6, 1);
    ASSERT(s5, "wello");

    char s7[] = "hello";
    char s8[] = "world";
    ft_memcpy(s7, s8, 2);
    ASSERT(s7, "wollo");
}

void test_ft_memmove()
{
    char s1[] = "hello";
    char s2[] = "world";
    ft_memmove(s1, s2, 5);
    ASSERT(s1, "world");

    char s3[] = "hello";
    char s4[] = "world";
    ft_memmove(s3, s4, 0);
    ASSERT(s3, "hello");

    char s5[] = "hello";
    char s6[] = "world";
    ft_memmove(s5, s6, 1);
    ASSERT(s5, "wello");

    char s7[] = "hello";
    char s8[] = "world";
    ft_memmove(s7, s8, 2);
    ASSERT(s7, "wollo");

    char s9[] = "hello";
    char s10[] = "world";
    ft_memmove(s9, s10, 3);
    ASSERT(s9, "worlo");

    char s11[] = "hello";
    char s12[] = "world";
    ft_memmove(s11, s12, 4);
    ASSERT(s11, "worlo");

    char s13[] = "hello";
    char s14[] = "world";
    ft_memmove(s13, s14, 5);
    ASSERT(s13, "world");

    char s15[] = "hello";
    char s16[] = "world";
    ft_memmove(s15, s16, 6);
    ASSERT(s15, "world");

    char s17[] = "hello";
    char s18[] = "world";
    ft_memmove(s17, s18, 7);
    ASSERT(s17, "world");

    char s19[] = "hello";
    char s20[] = "world";
    ft_memmove(s19, s20, 8);
    ASSERT(s19, "world");

    char s21[] = "hello";
    char s22[] = "world";
    ft_memmove(s21, s22, 9);
    ASSERT(s21, "world");
}



int main()
{
    test_ft_atoi();
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
//     ASSERT(s1, "HELLO");

//     char s2[] = "HELLO";
//     ft_toupper(s2);
//     ASSERT(s2, "HELLO");

//     char s3[] = "1234";
//     ft_toupper(s3);
//     ASSERT(s3, "1234");

//     char s4[] = "hello1234";
//     ft_toupper(s4);
//     ASSERT(s4, "HELLO1234");

//     char s5[] = "HELLO1234";
//     ft_toupper(s5);
//     ASSERT(s5, "HELLO1234");

//     char s6[] = "";
//     ft_toupper(s6);
//     ASSERT(s6, "");
// }
