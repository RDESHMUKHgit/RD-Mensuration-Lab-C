void which_in_rhombus()
{
    int choice;
    printf("Enter for which calculation do you want to perform... \n");
    printf(BOLD_BLACK "[1] Area of Rhombus\n" RESET);
    printf(BOLD_BLACK "[2] Perimeter of Rhombus\n" RESET);
    printf(BOLD_BLACK "[0] EXIT the program\n" RESET);

    choice = get_valid_number("Enter your choice here: ");

    validate_less_greater(choice, 0, 2);

    switch (choice)
    {
    case 1:
        calc_2d_rhombus_area();
        break;

    case 2:
        calc_2d_rhombus_perimeter();
        break;

    case 0:
        exit_program();

    default:
        print_invalid();
        break;
    }
}

void calc_2d_rhombus_area()
{
    double diagonal1, diagonal2, area;

    diagonal1 = get_valid_number(YELLOW "Enter the length of the first diagonal: " RESET);
    diagonal2 = get_valid_number(YELLOW "Enter the length of the second diagonal: " RESET);

    not_negative(diagonal1);
    not_negative(diagonal2);

    // % Calculate and Output the area
    area = (diagonal1 * diagonal2) / 2;
    please_wait();

    printf(CYAN "✓ The area of the rhombus with diagonals %.2lf and %.2lf is: %.2lf %s\n", diagonal1, diagonal2, area, "units²");
    printf(RESET);
}

void calc_2d_rhombus_perimeter()
{
    double side, perimeter;

    side = get_valid_number(YELLOW "Enter the length of a side of the rhombus: " RESET);

    not_negative(side);

    // % Calculate and Output the perimeter
    perimeter = 4 * side;
    please_wait();

    printf(CYAN "✓ The perimeter of the rhombus with side %.2lf is: %.2lf %s\n", side, perimeter, "units");
    printf(RESET);
}