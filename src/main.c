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
    // This defines the data that will be printed later.
    developer Mario;
    developer_init(&Mario, "Mario", "Ihler", "ihlermario");
    developer Jonathan;
    developer_init(&Jonathan, "Jonathan", "Schulz", "SchulzJonathan");
    developer_group project_x;
    developer_group_init(&project_x, &Mario, &Jonathan);

    printoptions();
    while (1)
    {
        char input = 0;
        scanf("%c", &input);
        switch ((int)input)
        {
            case 49:  // ASCI -> 1
                group_print(&project_x);
                printoptions();
                continue;
            case 50:  // ASCI -> 2
                group_logo_print(&project_x);
                printoptions();
                continue;
            case 51:  // ASCI -> 3
                group_print(&project_x);
                group_logo_print(&project_x);
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