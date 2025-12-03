#include <stdio.h>
#include <conio.h>

int main()
{
    int ascii=32;
    int i;

    while(ascii<127){
        for(i=0;i<10;i++){
            printf("%c(%d)\t",ascii,ascii);
            ascii++;
        }
        printf("\n");
    }

    printf("\n Press any key to continue...");
    char a = getch();

    return 0;
}
