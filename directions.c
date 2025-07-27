//$ INCLUDING "2D" SHAPES
#include "sub_files/2d/square.c"
#include "sub_files/2d/rect.c"
#include "sub_files/2d/circle.c"
#include "sub_files/2d/parallelogram.c"
#include "sub_files/2d/rhombus.c"
#include "sub_files/2d/trapezium.c"
#include "sub_files/2d/triangle.c"

//$ INCLUDING "3D" SHAPES
#include "sub_files/3d/cone.c"
#include "sub_files/3d/cube.c"
#include "sub_files/3d/cuboid.c"
#include "sub_files/3d/cylinder.c"
#include "sub_files/3d/hemisphere.c"
#include "sub_files/3d/parallelepiped.c"
#include "sub_files/3d/sphere.c"
#include "sub_files/3d/pyramid.c"

void two_d_shapes(void)
{
    int two_d_choice;
    printf("Enter for which shape do you want to calculate... \n");
    printf(GREEN "[1] SQUARE\n" RESET);
    printf(GREEN "[2] RECTANGLE\n" RESET);
    printf(GREEN "[3] CIRCLE\n" RESET);
    printf(GREEN "[4] TRIANGLE\n" RESET);
    printf(GREEN "[5] PARALLELOGRAM\n" RESET);
    printf(GREEN "[6] RHOMBUS\n" RESET);
    printf(GREEN "[7] TRAPEZIUM\n" RESET);
    printf(GREEN "[0] EXIT the program\n" RESET);

    printf("Enter your choice here: ");
    if (scanf("%d", &two_d_choice) != 1 || two_d_choice < 0 || two_d_choice > 7)
    {
        printf("✗ Invalid input! SEE THE RANGE Properly!\n");
        return;
    }
    switch (two_d_choice)
    {
    case 1:
        which_in_square();
        break;

    case 2:
        which_in_rect();
        break;

    case 3:
        which_in_circle();
        break;
    case 4:
        which_in_triangle();
        break;
    case 5:
        which_in_parallelogram();
        break;
    case 6:
        which_in_rhombus();
        break;
    case 7:
        which_in_trapezium();
        break;
    case 0:
        exit_program();
        break;

    default:
        break;
    }
}

void three_d_shapes(void)
{
    int three_d_choice;
    printf("Enter for which shape do you want to calculate... \n");
    printf(GREEN "[1] CONE\n" RESET);
    printf(GREEN "[2] CUBE\n" RESET);
    printf(GREEN "[3] CUBOID\n" RESET);
    printf(GREEN "[4] CYLINDER\n" RESET);
    printf(GREEN "[5] HEMISPHERE\n" RESET);
    printf(GREEN "[6] PARALLELEPIPED\n" RESET);
    printf(GREEN "[7] SPHERE\n" RESET);
    printf(GREEN "[8] PYRAMID\n" RESET);
    printf(GREEN "[0] EXIT the program\n" RESET);

    printf("Enter your choice here: ");
    scanf("%d", &three_d_choice);
    validate_less_greater(three_d_choice, 0, 8);

    switch (three_d_choice)
    {
    case 1:
        which_in_cone();
        break;

    case 2:
        which_in_cube();
        break;

    case 3:
        which_in_cuboid();
        break;

    case 4:
        which_in_cylinder();
        break;

    case 5:
        which_in_hemisphere();
        break;

    case 6:
        which_in_parallelepiped();
        break;

    case 7:
        which_in_sphere();
        break;

    case 8:
        which_in_pyramid();
        break;

    case 0:
        exit_program();
        break;

    default:
        print_invalid();
        break;
    }
}

//// END OF FILE