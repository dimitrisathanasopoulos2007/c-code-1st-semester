#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    int i;
    int thenum;
    int prevnum;
    int cnt=0;
    int finalcnt=0;
    int numcheck=0;
    int tmpnum;
    char a;

    do{
        printf("How many numbers do you want to enter?");
        scanf("%d",&num);
    }while(num<0);
    if(num==0){
        printf("\nPress any key to continue...");
        a = getch();
        return 0;
    }

    for(i=1;i<=num;i++){
        printf("Enter number %d:",i);
        scanf("%d",&tmpnum);
        if(tmpnum == prevnum){
            cnt++;
            numcheck++;
            if(cnt>finalcnt){
                thenum = tmpnum;
                finalcnt = cnt;
            }

        }
        else{
            cnt=0;

        }

        prevnum = tmpnum;
        /*printf("\n%d:%d:%d",cnt,finalcnt,onetime);*/

    }
    if(numcheck == 0){
        printf("There was no number entered more that 1 times...");
        printf("\nPress any key to continue...");
        a = getch();
        return 0;
    }

    printf("The number that was entered most times in a row is:%d",thenum);

    printf("\nPress any key to continue...");
    a = getch();

    return 0;
}
