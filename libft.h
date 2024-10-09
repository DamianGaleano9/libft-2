/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:32:26 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 22:32:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *c);
void	*ft_bzero(void *inp, size_t bytes);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void	*ft_memchr(const void *ptr, int value, size_t num);
int		ft_tolower(int i);
int		ft_toupper(int i);
char	*ft_strdup(const char *o);
char	*ft_strchr(const char *s, int i);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memchr(const void *ptr, int value, size_t num);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *des, const void *org, size_t bytes);
void	*ft_memmove(void *des, const void *org, size_t bytes);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *des, const char *org, size_t destsize);
size_t	ft_strlcpy(char *des, const char *org, size_t destsize);
void	*ft_calloc(size_t num, size_t size_ele);

#endif
