#include <stdio.h>
#include <conio.h>

int main()
{
    int hh,mm,ss;

    printf("Put the time:");
    scanf("%d%d%d",&hh,&mm,&ss);
    /**FS**/
    while(hh>23 || hh<0 || mm>59 || mm<0 || ss>59 || ss<0){
        printf("Invalid time...\n");
        printf("Put the time:");
        scanf("%d%d%d",&hh,&mm,&ss);
    }
    /**FS ending**/

    int htm = 24-hh;
    int mtm = 60-mm;
    int stm = 60-ss;

    printf("\n");
    printf("The time until midnight is:%d:%d:%d",htm,mtm,stm);


    printf("\n Press any key to continue...");
    char a = getch();

    return 0;


}
