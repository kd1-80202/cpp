#include<stdio.h>

struct Date
{
    
    int day;
    int month;
    int year;
};    

    void initDate(struct Date *ptrDate)
    {
        ptrDate->day=1;
        ptrDate->month=12;
        ptrDate->year=2000;
    }
     
    void acceptDateFromConsole(struct Date *ptrDate)
    {
        printf("Enter the day,month,year \n");
        scanf("%d %d %d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
    }
    void printDateOnConsole(struct Date *ptrDate)
    {
        printf(" date is= %d /%d /%d\n",ptrDate->day,ptrDate->month,ptrDate->year);
    }
int main()
{
    struct Date d1;
    int choice;
    do
    {
    printf("enter choice: 0.default,1.initDate,2.printDateOnConsole\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    initDate(&d1);
    printDateOnConsole(&d1);
    break;
    case 2:
    acceptDateFromConsole(&d1);
    printDateOnConsole(&d1);
    break;
    }
    } while(choice!=0);
    return 0;
}


