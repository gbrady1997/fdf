/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vertex_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:11:32 by gabrady           #+#    #+#             */
/*   Updated: 2019/06/01 14:15:00 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int count_verticies(char *line)
{
  int i;
  int digit;

  i = 0;
  digit = 0;
  while (line[i])
  {
    if (ft_isdigit(line[i]))
    {
      digit++;
      while (ft_isdigit(line[i]))
        i++;
    }
    if (line[i] == ' ' || line[i] == '\t')
      i++;
  }
  return (digit);
}

t_vertex *allocate_vertex_buffer(t_vertex *vertex_buffer,int fd)
{
  char *line;
  int initial_size;

  initial_size = 0;
  while (get_next_line(fd,&line))
  {
    initial_size += count_verticies(line);
    ft_strdel(&line);
  }
  vertex_buffer = malloc((initial_size + 1) * sizeof(vertex_buffer));
  return (vertex_buffer);
}
