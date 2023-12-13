/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:36:26 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/13 11:05:02 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int			ft_atoi(const char *str);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_strchr(const char *str, int c);
size_t		ft_strlen(const char *str);
char		*ft_strrchr(const char *str, int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t		ft_strlcat(char *s1, const char *s2, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memset(void *ptr, int value, size_t num);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *str);
char		*ft_itoa(int n);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		*ft_memset(void *ptr, int value, size_t num);
void		ft_bzero(void *ptr, size_t num);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		*ft_memcpy(void *destination, const void *source, size_t n);
void		*ft_memmove(void *destination, const void *source, size_t len);

#endif