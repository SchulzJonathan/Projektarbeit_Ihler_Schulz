#include <developer.h>
#include <developer_group.h>
#include <stdio.h>
// This function will print all the options.
void printoptions()
{
    printf("\033[4;92m========================\n");
    printf("Choose your action: \n");
    printf("List Developers \t[1]\n");
    printf("Print Group Logo \t[2]\n");
    printf("Print Group \t\t[3]\n");
    printf("Exit \t\t\t[4]\n");
    printf("========================\033[0m\n");
    printf("Enter your selection: ");
}

int main()
{
    printoptions();
    while (1)
    {
        char input = 0;
        scanf("%c", &input);
        switch ((int)input)
        {
            case 49:  // ASCI -> 1
                developers_print();
                printoptions();
                continue;
            case 50:  // ASCI -> 2
                developer_logo_print();
                printoptions();
                continue;
            case 51:  // ASCI -> 3
                developers_print();
                developer_logo_print();
                printoptions();
                continue;
            case 52:  // ASCI -> 4
                break;
            case 10:  // this will ignore the Newline command at the end of every input.
                continue;
            default:  // If input isn't valid, you. can try again!
                printf("Input not valid. Try again: ");
                continue;
        }
        break;
    }
}