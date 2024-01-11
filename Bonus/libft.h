#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t num_elements, size_t element_size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
char			*ft_strrchr(const char *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);


#endif