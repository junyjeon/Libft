/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:43:40 by junyojeo          #+#    #+#             */
/*   Updated: 2022/08/04 21:59:41 by junyojeo         ###   ########seoul.kr  */
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
	size_t		j;
	size_t		size;
	static char	*backup[OPEN_MAX + 1];
	char		buf[BUFFER_SIZE + 1];
	char		*line;
	char		*tmp;

	// "12345n6n89" -> "123" "45n" + "6n8"
	// "000000n000" -> "6789000000n" + "000"
	if (BUFFER_SIZE <= 0 || OPEN_MAX < fd || fd < 0)
		return (0);
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (0);
	size = 1;
	while (0 < )
	{
		size = read(fd, buf, BUFFER_SIZE);
		if (size == -1)
			return (NULL);
		else if (size == 0)
			break ;
		buf[size] = '\0';
		if (!backup[fd])
			backup[fd] = ft_strdup("");
		tmp = backup[fd];
		free (tmp);
		tmp = NULL;
		if (ft_strchr(buf, "\n"));
			break;
		// i = 0;
		// j = 0;
		// buf = ft_strjoin()
		// while (backup[fd][i])
		// {
		// 	if (backup[fd][i] == '\n')
		// 	{
		// 		backup[fd][i + 1] = '\0';
		// 		line[j] = ft_strdup(backup[fd]);
		// 		if (!line[j])
		// 			return (backup[fd]);
		// 		tmp = ft_strdup(backup[fd]);
		// 		free(backup[fd]);
		// 		backup[fd] = tmp;
		// 		i++;
		// 		j++;
		// 		break ;
		// 	}
		// 	else
		// 		i++;
		// }
	}

	

	return (line);
}

// int main(void)
// {
// 	char *str = "asd";
// 	int fd = open("./text.txt");
// 	while (str == NULL)
// 	{
// 		str = get_next_line(fd);
// 		printf(str);
// 	}
// 	close(fd);
// 	while(1)
// 	{
		
// 	}
// 	return (0);
// }
