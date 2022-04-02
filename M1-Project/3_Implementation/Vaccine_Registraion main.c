#include<stdio.h>
#include<stdlib.h>

int main()

{
    printf("\n");
    printf("\n");
    printf("\t\t\t welcome to vaccine registration ");
   

    printf("\n");
    printf("\n");
    printf("\n");
    printf("1) vaccine registration \n");
    printf("2) search your profile \n");
   
   
    int choice;

    printf("\n enter your choice");

    scanf("%d",&choice);

    printf("\n");
   
    switch(choice)
    
{
        case 1:

        {
        printf("\t \t \t vaccine registration");
        printf("\n identity verification");
        printf("\n 1) citizen card");
        printf("\n 2) student card");
        printf("\n 3) others");
       

        int choose;
        printf("\n enter your choice");
        scanf("%d",&choose);
        printf("\n");
   
        switch(choose)

      {
        case 1:

         {
             printf("\t \t \t 1) citizen card");
             break;
          }

   
        case 2:

       {
           printf("\t \t \t 2) search your profile");
           break;
         }

        case 3:

       {
           printf("\t \t \t 3) others");
           break;
        }

        default:

       {
           printf("\n enter correct choice");
           break;
        }

    }

    break;
}

 case 2:

       {
           printf("\t \t \t search your profile");

           break;
  }

 default:

  {
     printf("\n enter correct choice");

     break;

    }

   
   }
}
