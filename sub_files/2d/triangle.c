void which_in_triangle()
{
    int choice;
    printf(BOLD_BLACK "[1] Area of Triangle\n" RESET);
    printf(BOLD_BLACK "[2] Perimeter of Triangle\n" RESET);
    printf(BOLD_BLACK "[0] EXIT the program\n" RESET);

    choice = get_valid_number("Enter your choice here: ");

    validate_less_greater(choice, 0, 2);

    switch (choice)
    {
    case 1:
        calc_2d_triangle_area();
        break;

    case 2:
        calc_2d_triangle_perimeter();
        break;

    case 0:
        exit_program();

    default:
        print_invalid();
        break;
    }
}

void calc_2d_triangle_area()
{
    double base, height, area;

    base = get_valid_number(YELLOW "Enter the base of the triangle: " RESET);
    height = get_valid_number(YELLOW "Enter the height of the triangle: " RESET);

    not_negative(base);
    not_negative(height);

    // % Calculate and Output the area
    area = (base * height) / 2;
    please_wait();

    printf(CYAN "✓ The area of the triangle with base %.2lf and height %.2lf is: %.2lf %s\n", base, height, area, "units²");
    printf(RESET);
}

void calc_2d_triangle_perimeter()
{
    double side1, side2, side3, perimeter;

    side1 = get_valid_number(YELLOW "Enter the length of the first side: " RESET);
    side2 = get_valid_number(YELLOW "Enter the length of the second side: " RESET);
    side3 = get_valid_number(YELLOW "Enter the length of the third side: " RESET);

    not_negative(side1);
    not_negative(side2);
    not_negative(side3);

    // % Calculate and Output the perimeter
    perimeter = side1 + side2 + side3;
    please_wait();

    printf(CYAN "✓ The perimeter of the triangle with sides %.2lf, %.2lf and %.2lf is: %.2lf %s\n", side1, side2, side3, perimeter, "units");
    printf(RESET);
}