#ifndef DEVELOPER_GROUP_Hr789sn
#define DEVELOPER_GROUP_Hr789sn
//defines the number of lines and columns of the struct
#define LI 37
#define CO 181
//struct contains the grouplogo and the developers
typedef struct
{
    //the grouplogo array retains the grouplogo
    char grouplogo[LI][CO];

    //the groupmember array retains both developers
    groupmember[2]; 
    
} developer_group;

//developer_group_init inserts the grouplogo and the developers into the developer_group struct
void developer_group_init(developer_group *const grouppointer, developer *const member_a, developer *const member_b);

//group_print calls the developer_print to print both developers
void group_print(developer_group *const print_member);

//group_logo_print prints the grouplogo
void group_logo_print(developer_group *const logo);
#endif