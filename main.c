#include "sub_files/utils.c"
#include "directions.c"

int main()
{
    system("chcp 65001 > nul"); // Enable UTF-8 (for Windows)
    clear_screen();
    next_line();
    print_header();

    // @ MAIN SWITCH CASE
    // % Asking for input-choice
    printf(RED "What do you want to do...\n" RESET);
    printf(CYAN "[1] Calculate for 2D SHAPES\n" RESET);
    printf(CYAN "[2] Calculate for 3D SHAPES\n" RESET);
    printf(CYAN "[0] Exit Program\n" RESET);
    int start_choice;
    start_choice = get_valid_number("Enter your choice here: ");
    validate_start_choices(start_choice);

    // % MAIN switch case
    switch (start_choice)
    {
    case 1:
        two_d_shapes();
        break;
    case 2:
        three_d_shapes();
        break;
    case 0:
        exit_program();
        // break;

    default:
        break;
    }

    next_line();
    pause_screen();
    return 0;
}