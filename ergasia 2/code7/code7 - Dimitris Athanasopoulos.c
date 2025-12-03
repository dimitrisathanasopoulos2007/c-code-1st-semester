#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 100




int main()
{
    /**Erotima A**/
    int numbers[N];
    int x;
    int num;
    int i=1;
    int arcnt=1;
    numbers[0] = 1;

    do{
        printf("Enter the number (1 or greater):");
        scanf("%d",&num);
    }while(num<1);

    for(x=1;x<num;x++){
        i++;
        numbers[arcnt] = i;
        arcnt++;

    }


    printf("\nThe first %d integer number/rs are:",num);
    for(i=0;i<num;i++){
        printf("%d\t",numbers[i]);
    }

    /**Erotima B**/
    float numadd = 0;
    float ii=0;

    for(i=1;i<=num;i++){
        ii++;
        numadd = numadd + ii;
    }
    printf("\nTheir total value is:%f",numadd);


    /**Erotima C**/
    float avg = numadd/ii;
    printf("\nTheir average value is:%f",avg);

    /**Erotima D**/
    int sqrdnum=0;
    for(i=0;i<num;i++){
        int a = pow(numbers[i],2);
        sqrdnum = sqrdnum + a;
    }

    printf("\nThe sum of the numbers squared is:%d",sqrdnum);


    printf("\nPress any key to continue...");
    char b = getch();




    return 0;

}
