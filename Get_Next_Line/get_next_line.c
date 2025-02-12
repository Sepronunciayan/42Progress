/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:48:01 by jbrand-m          #+#    #+#             */
/*   Updated: 2025/02/12 01:20:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *cut_line(char *store)
{
	char *line  = NULL;
	int i;
	int count;

	count = 0;
	while (store[count] != '\0' && store[count] != '\n')
		count++;
	if (store[count] == '\n')
		count++;
	line = (char *)malloc((count + 1) * sizeof(char));
	if (!line)
		return (NULL);
	if(count > 0)
	{
		i = 0;
		while (i < count && store[i] != '\0')
		{
			line[i] = store[i];
			i++;
		}
		line[i] = '\0';
	}
	return (line);
}

char	*cut_remainder(char *store)
{
	char *remainder;
	int i;

	i = 0;
	while (store[i] != '\0' && store[i] != '\n')
		i++;
	if (!store && !store[i])
		return (ft_strdup(store), NULL);
	if(store[i] == '\n')
		i++;
	remainder = ft_strdup(store + i);
	return (remainder);
}

void process_text(char **store, char *buffer)
{
    char *temp = NULL;

    if (*store == NULL)
        *store = ft_strdup(buffer);
    else
    {
        temp = ft_strjoin(*store, buffer);
        if (!temp)
            return;
        free(*store);
        *store = temp;
    }
}

char *get_next_line(int fd)
{
	static char	*store = NULL;
	char		*buffer = NULL;
	char		*line = NULL;
	char		*temp = NULL;
	ssize_t		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0'; 
		process_text(&store, buffer);
		if (ft_strchr(store, '\n'))
			break;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	if (!store || !*store)
		return (NULL);
	line = cut_line(store);
    temp = cut_remainder(store);
    free(store);
    store = temp;
	return (line);
}
/*
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("archivo.txt", O_RDONLY);
	if (fd == -1)
	{
		write(1, "error open\n", 11);
		return (1);
	}
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}

int	main(void)
{
	char	*line;

	while ((line = get_next_line(0)) != NULL)
	{
		if (line) 
		{
            printf("%s", line);
            free(line);
        }
	}
	return (0);
}*/