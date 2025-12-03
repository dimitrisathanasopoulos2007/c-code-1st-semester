#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c;
    float x,xx,xxx;

    printf("Put the size of the first side:");
    x = scanf("%f",&a);
    /**FS1**/
    while(x!=1){
        printf("Thats not a number...");
        scanf("%*[^\n]");
        printf("\n");
        printf("Put the size of the first side:");
        x = scanf("%f",&a);
    }
    /**FS1 ending**/

    printf("Put the size of the second side:");
    xx = scanf("%f",&b);
    /**FS2**/
    while(xx!=1){
        printf("Thats not a number...");
        scanf("%*[^\n]");
        printf("\n");
        printf("Put the size of the second side:");
        xx = scanf("%f",&b);
    }
    /**FS2 ending**/

    printf("Put the size of the third side:");
    xxx = scanf("%f",&c);
    /**FS3**/
    while(xxx!=1){
        printf("Thats not a number...");
        scanf("%*[^\n]");
        printf("\n");
        printf("Put the size of the third side:");
        xxx = scanf("%f",&c);
    }
    /**FS3 ending**/

    float ab = a+b;
    float ac = a+c;
    float bc = b+c;

    if(ab>c && ac>b && bc>a){
        printf("That is a triangle!");
    }
    else{
        printf("That is not a triangle!");
    }

    printf("\n");
    printf("Press any key to continue...");

    char en= getch();

    return 0;
}
