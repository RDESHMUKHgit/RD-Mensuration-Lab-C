void which_in_parallelogram()
{
    int choice;
    printf("Enter for which calculation do you want to perform...\n");
    printf(BOLD_BLACK "[1] AREA\n" RESET);
    printf(BOLD_BLACK "[2] PERIMETER\n" RESET);
    printf(BOLD_BLACK "[0] EXIT the program\n" RESET);

    choice = get_valid_number("Enter your choice here: ");

    validate_less_greater(choice, 0, 2);

    switch (choice)
    {
    case 1:
        calc_2d_parallelogram_area();
        break;

    case 2:
        calc_2d_parallelogram_perimeter();
        break;

    case 0:
        exit_program();

    default:
        break;
    }
}

void calc_2d_parallelogram_area()
{
    double base, height, area;

    base = get_valid_number(YELLOW "Enter the base of the parallelogram: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the parallelogram: " RESET);

    not_negative(base);
    not_negative(height);

    // % Calculate and Output the area
    area = base * height;
    please_wait();

    printf(CYAN "✓ The area of the parallelogram with base %.2lf and height %.2lf is: %.2lf %s\n", base, height, area, "units²");
    printf(RESET);
}

void calc_2d_parallelogram_perimeter()
{
    double base, side, perimeter;

    base = get_valid_number(YELLOW "Enter the base of the parallelogram: " RESET);
    side = get_valid_number(YELLOW "Enter the side length of the parallelogram: " RESET);

    not_negative(base);
    not_negative(side);

    // % Calculate and Output the perimeter
    perimeter = 2 * (base + side);
    please_wait();

    printf(CYAN "✓ The perimeter of the parallelogram with base %.2lf and side %.2lf is: %.2lf %s\n", base, side, perimeter, "units");
    printf(RESET);
}

////END OF FILE