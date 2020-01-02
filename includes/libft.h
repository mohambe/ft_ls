/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:05:36 by msambo            #+#    #+#             */
/*   Updated: 2018/06/14 14:07:31 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define TRUE 1
# define FALSE 0
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dst, const char *src);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void	*dst, const	void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strstr(const char *str, const char *needle);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strnstr(const char *str, const char *needle, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*ft_memalloc(size_t size);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_strdel(char **as);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_strclr(char *s);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
int		word_ctr(char	const *str, char c);
void	ft_putstr_n(char *str, int n);
void	size(int n);
int		nbr_length(int n);
void	link_ls(int n);

#endif
