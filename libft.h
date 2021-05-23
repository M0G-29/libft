/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:58:46 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/05/23 16:57:41 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <strings.h>
# include <bsd/string.h>


char	*ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *big, const char *little, size_t len);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
void	*ft_memset (void *dest, int str, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void *ft_memcpy (void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
int	ft_isprint(int c);
int ft_isalnum(int c);
int ft_isdigit(int c);
size_t    ft_strlcat(char *dst, const char *src, size_t size);
int ft_isascii(int c);
int ft_isalpha(int c);
void	ft_bzero(void *s, size_t len);
int ft_atoi(const char *nptr);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	*ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);


#endif
