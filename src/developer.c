#include <developer.h>
#include <stdio.h>

// The developer_init function will write the firstname, lastname and alias into the given struct.
void developer_init(developer *const developerpointer, char firstname[15], char lastname[15], char alias[15])
{
    // The for-loop will write all the name's and alias's characters one after another into the developer struct.
    for (int i = 0; i < 15; i++)
    {
        developerpointer->firstname[i] = firstname[i];
        developerpointer->lastname[i] = lastname[i];
        developerpointer->alias[i] = alias[i];
    }
}
// The developer_print function will print the developers' information.
void developer_print(developer *const developerpointer)
{
    printf("Developer:\n Name:  \033[4;33m%s %s\033[0m\n Alias: %s\n", developerpointer->firstname,
           developerpointer->lastname, developerpointer->alias);
}
