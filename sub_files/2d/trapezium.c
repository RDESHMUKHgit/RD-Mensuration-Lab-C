void which_in_trapezium()
{
    int choice;
    printf(BOLD_BLACK "[1] Area of Trapezium\n" RESET);
    printf(BOLD_BLACK "[2] Perimeter of Trapezium\n" RESET);
    printf(BOLD_BLACK "[0] EXIT the program\n" RESET);

    choice = get_valid_number("Enter your choice here: ");

    validate_less_greater(choice, 0, 2);

    switch (choice)
    {
    case 1:
        calc_2d_trapezium_area();
        break;

    case 2:
        calc_2d_trapezium_perimeter();
        break;

    case 0:
        exit_program();

    default:
        print_invalid();
        break;
    }
}
void calc_2d_trapezium_area()
{
    double base1, base2, height, area;

    base1 = get_valid_number(YELLOW "Enter the length of the first base: " RESET);
    base2 = get_valid_number(YELLOW "Enter the length of the second base: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the trapezium: " RESET);

    not_negative(base1);
    not_negative(base2);
    not_negative(height);

    // % Calculate and Output the area
    area = ((base1 + base2) / 2) * height;
    please_wait();

    printf(CYAN "✓ The area of the trapezium with bases %.2lf and %.2lf and height %.2lf is: %.2lf %s\n", base1, base2, height, area, "units²");
    printf(RESET);
}

void calc_2d_trapezium_perimeter()
{
    double base1, base2, side1, side2, perimeter;

    base1 = get_valid_number(YELLOW "Enter the length of the first base: " RESET);
    base2 = get_valid_number(YELLOW "Enter the length of the second base: " RESET);
    side1 = get_valid_number(YELLOW "Enter the length of the first side: " RESET);
    side2 = get_valid_number(YELLOW "Enter the length of the second side: " RESET);

    not_negative(base1);
    not_negative(base2);
    not_negative(side1);
    not_negative(side2);

    // % Calculate and Output the perimeter
    perimeter = base1 + base2 + side1 + side2;
    please_wait();

    printf(CYAN "✓ The perimeter of the trapezium with bases %.2lf and %.2lf and sides %.2lf and %.2lf is: %.2lf %s\n", base1, base2, side1, side2, perimeter, "units");
    printf(RESET);
}