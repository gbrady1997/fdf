/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initalize_vertex_buffer.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:40:30 by gabrady           #+#    #+#             */
/*   Updated: 2019/06/05 15:40:34 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"



t_vertex 		*initalize_vertex_buffer(t_vertex *vertex_buffer, int fd)
{
  char *line;
  int y;
  int i;

  i = 0;
  y = 0;
  while (get_next_line(fd, &line))
  {
      //assign_corridnates(vertex_buffer,y,line,i);
      i = i + (ft_strlen(line) - 1);
    printf("%d\n",i);
    y++;
    printf("%s\n",line);
  }
  return (vertex_buffer);
}
