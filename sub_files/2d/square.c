void which_in_square()
{
    printf("Enter WHAT you want to calculate in SQUARE...\n");
    printf(BOLD_BLACK "[1] AREA\n" RESET);
    printf(BOLD_BLACK "[2] PERIMETER\n" RESET);
    printf(BOLD_BLACK "[0] Exit the program...\n" RESET);

    int square_choice;
    square_choice = get_valid_number("Enter your choice here: ");
    validate_less_greater(square_choice, 0, 2);
    switch (square_choice)
    {
    case 1:
        calc_2d_square_area();
        break;

    case 2:
        calc_2d_square_perimeter();
        break;

    case 0:
        exit_program();

    default:
        break;
    }
}

void calc_2d_square_area()
{
    // % Taking input for dimension
    double side, area;

    side = get_valid_number(YELLOW "Enter the length of side of square: " RESET);

    not_negative(side);

    // % Calculate and Output the area
    area = side * side;
    please_wait();

    printf(CYAN "✓ The area of the square with side %.2lf is: %.2lf %s\n", side, area, "units²");
    printf(RESET);
}

void calc_2d_square_perimeter()
{
    double side, perimeter;

    side = get_valid_number(YELLOW "Enter the length of side of square: " RESET);

    not_negative(side);

    // % Calculate and Output the perimeter
    perimeter = 4 * side;
    please_wait();

    printf(CYAN "✓ The perimeter of the square with side %.2lf is: %.2lf %s\n", side, perimeter, "units");
    printf(RESET);
}

////END OF FILE