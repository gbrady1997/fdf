/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 14:55:55 by gabrady           #+#    #+#             */
/*   Updated: 2019/05/27 14:34:36 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	copy_first_line(char **s, int fd, char **line, int ret)
{
	int		len;
	char	*tmp;

	len = 0;
	while (s[fd][len] != '\0' && s[fd][len] != '\n')
	{
		len++;
	}
	if (s[fd][len] == '\n')
	{
		*line = ft_strsub(s[fd], 0, len + 1);
		tmp = ft_strdup(s[fd] + len + 1);
		ft_strdel(&s[fd]);
		s[fd] = tmp;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	else if (s[fd][len] == '\0')
	{
		if (ret == GNL_BUFF_SIZE)
			return (get_next_line2(fd, line));
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (1);
}

int	get_next_line2(const int fd, char **line)
{
	static char	*s[GNL_MAX_FD];
	char		buf[GNL_BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || line == NULL || fd >= GNL_MAX_FD\
		|| (ret = read(fd, buf, 0)) < 0)
		return (-1);
	while ((ret = read(fd, buf, GNL_BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	return (copy_first_line(s, fd, line, ret));
}
