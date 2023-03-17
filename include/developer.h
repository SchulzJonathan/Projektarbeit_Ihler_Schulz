#ifndef DEVELOPER_Hrz7374b
#define DEVELOPER_Hrz7374b
// defines the length of each character array
#define NAME_LENGTH 15

// define the struct for the single developer.
typedef struct
{
    char firstname[NAME_LENGTH];
    char lastname[NAME_LENGTH];
    char alias[NAME_LENGTH];
} developer;
// The developer_init function will write the firstname and lastname into the given struct.
void developer_init(developer *const developerpointer, char const firstname[NAME_LENGTH],
                    char const lastname[NAME_LENGTH], char const alias[NAME_LENGTH]);
// The developer_print function will print the developers' information.
void developer_print(developer *const developerpointer);
#endif