#include <stdio.h>
#include <stdlib.h>
#define isUser 0
#define isAdmin 1

void adminPanel(){
    printf("Welcome back, admin!\n");
    system("/bin/sh");
}

int checkPassword(int password){
    return isUser;
}

int checkCredential(){
    // char username[] = "John Doe";
    printf("Welcome, John Doe!\n");
    printf("Password: ");
    int Password = isUser;
    char password[64];
    scanf("%s", password);
    return Password;
}

int main(){
    if (checkCredential() == isUser){
        printf("Login successfully.\n" 
                "Here is your secret: " 
                "NB2HI4DTHIXS66LPOV2HKLTCMUXWIULXGR3TSV3HLBRVCP3TNE6UKYZWJZHVC4KNOVFHK5SZJRFHC===\n");
    }
    else{
        adminPanel();
    }
    return 0;
}
