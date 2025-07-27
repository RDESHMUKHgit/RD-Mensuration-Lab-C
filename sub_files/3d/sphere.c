void which_in_sphere()
{
    int sphere_choice;
    printf("Enter for which calculation do you want to perform... \n");
    printf(BOLD_MAGENTA "[1] VOLUME\n" RESET);
    printf(BOLD_MAGENTA "[2] SURFACE AREA\n" RESET);
    printf(BOLD_MAGENTA "[3] CURVED SURFACE AREA\n" RESET);
    printf(BOLD_MAGENTA "[0] EXIT the program\n" RESET);

    sphere_choice = get_valid_number("Enter your choice here: ");
    validate_less_greater(sphere_choice, 0, 3);

    switch (sphere_choice)
    {
    case 1:
        calc_3d_sphere_volume();
        break;

    case 2:
        calc_3d_sphere_surface_area();
        break;

    case 3:
        calc_3d_sphere_curved_surface_area();
        break;

    case 0:
        exit_program();
        break;
    default:
        break;
    }
}

void calc_3d_sphere_volume()
{
    double radius, volume;

    radius = get_valid_number(YELLOW "Enter the radius of the sphere: " RESET);

    not_negative(radius);

    // % Calculate and Output the volume
    volume = (4.0 / 3.0) * M_PI * radius * radius * radius;
    please_wait();

    printf(CYAN "✓ The volume of the sphere with radius %.2lf is: %.2lf %s\n", radius, volume, "units³");
    printf(RESET);
}

void calc_3d_sphere_surface_area()
{
    double radius, surface_area;

    radius = get_valid_number(YELLOW "Enter the radius of the sphere: " RESET);

    not_negative(radius);

    // % Calculate and Output the surface area
    surface_area = 4 * M_PI * radius * radius;
    please_wait();

    printf(CYAN "✓ The surface area of the sphere with radius %.2lf is: %.2lf %s\n", radius, surface_area, "units²");
    printf(RESET);
}

void calc_3d_sphere_curved_surface_area()
{
    double radius, curved_surface_area;

    radius = get_valid_number(YELLOW "Enter the radius of the sphere: " RESET);

    not_negative(radius);

    // % Calculate and Output the curved surface area
    curved_surface_area = 2 * M_PI * radius * radius;
    please_wait();

    printf(CYAN "✓ The curved surface area of the sphere with radius %.2lf is: %.2lf %s\n", radius, curved_surface_area, "units²");
    printf(RESET);
}