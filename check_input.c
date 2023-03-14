/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:32:04 by rdolzi            #+#    #+#             */
/*   Updated: 2023/03/14 15:06:03 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// controlla che il file in input sia formato ".ber"
void    check_ber(char  *file_name)
{
    int len;
    
    len = ft_strlen(file_name);
    while 

}

// 1. The map MUST contain at least:
//     1 exit, 
//     1 collectible
//     1 starting position
// 2. The map CAN be composed of only these 5 characters:
//     0 for an empty space,
//     1 for a wall,
//     C for a collectible,
//     E for a map exit,
//     P for the player’s starting position.
void    check_elements(t_game   *game)
{


}

void    check_input(t_game  *game, char *file_name)
{
    check_ber(file_name);
    read_map(game, file_name);
    check_elements(game);
    check_rectangular(game);
    check_walls(game);
}
