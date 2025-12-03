#include <stdio.h>
#include <conio.h>

int main()
{
    int dc,in;
    int x;
    int in2nd=0;

    do{
        printf("Enter a positive 5 digit integer:");
        x = scanf("%d",&in);
        /**FS**/
        while(x != 1){
            printf("That is not an integer...");
            scanf("%*[^\n]");
            printf("Enter a positive 5 digit integer:");
            x = scanf("%d",&in);
        }
        /**FS ending**/

        in2nd = in;
        dc = 0;
        while(in!=0){
            in = in/10;
            dc++;
        }
        if(dc!=5){
            printf("Error, the integer does not have 5 digits...");
            printf("\n");
        }

        if(in2nd<=0){
            printf("Error, the integer must be positive and not zero...");
            printf("\n");
        }

    }while(dc!=5 || in2nd<=0);


    int mod;
    int sev;
    int rnum=0;



    while(in2nd != 0){
        mod = in2nd % 10;
        in2nd = in2nd/10;
        sev = rnum*10;
        rnum = sev+mod;
    }

    printf("The reversed number is:%d",rnum);
    printf("\n");
    printf("Press any key to continue...");

    char a = getch();


    return 0;
}
