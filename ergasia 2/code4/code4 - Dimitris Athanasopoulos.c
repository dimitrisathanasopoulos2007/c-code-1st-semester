#include <stdio.h>
#include <conio.h>
#include <math.h>

void F(int *a)
{
    int res=0;

    int i=1;
    for(i; i<=*a; i++){
        int b = 3*i;
        int c = pow(b,2);
        res = res + c;

        /*printf("\n%d",b);
        printf("\n%d",c);
        printf("\n%d",i);*/
    }
    printf("\nThe result is:%d",res);
}


int main()
{
    int num;

    do{printf("Enter a positive number less than 10:");
    scanf("%d",&num);}while(num<1 || num>=10);


    F(&num);

    printf("\nPress any key to continue...");
    char sm = getch();

    return 0;


}
