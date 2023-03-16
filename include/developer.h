#ifndef DEVELOPER_Hrz7374b
#define DEVELOPER_Hrz7374b
// define the struct for the single developer.
typedef struct
{
    char firstname[15];
    char lastname[15];
    char alias[15];
} developer;
// The developer_init function will write the firstname and lastname into the given struct.
void developer_init(developer *const developerpointer, char firstname[15], char lastname[15], char alias[15]);
// The developer_print function will print the developers' information.
void developer_print(developer *const developerpointer);
#endif