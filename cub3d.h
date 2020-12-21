/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wspectra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:42:14 by wspectra          #+#    #+#             */
/*   Updated: 2020/12/21 15:42:16 by wspectra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "./libft/libft.h"
# include "./mlx/mlx.h"
typedef struct	s_plr
{
	int			x;
	int			y;
}				t_plr;

typedef struct	s_mlx
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	char	 **map;
	t_plr	*plr;
}				t_mlx;

typedef struct	s_file
{
	int		resol_x;
	int		resol_y;
	char	*north;
	char	*south;
	char	*west;
	char	*east;
	char	*sprite;
	int		ceilling;
	int		floor;
	char	**map;
}				t_file;

typedef struct	s_all
{
	t_file	*file;
	t_mlx	*mlx;
}				t_all;

void read_file(int fd);
void parsing (char **file);
void print_map(t_all *all);

#endif
