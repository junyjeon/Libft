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
	static size_t	line_cnt;
	size_t	read_size;
	size_t	if_i;
	char	buf[BUFFER_SIZE];
	char	c;

	fd = open("test.txt", "r");
	read_size = read(fd, buf, BUFFER_SIZE);
	while (read_size)
	{
		read_size = read(fd, buf, BUFFER_SIZE);
		buf[read_size] = '\0';
		puts(buf);
		line_cnt++;
	}
	close(fd);
	return (buf);
}
