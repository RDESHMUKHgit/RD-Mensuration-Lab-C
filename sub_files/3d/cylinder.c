void which_in_cylinder()
{
    int cylinder_choice;
    printf("Enter for which calculation do you want to perform... \n");
    printf(BOLD_MAGENTA "[1] Volume\n" RESET);
    printf(BOLD_MAGENTA "[2] Surface Area\n" RESET);
    printf(BOLD_MAGENTA "[3] Curved Surface Area\n" RESET);
    printf(BOLD_MAGENTA "[0] EXIT the program\n" RESET);

    cylinder_choice = get_valid_number("Enter your choice here: ");
    validate_less_greater(cylinder_choice, 0, 3);

    switch (cylinder_choice)
    {
    case 1:
        calc_3d_cylinder_volume();
        break;

    case 2:
        calc_3d_cylinder_surface_area();
        break;

    case 3:
        calc_3d_cylinder_curved_surface_area();
        break;

    case 0:
        exit_program();
        break;
    default:
        break;
    }
}

void calc_3d_cylinder_volume()
{
    double radius, height, volume;

    radius = get_valid_number(YELLOW "Enter the radius of the cylinder: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the cylinder: " RESET);

    not_negative(radius);
    not_negative(height);

    // % Calculate and Output the volume
    volume = M_PI * radius * radius * height;
    please_wait();

    printf(CYAN "✓ The volume of the cylinder with radius %.2lf and height %.2lf is: %.2lf %s\n", radius, height, volume, "units³");
    printf(RESET);
}

void calc_3d_cylinder_surface_area()
{
    double radius, height, surface_area;

    radius = get_valid_number(YELLOW "Enter the radius of the cylinder: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the cylinder: " RESET);

    not_negative(radius);
    not_negative(height);

    // % Calculate and Output the surface area
    surface_area = 2 * M_PI * radius * (radius + height);
    please_wait();

    printf(CYAN "✓ The surface area of the cylinder with radius %.2lf and height %.2lf is: %.2lf %s\n", radius, height, surface_area, "units²");
    printf(RESET);
}

void calc_3d_cylinder_curved_surface_area()
{
    double radius, height, curved_surface_area;

    radius = get_valid_number(YELLOW "Enter the radius of the cylinder: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the cylinder: " RESET);

    not_negative(radius);
    not_negative(height);

    // % Calculate and Output the curved surface area
    curved_surface_area = 2 * M_PI * radius * height;
    please_wait();

    printf(CYAN "✓ The curved surface area of the cylinder with radius %.2lf and height %.2lf is: %.2lf %s\n", radius, height, curved_surface_area, "units²");
    printf(RESET);
}