#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

int mod;
int cnt;
int i;
bool yesprime;


void isaprime(int *a)
{

    for(i=1;i<=*a;i++){
        mod = *a % i;
        if(mod == 0){
            cnt++;
        }
    }
    if(cnt<=2){yesprime = true;}
    else{yesprime = false;}
}



int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    isaprime(&num);

    if(!yesprime){printf("The number %d is perfectly divided by %d numbers!",num,cnt);}


    printf("\nPress any key to continue...");
    char c = getch();

    return 0;
}
