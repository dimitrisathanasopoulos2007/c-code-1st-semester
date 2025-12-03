#include <stdio.h>
#include <conio.h>
#define N 5
#define M 5
#define n 4
#define m 4

int main()
{
    int numbers[N][M];
    int lessnumbers[n][m];
    int i,t;
    int num;

    for(i=0;i<N;i++){
        for(t=0;t<M;t++){
            printf("Enter number (%d,%d):",i,t);
            scanf("%d",&numbers[i][t]);
        }
    }
    /**Here ends the first part**/
    do{
        printf("\nEnter a number between 1 and 5:");
        scanf("%d",&num);
    }while(num<1 || num>5);

    num = num-1;

    for(int i=0;i<N;i++){
        printf("\n");
        for(int t=0;t<M;t++){
            printf("\t%d",numbers[i][t]);
        }
    }
    printf("\nNew Array\n");


    for(i=0;i<N;i++){
        if(i == num){continue;}

        for(t=0;t<M;t++){
            if(t == num){continue;}
            lessnumbers[i][t] = numbers[i][t];
        }
    }


    /**printing the array**/

    for(i=0;i<N;i++){
        if(i == num){continue;}
        printf("\n");
        for(t=0;t<M;t++){
            if(t == num){continue;}
            printf("\t%d",lessnumbers[i][t]);
        }
    }

    printf("\nPress any key to continue...");
    char a = getch();


    return 0;
}
