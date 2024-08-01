#include "command.h"

/**
 * @brief 获取用户名
 */
const char* getUserName(void) {
    const char* name = getenv("USER");
    
    if (name == NULL) {
        return "None";
    }

    return name;
}

/**
 * @brief
 */
const char* getHostName(void) {
    const char* hostName = getenv("NAME");

    if (hostName == NULL) {
        return "None";
    }

    return hostName;
}

/**
 * @brief 获取当前路径
 */
const char* getCwd(void) {
    const char* cwd = getenv("PWD");

    if (cwd == NULL) {
        return "None";
    }

    return cwd;
}

/**
 * @brief
 */
void print(char* line, size_t size) {
    const char* userName = getUserName();
    const char* hostName = getHostName();
    const char* cwd = getCwd();
    snprintf(line, size, "[%s@%s %s]> ", userName, hostName, cwd);
    printf("%s", line);
    fflush(stdout);
}

