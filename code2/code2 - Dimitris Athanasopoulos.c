#include <stdio.h>
#include <conio.h>
#define N 3
#define M 3

void printarray(int p[N][M]){

    int i;
    int j;
    for(i=0;i<N;i++){
        printf("\n");
        for(j=0;j<M;j++){
            printf("\t%d",p[i][j]);
        }
    }

}


int main(){
    int pinaks[N][M];
    int pinakcopy[N][M];
    int i,g;

    /*Bazoume times sto array*/
    for(i=0;i<N;i++){
        for (g = 0; g < M; g++)
        {
            printf("Enter number (%d,%d):",i,g);
            scanf("%d",&pinaks[i][g]);
        }

    }

    /*Copying the main array*/
    for(i=0;i<N;i++){
        for(g=0;g<M;g++){
            pinakcopy[i][g] = pinaks[i][g];
        }
    }


    /*Question A*/
    printf("Ta diagonia stoixeia:\n");
    for ( i = 0; i < N; i++)
    {
        if(i!=0){printf("\n");}

        for (g = 0; g < M; g++)
        {
            if(i!=g){
                pinakcopy[i][g] = 0;
            }

            printf("\t%d",pinakcopy[i][g]);
        }

    }
    /*Array reseting*/
    for(i=0;i<N;i++){
        for(g=0;g<M;g++){
            pinakcopy[i][g] = pinaks[i][g];
        }
    }
    

    /*Question B*/
    printf("\n");
    printf("To ano trigoniko:");
    printf("\n");
    
    for ( i = 0; i < N; i++)
    {
        if(i!=0){printf("\n");}

        for (g = 0; g < M; g++)
        {
            if(i==1 && g==0){
                pinakcopy[i][g] = 0;
            }
            else if (i == 2 && g==0){
                pinakcopy[i][g] = 0;
            }
            else if(i==2 && g==1){
                pinakcopy[i][g] = 0;
            }

            printf("\t%d",pinakcopy[i][g]);
        }

    }

    
    /*Array reseting*/
    for(i=0;i<N;i++){
        for(g=0;g<M;g++){
            pinakcopy[i][g] = pinaks[i][g];
        }
    }
    

    /*Question C*/
    printf("\n");
    printf("To kato trigoniko:");
    printf("\n");

    for ( i = 0; i < N; i++)
    {
        if(i!=0){printf("\n");}

        for (g = 0; g < M; g++)
        {
            if(i==0 && g==1){
                pinakcopy[i][g] = 0;
            }
            else if (i == 0 && g==2){
                pinakcopy[i][g] = 0;
            }
            else if(i==1 && g==2){
                pinakcopy[i][g] = 0;
            }

            printf("\t%d",pinakcopy[i][g]);
        }

    }

    /*Question D*/
    printf("\nTo anastrofo:");

    for(i=0;i<N;i++){
        for(g=0;g<M;g++){
            if(g == i){
                pinakcopy[i][g] = pinaks[i][g];
            }
            pinakcopy[g][i] = pinaks[i][g];
            
        }
    }

    printarray(pinakcopy);

    printf("\nPress any key to continue...");
    char a = getch();

    return 0;

}
