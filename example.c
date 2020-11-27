#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    int c = 1;
    while(c)
    {
        printf("\r"); // move caret back to start of line
        if (c % 2 == 0) {
            printf("Text in \033[1;31mred\033[0m");
        } else {
            printf("Text in \033[31;1;4mRED\033[0m");
	}
        fflush(stdout);
        sleep(1);
        c++;
    }
    return 0;
}

