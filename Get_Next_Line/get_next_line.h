/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:49:38 by jbrand-m          #+#    #+#             */
/*   Updated: 2025/02/12 00:03:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>


#ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
#endif

char    *get_next_line(int fd);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);

#endif
// size_t ft_strlen(const char *s)
// {
//     size_t i = 0;

//     while (s[i])
//         i++;
//     return (i);
// }

// char	*ft_strdup(const char *s)
// {
// 	char	*copy;
// 	int		size;
// 	int		i;

// 	size = 0;
// 	while (s[size] != '\0')
// 		size++;
// 	copy = (char *)malloc((size + 1));
// 	if (copy == NULL)
// 	{
// 		return (NULL);
// 	}
// 	i = 0;
// 	while (i != size)
// 	{
// 		copy[i] = s[i];
// 		i++;
// 	}
// 	copy[size] = '\0';
// 	return (copy);
// }

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	char	*copy;
// 	int		t_len;
// 	int		i;
//     int     j;

// 	if (!s1 || !s2)
// 		return (NULL);
// 	t_len = ft_strlen(s1) + ft_strlen(s2);
//     copy = (char *)malloc((t_len + 1) * sizeof(char));
// 	if (!copy)
// 		return (NULL);
//     i = 0;
//     j = 0;
// 	while (s1[i])
// 		copy[i++] = s1[j++];
//     while (s2[i])
// 		copy[i++] = s2[j++];
// 	copy[t_len] = '\0';
// 	return (copy);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s != '\0')
// 	{
// 		if (*s == (char)c)
// 		{
// 			return ((char *)s);
// 		}
// 		s++;
// 	}
// 	if (c == '\0')
// 	{
// 		return ((char *)s);
// 	}
// 	return (NULL);
// }


// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t src_len;

// 	src_len = ft_strlen(src);
// 	if (size > 0)
// 	{
// 		i = 0;
// 		while (i < size - 1 && src[i] != '\0')
// 		{
// 			dst[i] = src[i];
// 			i++;
// 		}
// 		dst[i] = '\0';
// 	}
// 	return (src_len);
// }