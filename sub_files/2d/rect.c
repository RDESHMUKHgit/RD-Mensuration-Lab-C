void which_in_rect()
{
    printf("Enter WHAT you want to calculate in RECTANGLE...\n");
    printf(BOLD_BLACK "[1] AREA\n" RESET);
    printf(BOLD_BLACK "[2] PERIMETER\n" RESET);
    printf(BOLD_BLACK "[0] Exit the program...\n" RESET);

    int rect_choice;
    rect_choice = get_valid_number("Enter your choice here: ");
    validate_less_greater(rect_choice, 0, 2);
    switch (rect_choice)
    {
    case 1:
        calc_2d_rect_area();
        break;

    case 2:
        calc_2d_rect_perimeter();
        break;

    case 0:
        exit_program();

    default:
        break;
    }
}

void calc_2d_rect_area()
{
    // % Taking input for dimension
    double length, width, area;

    length = get_valid_number(YELLOW "Enter the length of the rectangle: " RESET);
    width = get_valid_number(YELLOW "Enter the width of the rectangle: " RESET);

    if (length <= 0 || width <= 0)
    {
        printf("✗ Invalid Rectangle dimensions! Must be > 0.\n");
        return;
    }

    // % Calculate and Output the area
    area = length * width;
    please_wait();

    printf(CYAN "✓ The area of the rectangle with length %.2lf and width %.2lf is: %.2lf %s\n", length, width, area, "units²");
    printf(RESET);
}

void calc_2d_rect_perimeter()
{
    double length, width, perimeter;

    length = get_valid_number(YELLOW "Enter the length of the rectangle: " RESET);
    width = get_valid_number(YELLOW "Enter the width of the rectangle: " RESET);

    if (length <= 0 || width <= 0)
    {
        printf("✗ Invalid Rectangle dimensions! Must be > 0.\n");
        return;
    }

    // % Calculate and Output the Perimeter
    perimeter = 2 * (length + width);
    please_wait();

    printf(CYAN "✓ The perimeter of the rectangle with length %.2lf and width %.2lf is: %.2lf %s\n", length, width, perimeter, "units");
    printf(RESET);
}

////END OF FILE