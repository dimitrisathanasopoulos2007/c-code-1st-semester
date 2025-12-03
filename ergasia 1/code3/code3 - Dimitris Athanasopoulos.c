#include <stdio.h>
#include <conio.h>

int main()
{
    int x,xx,sb, bb;

    printf("How many small bottles?:");
    x = scanf("%d", &sb);
    /**FS1**/
    while(sb<0 || x!=1){
        printf("Error, try again:\n");
        scanf("%*[^\n]");
        printf("How many small bottles?:");
        x = scanf("%d", &sb);
    }
    /**FS1 ending**/

    printf("How many big bottles?:");
    xx = scanf("%d", &bb);
    /**FS2**/
    while(bb<0 || xx!=1){
        printf("Error, try again:\n");
        scanf("%*[^\n]");
        printf("How many big bottles?:");
        xx = scanf("%d", &bb);
    }
    /**FS2 ending**/


    float csb = sb*0.008;
    float cbb = bb*0.02;
    float ac = csb+cbb;
    char cur = '$';
    int bx = sb+bb;



    /*Epalithefsi
    printf("\nCost of small bottles:%0.2f",csb);
    printf("\nCost of big bottles:%0.2f",cbb);
    printf("\nFull cost:%0.2f",ac);*/


    if(ac>600){
        float prc = (ac*20)/100;
        float fac = ac-prc;
        printf("\nThe final order cost is:%0.2f%c",fac,cur);
    }
    else if(bx>3000 || ac>200){
        float prc = (ac*8)/100;
        float fac = ac - prc;
        printf("\nThe final order cost is:%0.2f%c",fac,cur);
    }
    else{
        printf("\nThe final order cost is:%0.2f%c",ac,cur);
    }


    /*Gia to .exe*/
    printf("\n Press any key to continue:");
    char a=getch();

    return 0;
}
