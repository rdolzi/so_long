#include "so_long.h"



//check argc 2
//check .ber
//check 




int  main(int argc, char **argv)
{
    t_game  game;
    if (argc != 2)
        return (0); //?
    check_input(game, argv[1]);
    initialize_game(game);
    play(game);
}


    // mlx = mlx_init();
    // mlx_window = mlx_new_window(mlx, 840, 720, "CIAO");
    // img = mlx_new_image(mlx, 840, 720);

    // mlx_loop(mlx);