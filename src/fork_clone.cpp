#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int
main()
{
    pid_t cpid;
    switch (cpid = fork()) {
    case 0:   // Child process
        break;
    case -1:  // Error
        break;
    default:  // parent process
        break;
    }
    return 0;
}
