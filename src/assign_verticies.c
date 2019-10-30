/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_verticies.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:34:20 by gabrady           #+#    #+#             */
/*   Updated: 2019/10/29 18:34:22 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_vertex	*assign_verticies(t_vertex *verticies)
{
	verticies = malloc(16 * sizeof(t_vertex));
	verticies[0].x = 0; verticies[0].y = 0; verticies[0].z = 0;
	verticies[1].x = 1; verticies[1].y = 0; verticies[1].z = 0;
	verticies[2].x = 2; verticies[2].y = 0; verticies[2].z = 0;
	verticies[3].x = 3; verticies[3].y = 0; verticies[3].z = 0;
	verticies[4].x = 0; verticies[4].y = 1; verticies[4].z = 0;
	verticies[5].x = 1; verticies[5].y = 1; verticies[5].z = 1;
	verticies[6].x = 2; verticies[6].y = 1; verticies[6].z = 1;
	verticies[7].x = 3; verticies[7].y = 1; verticies[7].z = 0;
	verticies[8].x = 0; verticies[8].y = 2; verticies[8].z = 0;
	verticies[9].x = 1; verticies[9].y = 2; verticies[9].z = 1;
	verticies[10].x = 2; verticies[10].y = 2; verticies[10].z = 1;
	verticies[11].x = 3; verticies[11].y = 2; verticies[11].z = 0;
	verticies[12].x = 0; verticies[12].y = 3; verticies[12].z = 0;
	verticies[13].x = 1; verticies[13].y = 3; verticies[13].z = 0;
	verticies[14].x = 2; verticies[14].y = 3; verticies[14].z = 0;
	verticies[15].x = 3; verticies[15].y = 3; verticies[15].z = 0;
	return (verticies);
}