/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:16:31 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/23 16:01:06 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_atoi(char *str);
void	*ft_bzero(void *str, size_t n);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_iswhitespace(char c);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(const char *str);
void	ft_putendl_fd(const char *str, int fd);
void	ft_putnbr(int nbr);
void	ft_putnbr_fd(int nbr, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(const char *str, int fd);

char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strcpy(char *dest, const char *src);
void	ft_strdel(char **as);
char	*ft_strdup(const char *str);
int		ft_strequ(const char *str1, const char *str2);
int		ft_strnequ(const char *str1, const char *str2, size_t n);
void	ft_striter(char *, void (*f)(char *));
void	ft_striteri(char *str, void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *str1, const char *str2);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
int		ft_strlen(const char *str);
char	*ft_strmap(const char *str, char (*f)(char));
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnew(size_t n);
char	*ft_strnstr(const char *str1, const char *str2, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strstr(const char *str1, const char *str2);
char	*ft_strsub(const char *str, unsigned int index, size_t n);
char	*ft_strtrim(const char *str);

void	ft_swap(int *a, int *b);

int		ft_tolower(int c);
int		ft_toupper(int c);

#endif