#include <stdio.h>
#include <conio.h>

int main()
{


    int hex1,hex2,hex3,hex4,hex5,hex6;
    int mod;

    printf("Enter the MAC address:");
    scanf("%x%*c%x%*c%x%*c%x%*c%x%*c%x",&hex1,&hex2,&hex3,&hex4,&hex5,&hex6);

    mod = hex1 % 2;


    if(hex1==hex2 && hex2==hex3 && hex3==hex4 && hex4==hex5 && hex5==hex6){
        printf("The address is broadcast!");
    }
    else if(mod==1){
        printf("The address is multicast!");
    }
    else{
        printf("The address is unicast!");
    }


    printf("\nPress any key to continue...");
    char a = getch();



    return 0;
}
