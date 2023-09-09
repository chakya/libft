#ifndef LIBFT_H
# define LIBFT_H

int ft_atoi(char *s);
int ft_isalnum(int c);
int ft_isalpha(int c);
void ft_bzero(void *s, int n);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void ft_memdel(void **ap);
void *ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_strcmp(const char *s1, const char *s2);
void ft_trlcat(char *dst, char *src, int n);
char* ft_strlcpy(char *dst, char *src, int n);
int ft_strlen(char *s);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(char *s, int c);
char *ft_tolower(char *s);
char *ft_toupper(char *s);

#endif