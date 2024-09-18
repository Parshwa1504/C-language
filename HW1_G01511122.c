/*
Design and implement a C language program based on the following specifications:

1. The user interface will prompt for ten unique character strings to be entered from the keyboard. Each character string must have a
strlen() value between 1 and 25 inclusive, otherwise an error message is displayed and the user is re-prompted. The program sorts
this series of ten character strings (based on strcmp()), and reprints all ten strings in ascending OR descending order based on user
specification. The program then prints and labels the character string with the lowest ascii value and that with the highest ascii value
as determined by strcmp(). Character strings may NOT include the following characters: ’+’, ’*’, ’#’, ’$’, ‘%’, ‘^’, ’(’, or ’)’. (6 Points)

2. Include additional error checking for: Empty string, Duplicate string, Character other than ‘A’ or ‘D’ for sort specification. (2 Point)

3. Include at least 4 user defined functions outside of the main(). (2 point)

4. One global variable may be used. Each additional global variable will result in a one point penalty.
*/    

// Name : Parshwa Divyang Gandhi
// G-Number : G01511122

#include <stdio.h>
#include <string.h>

#define MAXIMUM_STRING 10
#define MAXIMUM_LENGTH 26

// here MAXIMUM_STRING is 10 as user have to enter 10 unique character strings as input.
// here MAXIMUM_LENGTH is 26 as each character string must have stlen() value between 1 and 25 inclusive and +1 for null character (\0).

char Strings[MAXIMUM_STRING][MAXIMUM_LENGTH];

// Function Prototypes :

void UserInput(char Strings[][MAXIMUM_LENGTH], int Number0f_strings);
int String_Valid(char str[]);
int String_Duplicate(char Strings[][MAXIMUM_LENGTH], char str[], int Number0f_strings);
char Sorting_Order();
void String_Order(char Strings[][MAXIMUM_LENGTH], int Number0f_strings, char str_order);
void String_ASCII(char Strings[][MAXIMUM_LENGTH], int Number0f_strings, char str_order);

// function defination :

//  For taking character string input from User :

void UserInput(char Strings[][MAXIMUM_LENGTH], int Number0f_strings)
{
    int i = 0;
    printf("Enter 10 character string:\n");
    printf("\n");

    while (i < Number0f_strings)
    {
        char Temporary[MAXIMUM_LENGTH];
        printf("Enter string %d : ", i + 1);
        fgets(Temporary, sizeof(Temporary), stdin);

        // Removing New line character :

        Temporary[strcspn(Temporary, "\n")] = '\0';

        // For duplicate string:

        if (String_Duplicate(Strings, Temporary, i))
        {
            printf("Error: duplicate string - please re-entre\n");
            continue;
        }

        // For Validate String :

        if (!String_Valid(Temporary))
        {
            continue;
        }

        strcpy(Strings[i], Temporary);
        i++;
    }
}

// String Validation Logic:

int String_Valid(char str[])
{
    int length = strlen(str);

    if (length < 1 || length > 25)
    {
        return 0;
    }

    //  For Invalid charaters:

    const char *invalidcharacters = "+*#$%^()";
    for (int i = 0; i < length; i++)
    {
        if (strchr(invalidcharacters, str[i]) != NULL)
        {
            printf("Error %c is an illegal character - please re-enter\n", str[i]);
            return 0;
        }
    }

    return 1;
}

// For Duplicate Strings :

int String_Duplicate(char Strings[][MAXIMUM_LENGTH], char str[], int Number0f_strings)
{

    for (int i = 0; i < Number0f_strings; i++)
    {
        if (strcmp(Strings[i], str) == 0)
        {
            return 1;
        }
    }
    return 0;
}

// How user want to sort 10 user input character string (in Ascending or Descending order) :

char Sorting_Order()
{
    char string_order;
    printf("\n");

    while (1)
    {
        printf("Print character strings in Ascending or Descending order : ");
        scanf("%c", &string_order);
        while (getchar() != '\n')
            ;

        if (string_order == 'A')
        {
            printf("Ascending Order:\n");
            return string_order;
        }
        else if (string_order == 'D')
        {
            printf("Descending order:\n");
            return string_order;
        }
        else
        {
            printf("Error : Please enter 'A' or 'D' .\n ");
        }
    }
}

// FOR Sorting Strings using Bubble Sort Algorithm :

void String_Order(char Strings[][MAXIMUM_LENGTH], int Number0f_strings, char str_order)
{

    for (int i = 0; i < (Number0f_strings - 1); i++)
    {
        for (int j = 0; j < (Number0f_strings - i - 1); j++)
        {
            int compare = strcmp(Strings[j], Strings[j + 1]);
            if ((str_order == 'A' && compare > 0) || (str_order == 'D' && compare < 0))
            {
                // Swapping Logic in Bubble sort :
                char temporary[MAXIMUM_LENGTH];
                strcpy(temporary, Strings[j]);
                strcpy(Strings[j], Strings[j + 1]);
                strcpy(Strings[j + 1], temporary);
            }
        }
    }
}

// For printing strings with lowest and highest ascii value:

void String_ASCII(char Strings[][MAXIMUM_LENGTH], int Number0f_strings, char str_order)
{
    if (str_order == 'A')
    {
        printf("\nString with lowest ascii value : %s\n", Strings[0]);
        printf("String with highest ascii value: %s\n", Strings[(Number0f_strings - 1)]);
    }
    else if (str_order == 'D')
    {

        printf("\nString with lowest ascii value : %s\n", Strings[(Number0f_strings - 1)]);
        printf("String with highest ascii value: %s\n", Strings[0]);
    }
}

// Main function

int main()
{
    char str_order;

    UserInput(Strings, MAXIMUM_STRING);

    str_order = Sorting_Order();

    String_Order(Strings, MAXIMUM_STRING, str_order);

    printf("\n");

    for (int i = 0; i < MAXIMUM_STRING; i++)
    {
        printf("%s\n", Strings[i]);
    }

    String_ASCII(Strings, MAXIMUM_STRING, str_order);

    return 0;
}
