#include <stdio.h>
#include <conio.h>

int main()
{
    int fd,d,m;


    printf("Type if February has 28 or 29 days:");
    scanf("%d",&fd);
    while(fd!=28 && fd!=29){
        printf("Enter 28 or 29...\n");
        scanf("%d",&fd);
        printf("\n");
    }

    printf("Type the month:");
    scanf("%d",&m);
    while(m<=0 || m>12){
        printf("Invalid month number...\n");
        printf("Type the month:");
        scanf("%d",&m);
    }
    printf("\n");
    printf("Type the day:");
    scanf("%d",&d);

    int mod = m % 2;
    int nd;

    if(m == 2){
        if(fd == 28){
            while(d<=0 || d>28){
                printf("Invalid day of month...\n");
                printf("Type the day:");
                scanf("%d",&d);
            }
        }
        else if(fd==29){
            while(d<=0 || d>29){
                printf("Invalid day of month...\n");
                printf("Type the day:");
                scanf("%d",&d);
            }
        }
        m++;
        nd = 50 -(fd - d);
        if(nd>31){
            m++;
            nd = nd - 31;
        }


    }
    /**1-7 months with 31 days**/
    else if(mod==1 && m<8 && m>0){
        while(d<=0 || d>31){
            printf("Invalid day of month...\n");
            printf("Type the day:");
            scanf("%d",&d);
        }
        m++;
        nd = 50 - (31 - d);
        if(m==8 && nd>31){
            nd = nd - 31;
            m++;
        }
        else if(nd>fd && m==2){
            nd = nd - fd;
            m++;
        }
        else if(nd>30){
            m++;
            nd = nd - 30;
        }


    }
    /**1-7 months with 30 days**/
    else if(mod==0 && m<=7 && m>=1){
        while(d<=0 || d>30){
            printf("Invalid day of month...\n");
            printf("Type the day:");
            scanf("%d",&d);
        }
        m++;
        nd = 50 - (30-d);
        if(nd>31){
            nd = nd - 31;
            m++;
        }
    }
    /**8-12 months with 31 days**/
    else if(mod==0 && m>=8 && m<=12){
        while(d<=0 || d>31){
            printf("Invalid day of month...\n");
            printf("Type the day:");
            scanf("%d",&d);
        }
        if(m==12){
            m=0;
        }
        m++;
        nd = 50 - (31 - d);
        if(m==1 && nd>31){
            nd = nd -31;
            m++;
        }
        else if(nd>30){
            m++;
            nd = nd - 30;
        }
    }
    /**8-12 months with 30 days**/
    else{
        while(d<=0 || d>30){
            printf("Invalid day of month...\n");
            printf("Type the day:");
            scanf("%d",&d);
        }
        m++;
        nd = 50 - (30-d);
        if(nd>31){
            if(m==12){
                m=0;
            }
            nd = nd - 31;
            m++;
        }
    }


    printf("The date after 50 days will be:%d/%d",nd,m);


    printf("\n Press any key to continue...");
    char a = getch();



    return 0;

}
