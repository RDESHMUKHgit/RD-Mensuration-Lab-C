void which_in_parallelepiped()
{
    int choice;

    printf(BOLD_MAGENTA "Choose the calculation you want to perform:\n" RESET);
    printf(BOLD_MAGENTA "[1] Volume\n" RESET);
    printf(BOLD_MAGENTA "[2] Surface Area\n" RESET);
    printf(BOLD_MAGENTA "[3] Curved Surface Area\n" RESET);
    printf(BOLD_MAGENTA "[0] Exit\n" RESET);

    choice = get_valid_number("Enter your choice here: ");
    validate_less_greater(choice, 0, 3);

    switch (choice)
    {
    case 1:
        calc_3d_parallelepiped_volume();
        break;

    case 2:
        calc_3d_parallelepiped_surface_area();
        break;

    case 3:
        calc_3d_parallelepiped_curved_surface_area();
        break;

    case 0:
        exit_program();
        break;
    default:
        break;
    }
}

void calc_3d_parallelepiped_volume()
{
    double length, width, height, volume;

    length = get_valid_number(YELLOW "Enter the length of the parallelepiped: " RESET);
    width = get_valid_number(YELLOW "Enter the width of the parallelepiped: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the parallelepiped: " RESET);

    not_negative(length);
    not_negative(width);
    not_negative(height);

    // % Calculate and Output the volume
    volume = length * width * height;
    please_wait();

    printf(CYAN "✓ The volume of the parallelepiped with dimensions %.2lf x %.2lf x %.2lf is: %.2lf %s\n", length, width, height, volume, "units³");
    printf(RESET);
}

void calc_3d_parallelepiped_surface_area()
{
    double length, width, height, surface_area;

    length = get_valid_number(YELLOW "Enter the length of the parallelepiped: " RESET);
    width = get_valid_number(YELLOW "Enter the width of the parallelepiped: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the parallelepiped: " RESET);

    not_negative(length);
    not_negative(width);
    not_negative(height);

    // % Calculate and Output the surface area
    surface_area = 2 * (length * width + width * height + height * length);
    please_wait();

    printf(CYAN "✓ The surface area of the parallelepiped with dimensions %.2lf x %.2lf x %.2lf is: %.2lf %s\n", length, width, height, surface_area, "units²");
    printf(RESET);
}

void calc_3d_parallelepiped_curved_surface_area()
{
    double length, width, height, curved_surface_area;

    length = get_valid_number(YELLOW "Enter the length of the parallelepiped: " RESET);
    width = get_valid_number(YELLOW "Enter the width of the parallelepiped: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the parallelepiped: " RESET);

    not_negative(length);
    not_negative(width);
    not_negative(height);

    // % Calculate and Output the curved surface area
    curved_surface_area = 2 * (length + width) * height;
    please_wait();

    printf(CYAN "✓ The curved surface area of the parallelepiped with dimensions %.2lf x %.2lf x %.2lf is: %.2lf %s\n", length, width, height, curved_surface_area, "units²");
    printf(RESET);
}