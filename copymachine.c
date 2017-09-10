#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void) {


    const char welcomeMessage[] = "File to be opened and read: \n";
    write(1, welcomeMessage, sizeof(welcomeMessage)-1);

    char buffer[20];
    read(STDIN_FILENO, buffer, 20);

    buffer[19] = '\0';

    int i = 0;
    for (i=0; i<20; i++){
            if (buffer[i] == 10)
                buffer[i] = '\0';
    }
    

    


    FILE * fp;
    fp = fopen(buffer, "w+");



    return 0;
}   