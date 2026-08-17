#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    const char *filename = "myfile.txt";
    int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0644);
    
    if (fd == -1) {
        perror("Ошибка открытия файла");
        return 1;
    }
    
    const char *text = "Hello, system programming!\n";
    ssize_t bytes_written = write(fd, text, 27);
    
    if (bytes_written == -1) {
        perror("Ошибка записи");
        close(fd);
        return 1;
    }
    
    close(fd);
    printf("Файл успешно создан и записан\n");
    return 0;
}