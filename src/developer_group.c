#include <developer.h>
#include <developer_group.h>
#include <stdio.h>
#include <string.h>

void developer_group_init(developer_group *const grouppointer, developer *const member_a, developer *const member_b)
{
    grouppointer->groupmember[0] = member_a;
    grouppointer->groupmember[1] = member_b;

    // create the grouplogo
    strcpy(
        grouppointer->grouplogo,

        "                                         ___________________________/\n"
        "                                       /##########################/\n"
        "                                     /###########/_/############/    __________/\n"
        "                                   /##########################/     /########/	                               "
        "                           _______/\n"
        "                                 /##########################/     /########/                                  "
        "                          /######/\n"
        "                               /########/                       /########/                                  "
        "_________________________ /######/___________________________\n"
        "                             /########/   _______________/                                                 "
        "/############################################################/\n"
        "                           /########/    /##############/    ___________/    ____________________/ "
        "____________________________/   /######/\n"
        "                         /########/    /###############/   |##########/    /###################/  "
        "/###########################/  /######/\n"
        "                       /########/    /###/  ____________/   |#######/    /##################/   "
        "/###########################/  /######/\n"
        "                     /########/    /###/   /##########/     /#####/    /#######/  /#######/   /#####/         "
        "               /######/\n"
        "                   /########/    /###/   /##########/     /#####/    /##################/   /#####/           "
        "             /######/\n"
        "                 /########/    /###/   /####/ /###/     /####/     /##################/   /#####/             "
        "           /######/\n"
        "               /########/    /###/   /##########/     /####/     /##################/   "
        "/#####/____________________/   /######/\n"
        "             /########/    /###/  /##########/      /####/     /#####/                "
        "/###########################/  /######/      \n"
        "           /########/    /###/  /##########/     /####/     /#####/                 "
        "/###########################/  /######/\n"
        "         /########/    _______________________ /####/     "
        "/#####/____________________________________________________\n"
        "       /########/     /##############################/  "
        "/##########################################################/\n"
        "  ___/########/___     ________________                         "
        "________________________________________________\n"
        " |###############/  /################|                        "
        "/################################################/\n"
        " |#############/  /####################|                    "
        "/################################################/\n"
        " |###########/                    |######|                /######/\n"
        " |#########/                        |######|            /######/\n"
        " |#######/                            |######|        /######/\n"
        " |#####/                                |######|    /######/\n"
        " |###/                                    |######|/######/\n"
        " |#/                                        |##########/\n"
        " |/                                           |#######/\n"
        "                                              /######|\n"
        "                                             /##########|\n"
        "                                           /######||######|\n"
        "                                         /######/    |######|\n"
        "                                       /######/        |######|\n"
        "                                     /######/            |######|\n"
        "    _______________________________/######/                |######|_______\n"
        "   /####################################/                    |###########/\n"
        "  /###################################/                        |#######/\n"

    );
};

// group_print calls the developer_print of each developer to print out
void group_print(developer_group *const print_member)
{
    printf("========================\n");
    developer_print(print_member->groupmember[0]);
    developer_print(print_member->groupmember[1]);
    printf("========================\n");
};

// group_logo_print prints out the grouplogo character by character with a for-loop
void group_logo_print(developer_group *const logo)
{
    for (int i = 0; i < LG; ++i)
    {
        printf("%c", logo->grouplogo[i]);
    }
};