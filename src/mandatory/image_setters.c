/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_setters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiaferna <tiaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:19:07 by tiaferna          #+#    #+#             */
/*   Updated: 2023/12/06 07:45:48 by tiaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_floor(t_game *game, int x, int y)
{
	if (game->floor.image)
		mlx_destroy_image(game->mlx, game->floor.image);
	game->floor.addr = "./textures/floor.xpm";
	game->floor.size = 64;
	game->floor.x = x * 64;
	game->floor.y = y * 64;
	game->floor.image = mlx_xpm_file_to_image(game->mlx, game->floor.addr, \
										&game->floor.size, &game->floor.size);
	mlx_put_image_to_window(game->mlx, game->win, game->floor.image, \
												game->floor.x, game->floor.y);
}

void	set_wall(t_game *game, int x, int y)
{
	if (game->wall.image)
		mlx_destroy_image(game->mlx, game->wall.image);
	game->wall.addr = "./textures/wall.xpm";
	game->wall.size = 64;
	game->wall.x = x * 64;
	game->wall.y = y * 64;
	game->wall.image = mlx_xpm_file_to_image(game->mlx, game->wall.addr, \
										&game->wall.size, &game->wall.size);
	mlx_put_image_to_window(game->mlx, game->win, game->wall.image, \
												game->wall.x, game->wall.y);
}

void	set_player(t_game *game, int x, int y)
{
	if (game->player.image)
		mlx_destroy_image(game->mlx, game->player.image);
	game->player.addr = "./textures/player_front.xpm";
	game->player.size = 64;
	game->player.x = x * 64;
	game->player.y = y * 64;
	game->player.image = mlx_xpm_file_to_image(game->mlx, game->player.addr, \
										&game->player.size, &game->player.size);
	mlx_put_image_to_window(game->mlx, game->win, game->player.image, \
												game->player.x, game->player.y);
}

void	set_collectible(t_game *game, int x, int y)
{
	if (game->collectible.image)
		mlx_destroy_image(game->mlx, game->collectible.image);
	game->collectible.addr = "./textures/collectible.xpm";
	game->collectible.size = 64;
	game->collectible.x = x * 64;
	game->collectible.y = y * 64;
	game->collectible.image = mlx_xpm_file_to_image(game->mlx, \
							game->collectible.addr, &game->collectible.size, \
													&game->collectible.size);
	mlx_put_image_to_window(game->mlx, game->win, game->collectible.image, \
									game->collectible.x, game->collectible.y);
}

void	set_exit(t_game *game, int x, int y)
{
	if (game->exit.image)
		mlx_destroy_image(game->mlx, game->exit.image);
	game->exit.addr = "./textures/exit.xpm";
	game->exit.size = 64;
	game->exit.x = x * 64;
	game->exit.y = y * 64;
	game->exit.image = mlx_xpm_file_to_image(game->mlx, game->exit.addr, \
										&game->exit.size, &game->exit.size);
	mlx_put_image_to_window(game->mlx, game->win, game->exit.image, \
												game->exit.x, game->exit.y);
}
