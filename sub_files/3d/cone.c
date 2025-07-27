void which_in_cone()
{
    int choice;
    printf(BOLD_MAGENTA "[1] Volume of Cone\n" RESET);
    printf(BOLD_MAGENTA "[2] Total Surface Area of Cone\n" RESET);
    printf(BOLD_MAGENTA "[3] Curved Surface Area of Cone\n" RESET);
    printf(BOLD_MAGENTA "[0] EXIT the program\n" RESET);

    choice = get_valid_number("Enter your choice here: ");

    validate_less_greater(choice, 0, 3);

    switch (choice)
    {
    case 1:
        calc_3d_cone_volume();
        break;

    case 2:
        calc_3d_cone_surface_area();
        break;
    case 3:
        calc_3d_cone_curved_surface_area();
        break;

    case 0:
        exit_program();

    default:
        print_invalid();
        break;
    }
}

void calc_3d_cone_volume()
{
    double radius, height, volume;

    radius = get_valid_number(YELLOW "Enter the radius of the cone: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the cone: " RESET);

    not_negative(radius);
    not_negative(height);

    // % Calculate and Output the volume
    volume = (M_PI * radius * radius * height) / 3;
    please_wait();

    printf(CYAN "✓ The volume of the cone with radius %.2lf and height %.2lf is: %.2lf %s\n", radius, height, volume, "units³");
    printf(RESET);
}

void calc_3d_cone_surface_area()
{
    double radius, slant_height, surface_area;

    radius = get_valid_number(YELLOW "Enter the radius of the cone: " RESET);
    slant_height = get_valid_number(YELLOW "Enter the slant height of the cone: " RESET);

    not_negative(radius);
    not_negative(slant_height);

    // % Calculate and Output the surface area
    surface_area = M_PI * radius * (radius + slant_height);
    please_wait();

    printf(CYAN "✓ The Total surface area of the cone with radius %.2lf and slant height %.2lf is: %.2lf %s\n", radius, slant_height, surface_area, "units²");
    printf(RESET);
}

void calc_3d_cone_curved_surface_area()
{
    double radius, slant_height, curved_surface_area;

    radius = get_valid_number(YELLOW "Enter the radius of the cone: " RESET);
    slant_height = get_valid_number(YELLOW "Enter the slant height of the cone: " RESET);

    not_negative(radius);
    not_negative(slant_height);

    // % Calculate and Output the curved surface area
    curved_surface_area = M_PI * radius * slant_height;
    please_wait();

    printf(CYAN "✓ The Curved surface area of the cone with radius %.2lf and slant height %.2lf is: %.2lf %s\n", radius, slant_height, curved_surface_area, "units²");
    printf(RESET);
}