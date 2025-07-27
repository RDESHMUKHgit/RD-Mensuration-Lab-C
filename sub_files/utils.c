//? AUTHOR: Rudraksha
//? DATE: 27-07-2025
//? TIME: 09:47
//? DAY: Sunday
//? FILE: utils.c

//$ ===== HEADER FILES =====
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

//$ ===== PI =====
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

//? ================================================
//? ANSI COLOR MACROS — Terminal Output in Style 🎨
//? -----------------------------------------------
//! USAGE EXAMPLE:
//!   printf(RED "This is red text." RESET);
//!   printf(BOLD_GREEN "\nSuccess!\n" RESET);
//!   printf(BG_BLUE WHITE "\nHighlighted Text\n" RESET);
//? ================================================

//$ ---- REGULAR COLORS ----
#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

//$ ---- BOLD / BRIGHT COLORS ----
#define BOLD_BLACK "\033[1;30m"
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_YELLOW "\033[1;33m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_MAGENTA "\033[1;35m"
#define BOLD_CYAN "\033[1;36m"
#define BOLD_WHITE "\033[1;37m"

//$ ---- BACKGROUND COLORS ----
#define BG_BLACK "\033[40m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_WHITE "\033[47m"

//$ ---- RESET COLOR ----
#define RESET "\033[0m"

//$ ===== FUNCTION DEFINITIONS =====

//@ Clear terminal screen based on OS
void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

//@ Center text with optional color (width = 80 chars)
void center_text(const char *text, const char *color)
{
    int width = 120;
    int len = strlen(text);
    int padding = (width - len) / 2;
    if (padding < 0)
        padding = 0;

    for (int i = 0; i < padding; i++)
        printf(" ");

    if (color)
        printf("%s%s%s\n", color, text, RESET);
    else
        printf("%s\n", text);
}

//@ Print program header with centered dynamic time & date
void print_header()

{
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    char date_str[30], time_str[30], day_str[30];

    strftime(date_str, sizeof(date_str), "📅 Date: %d-%m-%Y", local);
    strftime(time_str, sizeof(time_str), "⌚ Time: %H:%M", local);
    strftime(day_str, sizeof(day_str), "📆 Day : %A", local);

    center_text("|--------------------------------------------------------------------------------------------------|", BG_BLACK);
    center_text("🚀 Welcome to Rudraksha's C Program!", BG_WHITE);
    center_text(" __  __                                _   _               __  __           _             ", YELLOW);
    center_text("|  \\/  |                              | | (_)             |  \\/  |         | |            ", YELLOW);
    center_text("| \\  / | ___ _ __  ___ _   _ _ __ __ _| |_ _  ___  _ __   | \\  / | __ _ ___| |_ ___ _ __  ", YELLOW);
    center_text("| |\\/| |/ _ \\ '_ \\/ __| | | | '__/ _` | __| |/ _ \\| '_ \\  | |\\/| |/ _` / __| __/ _ \\ '__| ", YELLOW);
    center_text("| |  | |  __/ | | \\__ \\ |_| | | | (_| | |_| | (_) | | | | | |  | | (_| \\__ \\ ||  __/ |    ", YELLOW);
    center_text("|_|  |_|\\___|_| |_|___/\\__,_|_|  \\__,_|\\__|_|\\___/|_| |_| |_|  |_|\\__,_|___/\\__\\___|_|    ", YELLOW);
    center_text("                                                                                         ", YELLOW);
    center_text("                                                                                         ", YELLOW);

    center_text(date_str, CYAN);
    center_text(time_str, MAGENTA);
    center_text(day_str, YELLOW);
    center_text("|--------------------------------------------------------------------------------------------------|", BG_BLACK);
}

//@ PAUSE the screen...
void pause_screen()
{
#ifdef _WIN32
    system("pause");
#else
    printf("\nPress Enter to Exit...");
    getchar();
    getchar();
#endif
}

//@ next line
void next_line()
{
    printf("\n");
}

int validate_start_choices(int choice)
{
    if ((choice < 0) || (choice > 2))
    {
        printf(BOLD_RED "INVALID INPUT\n" RESET);
        return 1;
    }
}

void validate_less_greater(int value, int min, int max)
{
    if (value < min || value > max)
    {
        printf(BOLD_RED "INVALID INPUT: Please enter a value between %d and %d.\n" RESET, min, max);
        return 1;
    }
    return 0;
}

void exit_program()
{
    printf(BG_GREEN "Exiting the program...(PLEASE WAIT)\n" RESET);
    sleep(1);
    return;
    pause_screen();
}

void print_invalid()
{
    printf(BOLD_RED "INVALID INPUT\n" RESET);
}

void please_wait()
{
    printf(BOLD_YELLOW "Please wait...\n" RESET);
    sleep(1);
}

void not_negative(double pos)
{
    if (pos < 0)
    {
        printf(BOLD_RED "Cannot enter the negative value\n" RESET);
        return 1;
    }
}

double get_valid_number(const char *prompt)
{
    char input[100];
    int valid = 0;

    while (!valid)
    {
        printf("%s", prompt);
        scanf("%s", input);

        int dot_count = 0;
        valid = 1;

        for (int i = 0; i < strlen(input); i++)
        {
            if (input[i] == '.')
            {
                dot_count++;
                if (dot_count > 1)
                {
                    valid = 0;
                    break;
                }
            }
            else if (!isdigit(input[i]) && !(i == 0 && input[i] == '-'))
            {
                valid = 0;
                break;
            }
        }

        if (valid)
        {
            double num = atof(input);
            if (num < 0)
            {
                printf(BOLD_RED "INVALID INPUT: Cannot enter a negative value.\n" RESET);
                valid = 0;
            }
            else
            {
                return num; // ✅ Valid number and not negative
            }
        }
        else
        {
            printf(BOLD_RED "INVALID INPUT: Please enter a valid number (no letters/symbols).\n" RESET);
        }
    }

    return 0; // fallback (won't really reach here)
}

//// END OF FILE