/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
Calculate percentage and grade according to following:
    Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage < 40% : Grade F
*/
#include<stdio.h>
main(){
    float phy,chem,bio,math,comp;
    float perc;
    printf("Enter your marks in Physics: ");
    scanf("%f",&phy);
    printf("Enter your marks in Chemistry: ");
    scanf("%f",&chem);
    printf("Enter your marks in Biology: ");
    scanf("%f",&bio);
    printf("Enter your marks in Mathematics: ");
    scanf("%f",&math);
    printf("Enter your marks in Computer: ");
    scanf("%f",&comp);
    perc = (phy+chem+bio+math+comp)/5.0;
    printf("------------------------------\n");
    printf("You got %.2f Percent\n",perc);
    if(perc>=90)
        printf("Overall grade is A\n");
    else if(perc>=80 && perc<90)
        printf("Overall grade is B\n");
    else if(perc>=70 && perc<80)
        printf("Overall grade is C\n");
    else if(perc>=60 && perc<70)
        printf("Overall grade is D\n");
    else if(perc>=40 && perc<60)
        printf("Overall grade is E\n");
    else
        printf("Overall grade is F\n");
}
