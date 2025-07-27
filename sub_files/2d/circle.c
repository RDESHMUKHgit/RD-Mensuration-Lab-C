void which_in_circle()
{
    int choice;
    printf(BOLD_BLACK "[1] Area of Circle\n" RESET);
    printf(BOLD_BLACK "[2] Circumference of Circle\n" RESET);
    printf(BOLD_BLACK "[0] EXIT the program\n" RESET);

    choice = get_valid_number("Enter your choice here: ");
    validate_less_greater(choice, 0, 2);

    switch (choice)
    {
    case 1:
        calc_2d_circle_area();
        break;

    case 2:
        calc_2d_circle_circumference();
        break;

    case 0:
        exit_program();

    default:
        break;
    }
}

void calc_2d_circle_area()
{
    double radius, area;

    radius = get_valid_number(YELLOW "Enter the radius of the circle: " RESET);

    not_negative(radius);

    // % Calculate and Output the area
    area = M_PI * radius * radius;
    please_wait();

    printf(CYAN "✓ The area of the circle with radius %.2lf is: %.2lf %s\n", radius, area, "units²");
    printf(RESET);
}

void calc_2d_circle_circumference()
{
    double radius, circumference;

    radius = get_valid_number(YELLOW "Enter the radius of the circle: " RESET);

    not_negative(radius);

    // % Calculate and Output the circumference
    circumference = 2 * M_PI * radius;
    please_wait();

    printf(CYAN "✓ The circumference of the circle with radius %.2lf is: %.2lf %s\n", radius, circumference, "units");
    printf(RESET);
}

////END OF FILE