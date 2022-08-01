/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:43:40 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/30 17:43:40 by junyojeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	size_t		i;
	size_t		char_cnt;
	size_t		read_size;
	static char	*backup[OPEN_MAX + 1];
	char		buf[BUFFER_SIZE];
	char		**line;
	char		*tmp;

	// if (read_size < 0)
	// 	return (ft_free(&backup[fd]));
	read_size = read(fd, buf, BUFFER_SIZE);
	while (0 < read_size)
	{
		read_size = read(fd, buf, BUFFER_SIZE);
		buf[read_size] = '\0';
		backup[fd] = ft_strjoin(backup[fd], buf);
		char_cnt = 0;
		i = 0;
		while (backup[fd][char_cnt])
		{
			if (backup[fd][char_cnt] == '\n')
			{
				backup[fd][char_cnt] = '\0';
				line[i] = ft_strdup(backup[fd]);
				if (!line[i])
					return (ft_free(backup));
				tmp = ft_strdup(backup[fd]);
				free(backup[fd]);
				backup[fd] = tmp;
				break ;
			}
			char_cnt++;
		}
	}
	close(fd);
	return (buf);
}
