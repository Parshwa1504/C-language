#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){

    int Guess;
    int max;
    int min;
    srand(time(0));
    printf("Enter Max number : ");
    scanf("%d",&max);
    printf("Enter Min number : ");
    scanf("%d" , &min);
    
    int Random_Number = rand() % (max - min + 1) + min;
    printf("%d\n",Random_Number);

    for (int Attempt = 1 ; Attempt>0 ; Attempt++)
    {
        printf("Enter your Guessed number between the range of %d - %d : " , min,max);
        scanf("%d" , &Guess);

        if(Guess==Random_Number){
        printf("Congratulations You guessed the right Number  And you have taken %d Attempts !!\n " , Attempt);
        break;
    }
    else if (Guess<Random_Number)
    {
        printf("Please Guess Higher Number Please.\n");
        continue;
    }
    else if (Guess>Random_Number)
    {
        printf("Please Guess Lower Number Please.\n");
        continue;
    }

    }

    return 0 ;
}