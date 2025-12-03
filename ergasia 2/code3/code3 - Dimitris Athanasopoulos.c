#include <stdio.h>
#include <conio.h>

int main()
{
    float cp;
    int x,xx;
    float roc;


    printf("Enter the population of the city:");
    x = scanf("%f",&cp);
    /**FS1**/
    while(x!=1){
        printf("That is not a number...");
        scanf("%*[^\n]");
        printf("\n");
        printf("Enter the population of the city:");
        x = scanf("%f",&cp);
    }
    /**FS1 ending**/

    printf("Enter the rate of change of the population (people/year):");
    xx = scanf("%f",&roc);
    /**FS2**/
    while(xx!=1){
        printf("That is not a number...");
        scanf("%*[^\n]");
        printf("\n");
        printf("Enter the rate of change of the population (people/year:)");
        xx = scanf("%f",&roc);
    }
    /**FS2 ending**/

    float time;
    time = cp/roc;

    printf("The time until the population is doubled is %f years!",time);

    printf("\nPress any key to continue...");
    char a = getch();

    return 0;

}
