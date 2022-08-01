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

char	**ft_free(char **all)
{
	size_t	i;

	i = 0;
	while (all[i])
	{
		free(all[i]);
		all[i] = 0;
	}
	return (all);
}

char	*get_next_line(int fd)
{
	size_t		i;
	size_t		char_cnt;
	size_t		read_size;
	static char	*all[OPEN_MAX + 1];
	char		buf[BUFFER_SIZE];
	char		**line;
	char		*tmp;

	// if (read_size < 0)
	// 	return (ft_free(&all[fd]));
	read_size = read(fd, buf, BUFFER_SIZE);
	while (0 < read_size)
	{
		read_size = read(fd, buf, BUFFER_SIZE);
		buf[read_size] = '\0';
		all[fd] = ft_strjoin(all[fd], buf);
		char_cnt = 0;
		i = 0;
		while (all[fd][char_cnt])
		{
			if (all[fd][char_cnt] == '\n')
			{
				all[fd][char_cnt] = '\0';
				line[i] = ft_strdup(all[fd]);
				if (!line[i])
					return (ft_free(all));
				tmp = ft_strdup(all[fd]);
				free(all[fd]);
				all[fd] = tmp;
				break ;
			}
			char_cnt++;
		}
	}
	close(fd);
	return (buf);
}
