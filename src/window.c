/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 18:38:25 by gabrady           #+#    #+#             */
/*   Updated: 2019/05/29 18:38:40 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int deal_key(int key, void *param)
{
	void *shit;
	ft_putchar('\n');
	ft_putnbr(key);
	ft_putchar('\n');
	shit = param;
	return (0);
}

void 		create_window(void) 
{
  window win;

	win.mlx_ptr = mlx_init();
	win.win_ptr = mlx_new_window(win.mlx_ptr, WIN_WIDTH, WIN_HEIGHT,"FDF");
	mlx_pixel_put(win.mlx_ptr, win.win_ptr, 0, 0, RED);

	mlx_key_hook(win.win_ptr, deal_key, (void *)0);
	mlx_loop(win.mlx_ptr);
}
