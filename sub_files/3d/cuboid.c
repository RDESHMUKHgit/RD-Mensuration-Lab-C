void which_in_cuboid()
{
    int cuboid_choice;
    printf("Enter for which calculation do you want to perform... \n");
    printf(BOLD_MAGENTA "[1] Volume\n" RESET);
    printf(BOLD_MAGENTA "[2] Surface Area\n" RESET);
    printf(BOLD_MAGENTA "[3] Curved Surface Area\n" RESET);
    printf(BOLD_MAGENTA "[0] EXIT the program\n" RESET);

    cuboid_choice = get_valid_number("Enter your choice here: ");
    validate_less_greater(cuboid_choice, 0, 3);

    switch (cuboid_choice)
    {
    case 1:
        calc_3d_cuboid_volume();
        break;

    case 2:
        calc_3d_cuboid_surface_area();
        break;

    case 3:
        calc_3d_cuboid_curved_surface_area();
        break;

    case 0:
        exit_program();
        break;
    default:
        break;
    }
}

void calc_3d_cuboid_volume()
{
    double length, width, height, volume;

    length = get_valid_number(YELLOW "Enter the length of the cuboid: " RESET);
    width = get_valid_number(YELLOW "Enter the width of the cuboid: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the cuboid: " RESET);

    not_negative(length);
    not_negative(width);
    not_negative(height);

    // % Calculate and Output the volume
    volume = length * width * height;
    please_wait();

    printf(CYAN "✓ The volume of the cuboid with dimensions %.2lf x %.2lf x %.2lf is: %.2lf %s\n", length, width, height, volume, "units³");
    printf(RESET);
}

void calc_3d_cuboid_surface_area()
{
    double length, width, height, surface_area;

    length = get_valid_number(YELLOW "Enter the length of the cuboid: " RESET);
    width = get_valid_number(YELLOW "Enter the width of the cuboid: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the cuboid: " RESET);

    not_negative(length);
    not_negative(width);
    not_negative(height);

    // % Calculate and Output the surface area
    surface_area = 2 * (length * width + width * height + height * length);
    please_wait();

    printf(CYAN "✓ The surface area of the cuboid with dimensions %.2lf x %.2lf x %.2lf is: %.2lf %s\n", length, width, height, surface_area, "units²");
    printf(RESET);
}

void calc_3d_cuboid_curved_surface_area()
{
    double length, width, height, curved_surface_area;

    length = get_valid_number(YELLOW "Enter the length of the cuboid: " RESET);
    width = get_valid_number(YELLOW "Enter the width of the cuboid: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the cuboid: " RESET);

    not_negative(length);
    not_negative(width);
    not_negative(height);

    // % Calculate and Output the curved surface area
    curved_surface_area = 2 * (height * (length + width));
    please_wait();

    printf(CYAN "✓ The Curved surface area of the cuboid with dimensions %.2lf x %.2lf x %.2lf is: %.2lf %s\n", length, width, height, curved_surface_area, "units²");
    printf(RESET);
}