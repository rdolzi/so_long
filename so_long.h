#ifndef SO_LONG_H
# define SO_LONG_H

#include <mlx.h>
#include <stdio.h>
typedef struct s_entity{
	int x_pos;
	int y_pos;
	void	*img;
} t_entity;

typedef struct s_playground{
	int		width;
	int		height;
	void	*collectable;
	void	*wall;
	void	*ground;
	void	*exit;
} t_playground;
typedef struct s_game{
	t_entity		player;
	t_entity		enemy;
	t_playground	playground;
	char			**map;
	void			*mlx;
	void			*mlx_window;
	int				moves;
	int				number_coins;
} t_game;

int		ft_strlen(char  *str);
void    check_input(t_game  *game, char *file_name);

#endif