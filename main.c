#include "so_long.h"

int  main(void)
{
    //printf("ciao");
    void *mlx;
    void *mlx_window;
    void *img;

    mlx = mlx_init();
    mlx_window = mlx_new_window(mlx, 840, 720, "CIAO");
    img = mlx_new_image(mlx, 840, 720);
    mlx_loop(mlx);
    

}