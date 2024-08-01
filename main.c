#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#include "command.h"

#define SIZE 512

int main(void) {
    char command[SIZE] = {0};
    
    print(command, sizeof(command));

    return 0;
}

