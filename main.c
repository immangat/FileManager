#include <stdio.h>
#include "sum.h"
#include <unistd.h>

int main()
{


    while(true)
    {
        //user starts the applicatioin
        //Chooses what to open or where to start it
        //can then chooses to do some function
        //then can do more functions or exit the program
        char cwd[1024];
        if (getcwd(cwd, sizeof(cwd)) != NULL) {
            printf("Current working directory: %s\n", cwd);
        } else {
            perror("getcwd() error");
            return 1;
        }
        return 0;
    }
}
