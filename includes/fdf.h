/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:33:28 by gabrady           #+#    #+#             */
/*   Updated: 2019/05/29 17:43:18 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
#define FDF_H

#include "libft.h"
#include "mlx.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define RED 0xE85E68
#define WIN_HEIGHT 200
#define WIN_WIDTH 200

typedef struct	s_window
{
	void *mlx_ptr;
	void *win_ptr;
}								window;

typedef struct	s_vertex
{
	int x;
	int y;
	int z;
}								t_vertex;

int					main(int argc, char **argv);
void      	create_window(void);

t_vertex	*assign_verticies(t_vertex *verticies);


#endif
