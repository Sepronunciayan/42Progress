/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:48:33 by jbrand-m          #+#    #+#             */
/*   Updated: 2025/02/12 00:22:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		size = ft_strlen(s);
	char	*copy = (char *)malloc((size + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	for (int i = 0; i < size; i++)
	{
		copy[i] = s[i];
	}
	copy[size] = '\0';
	return (copy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (NULL);
	int t_len = ft_strlen(s1) + ft_strlen(s2);
	char *copy = (char *)malloc((t_len + 1) * sizeof(char));

	if (!copy)
		return (NULL);

	int i = 0;
	int j = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		copy[i] = s2[j];
		i++;
		j++;
	}
	copy[t_len] = '\0';
	return (copy);
}


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

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strdup(const char *s)
// {
// 	char	*copy;
// 	int		size;
// 	int		i;

// 	size = ft_strlen(s);
// 	copy = (char *)malloc((size + 1) * sizeof(char));
// 	if (copy == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i != size)
// 	{
// 		copy[i] = s[i];
// 		i++;
// 	}
// 	copy[i] = '\0';
// 	return (copy);
// }

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*copy;
// 	int		t_len;
// 	int		i;
// 	int		j;

// 	if (!s1 || !s2)
// 		return (NULL);
// 	t_len = ft_strlen(s1) + ft_strlen(s2); 
// 	copy = (char *)malloc((t_len + 1) * sizeof(char));
// 	if (!copy)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s1[i])
// 		copy[i++] = s1[j++];
// 	while (s2[i])
// 		copy[i++] = s2[j++];
// 	copy[t_len] = '\0';
// 	return (copy);
// }