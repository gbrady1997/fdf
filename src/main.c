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
	t_vertex *verticies;

	verticies = NULL;
	verticies = assign_verticies(verticies);
	printf("%d\n",verticies[0].x);
	int fd;
	//int i = 0;

	create_window();
	fd = open(argv[1],O_RDONLY);
	if (argc != 2)
		ft_putstr("error\n");
	fd = open(argv[1],O_RDONLY);

	close(fd);
	//while (1);
	return (0);
}
