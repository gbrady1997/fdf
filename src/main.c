/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 01:16:17 by gabrady           #+#    #+#             */
/*   Updated: 2019/05/29 17:42:16 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int main (int argc, char**argv)
{
	t_vertex *vertex_buffer;
	int fd;
	//int i = 0;

	vertex_buffer = NULL;
	//create_window();
	fd = open(argv[1],O_RDONLY);
	if (argc != 2)
		ft_putstr("error\n");
	vertex_buffer = allocate_vertex_buffer(vertex_buffer,fd);
	fd = open(argv[1],O_RDONLY);
	vertex_buffer = initalize_vertex_buffer(vertex_buffer, fd);

	printf("%d\n",vertex_buffer[20].x);
	printf("%d\n",vertex_buffer[20].y);
	close(fd);
	//while (1);
	return (0);
}
