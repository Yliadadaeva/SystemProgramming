#include <fcntl.h>
#include <unistd.h>
#include "filelib.h"

void save_message(const char *filename, const char *message) {
    int fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 0644);
    if (fd == -1) return;
    
    int len = 0;
    while (message[len] != '\0') len++;
    
    write(fd, message, len);
    close(fd);
}