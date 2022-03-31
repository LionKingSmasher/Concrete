#include <concrete/macro.h>
#include <read_line.h>
#include <unistd.h>

__always_inline void __concrete_read_line(int fd, char* arr){
    unsigned int i = 0;
    unsigned char read_char = 0xFF;
    for(;read_char != '\n';i++){
        if(read(fd, &read_char, 1) == 0)
            break;
        arr[i] = read_char;
    }
}