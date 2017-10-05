//Kyle Rohlfing
//KARTHT
//tuition.c



#include <stdio.h>

int main(void){

    int id = 0;
    int crdtHours;
    float costPrHour = 282.00;
    int outOfState = 0; //Check if the student is out of state
    float outOfStateTuition = 557.30;
    float baseTuition = 0; //total
    int engineeringHours;
    float engineeringTuition = 90.00;
    float financialAid;
    float finalTuition;

    printf("Enter a Student ID number, enter 0 to quit (8 digits beginning with a '1'): \n");
    scanf("%d", &id);
    //    while(id != 0)
    //    {
    //        printf("Enter a Student ID number (8 digits beginning with a '1') enter 0 to quit: \n");
    //        scanf("%d", &id);
    while(id < 10000000 || id >= 20000000)
    {   
        printf("Your Student ID must start with a '1'and be 8 digits long. Please re-enter a valid ID number: \n");
        scanf("%d", &id);
    }

    printf("How many credit hours is the student enrolled in? \n");
    scanf("%d" , &crdtHours);

    baseTuition += (crdtHours * costPrHour);

    printf("Is the student out of state? ('1' if yes, any other value if no) \n");
    scanf("%d", &outOfState);

    if(outOfState == 1)
    {
        baseTuition += (crdtHours * outOfStateTuition);
    }

    printf("How many credit hours are in the College of Engineering?: \n");
    scanf("%d", &engineeringHours);

    baseTuition += (engineeringHours * engineeringTuition);

    printf("Total financial aid this student is recieving (dollars): \n");
    scanf("%f", &financialAid);

    while(financialAid > baseTuition)
    {
        printf("The financial aid can not exceed the base tuition! Please re-enter the financial aid: \n");
        scanf("%f", &financialAid);
    }

    finalTuition = (baseTuition - financialAid);

    printf("****TUITION STATEMENT****\n");
    printf("Student ID: %d\n", id);
    printf("Credit Hours: %d\n", crdtHours);
    printf("****\n Base Tuition: %.2f\n", baseTuition);
    printf("Financial Aid: %.2f\n", financialAid);
    printf("****\n Tuition Grand Total: $%.2f\n", finalTuition);

    //}




    return 0;
}







