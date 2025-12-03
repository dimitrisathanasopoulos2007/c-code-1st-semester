#include <stdio.h>
#include <conio.h>

int main()
{
    int istop;
    int i=1;
    int i2=0;
    istop = 10;

    while(i2<10){
        while(i<=istop){
            printf("%d\t",i);
            i++;
        }
        istop = istop +10;
        printf("\n");
        i2++;
    }

    printf("Press any key to continue...");
    char a = getch();


    return 0;
}
