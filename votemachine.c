// This Is A Machine For Voting
// Creatd By Nakul Kumar

#include <stdio.h>

int main()
{
    int age;
    printf("hello voter\n");
    printf("Enter Your Age : \n");
    scanf("%d",&age);

    if (age>10 && age<25)
    {
        printf("You are teenager\n");
        printf("You can't vote");
    }
    
    else if (age>25 && age<60)
    {
        printf("You are an adult\n");
        printf("You can vote \n Thanks for voting :)");
    }
    else if(age>60 && age<100)
    {
        printf("You are old person\n");
        printf("Thanks for voting :)");
    }
    else{
        ("Error Please Enter Your Age Correctly :(");
    }
    return 0;
}