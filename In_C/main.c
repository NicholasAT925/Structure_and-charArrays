#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */

/* Global Variables */
char fisrtString[30], secondString[30];

/* declaring structure */
struct name{
    char firstName[20];
    char lastName[20];
};
struct pNmae{
    char *pFirstName;
    char *pLastName;
};

int main(){
    /* Initializing Global Variables */
    struct name myName = {"Nicholas","Halo"};
    struct pNmae PtrName = {"korra","Astrid"};

    printf("The Array name is %s %s\n\n", myName.firstName, myName.lastName);
    printf("The Pointer Array name is %s %s\n\n", PtrName.pFirstName, PtrName.pLastName);
    strcpy(fisrtString, "Nicholas");
    strcpy(secondString,"Azula");
    printf("%s,%s", fisrtString, secondString);

    return 0;
}

/* Function Details */