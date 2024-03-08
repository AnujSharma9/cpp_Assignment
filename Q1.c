# include<stdio.h>

struct date{

    int day;
    int month;
    int year;

};

void acceptDateOnConsole(struct date*dptr){
    printf("enter the value of the date , month & year");
    scanf("%d%d%d",&dptr->day,&dptr->month,&dptr->year);


}

void printDateOnConsole(struct date d){
    printf("Date:-%d/%d/%d\n",d.day,d.month,d.year);

}

void initDate(struct date* ptrDate){
    ptrDate->day= 10;
    ptrDate->month=03;
    ptrDate->year=2024;
}
int menu()
{
    int choice;
    printf( "0. EXIT\n" );
    printf( "1. Initialized Date\n" );
    printf("2. print date \n" );
    printf ("3. console print \n") ;
    printf("Enter your choice - ");
    scanf("%d",&choice);
    return choice;
}


int main(){
    struct date d1;
    int choice;

    while((choice=menu())!=0)
    {

        //  printf("0. to exit \n 1. to init date \n 2.to print date \n3.date from cansole\n");

        //  printf("enter your choice :- ");
        //  scanf("%d",&choice);

         switch(choice)
         {
         case 1:
            initDate(&d1);
             break;
         case 2:
             printDateOnConsole(d1);
             break;
         case 3:
             acceptDateOnConsole(&d1);
             break;
         default:
             printf(" invalid...choice....");
            break;
         }

    };
    

}