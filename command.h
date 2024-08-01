#ifndef COMMAND_H
#define COMMAND_H

#include <stdio.h>
#include <stdlib.h>
#include <error.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

const char* getUserName(void);
const char* getHostName(void);
const char* getCwd(void);
void print(char* line, size_t size);

#endif /* COMMAND_H */

