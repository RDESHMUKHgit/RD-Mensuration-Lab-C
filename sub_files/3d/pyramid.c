void which_in_pyramid()
{
    int choice;
    printf("Enter for which calculation do you want to perform... \n");
    printf(BOLD_MAGENTA "[1] VOLUME\n" RESET);
    printf(BOLD_MAGENTA "[2] SURFACE AREA\n" RESET);
    printf(BOLD_MAGENTA "[3] CURVED SURFACE AREA\n" RESET);
    printf(BOLD_MAGENTA "[0] EXIT the program\n" RESET);

    choice = get_valid_number("Enter your choice here: ");
    validate_less_greater(choice, 0, 3);

    switch (choice)
    {
    case 1:
        calc_3d_pyramid_volume();
        break;

    case 2:
        calc_3d_pyramid_surface_area();
        break;

    case 3:
        calc_3d_pyramid_curved_surface_area();
        break;

    case 0:
        exit_program();
        break;
    default:
        break;
    }
}

void calc_3d_pyramid_volume()
{
    double base_length, height, volume;

    base_length = get_valid_number(YELLOW "Enter the base length of the pyramid: " RESET);

    height = get_valid_number(YELLOW "Enter the height of the pyramid: " RESET);

    not_negative(base_length);
    not_negative(height);

    // % Calculate and Output the volume
    volume = (base_length * base_length * height) / 3;
    please_wait();

    printf(CYAN "✓ The volume of the pyramid with base length %.2lf and height %.2lf is: %.2lf %s\n", base_length, height, volume, "units³");
    printf(RESET);
}

void calc_3d_pyramid_surface_area()
{
    double base_length, slant_height, surface_area;

    base_length = get_valid_number(YELLOW "Enter the base length of the pyramid: " RESET);

    slant_height = get_valid_number(YELLOW "Enter the slant height of the pyramid: " RESET);

    not_negative(base_length);
    not_negative(slant_height);

    // % Calculate and Output the surface area
    surface_area = base_length * base_length + 2 * base_length * slant_height;
    please_wait();

    printf(CYAN "✓ The surface area of the pyramid with base length %.2lf and slant height %.2lf is: %.2lf %s\n", base_length, slant_height, surface_area, "units²");
    printf(RESET);
}

void calc_3d_pyramid_curved_surface_area()
{
    double base_length, slant_height, curved_surface_area;

    base_length = get_valid_number(YELLOW "Enter the base length of the pyramid: " RESET);
    slant_height = get_valid_number(YELLOW "Enter the slant height of the pyramid: " RESET);

    not_negative(base_length);
    not_negative(slant_height);

    // % Calculate and Output the curved surface area
    curved_surface_area = base_length * slant_height;
    please_wait();

    printf(CYAN "✓ The curved surface area of the pyramid with base length %.2lf and slant height %.2lf is: %.2lf %s\n", base_length, slant_height, curved_surface_area, "units²");
    printf(RESET);
}
