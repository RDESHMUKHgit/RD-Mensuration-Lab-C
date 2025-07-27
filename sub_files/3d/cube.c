void which_in_cube(void)
{
    int cube_choice;
    printf("Enter for which calculation do you want to calculate... \n");
    printf(BOLD_MAGENTA "[1] VOLUME\n" RESET);
    printf(BOLD_MAGENTA "[2] SURFACE AREA\n" RESET);
    printf(BOLD_MAGENTA "[3] CURVED SURFACE AREA\n" RESET);
    printf(BOLD_MAGENTA "[0] EXIT to the previous menu\n" RESET);

    cube_choice = get_valid_number("Enter your choice here: ");
    validate_less_greater(cube_choice, 0, 3);

    switch (cube_choice)
    {
    case 1:
        calc_3d_cube_volume();
        break;

    case 2:
        calc_3d_cube_surface_area();
        break;

    case 3:
        calc_3d_cube_curved_surface_area();
        break;

    case 0:
        exit_program();
        break;
    default:
        break;
    }
}

void calc_3d_cube_volume()
{
    double side, volume;

    side = get_valid_number(YELLOW "Enter the side length of the cube: " RESET);

    not_negative(side);

    // % Calculate and Output the volume
    volume = side * side * side;
    please_wait();

    printf(CYAN "✓ The volume of the cube with side length %.2lf is: %.2lf %s\n", side, volume, "units³");
    printf(RESET);
}

void calc_3d_cube_surface_area()
{
    double side, surface_area;

    side = get_valid_number(YELLOW "Enter the side length of the cube: " RESET);

    not_negative(side);

    // % Calculate and Output the surface area
    surface_area = 6 * side * side;
    please_wait();

    printf(CYAN "✓ The surface area of the cube with side length %.2lf is: %.2lf %s\n", side, surface_area, "units²");
    printf(RESET);
}

void calc_3d_cube_curved_surface_area()
{
    double side, curved_surface_area;

    side = get_valid_number(YELLOW "Enter the side length of the cube: " RESET);

    not_negative(side);

    // % Calculate and Output the curved surface area
    curved_surface_area = 4 * side * side;
    please_wait();

    printf(CYAN "✓ The curved surface area of the cube with side length %.2lf is: %.2lf %s\n", side, curved_surface_area, "units²");
    printf(RESET);
}