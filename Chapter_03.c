// If - else statement code :
/*
#include<stdio.h>

int main(){

    int Age ;
    printf("Enter your Age : ");
    scanf("%d" , &Age);
    if (Age>10)
    {
        printf("Your Age is grater than 10.");
    }
    else{
        printf("Your Age is less than 10.");
    }
    return 0 ;
}

Write a program to find grade of the student based on the Marks given by User.

// Used Logical operators as marks are in the ranges and for A marks should be greater than or equal to 90 or less than 100.
and in this case used and operators as both cases must be true . ex in the range of 80 -90 if we use or and enter marks 91
one case where marks>=80 will be true but marks<90 will be false so if i use or i might get output B not A.but if i use And
i will definately get output A as for And both condition should be true to execute. 

#include<stdio.h>

int main(){

    int Marks;
    printf("Enter your Marks : ");
    scanf("%d" , &Marks);
    if ( Marks<=100 && Marks>=90)
    {
        printf("You got A Grade");
    }
    else if (Marks<90 && Marks>=80)
    {
        printf("You got B Grade");
    }
    else if (Marks<80 && Marks>=70)
    {
        printf("You got C Grade");
    }
    else if (Marks<70 && Marks>=60)
    {
        printf("You got D Grade");
    }
    else if (Marks<60 && Marks>=50)
    {
        printf("You got E Grade");
    }
    else if (Marks<50 && Marks>=0)
    {
       printf("You got F Grade");
    }
    else{
        printf("There is something wrong with your given marks please make sure it's in the range of 0-100.");
    }
     
}
*/

//[1] What will be the output.
// #include<stdio.h>

// int main(){

//     int a =10;
//     if(a=11){
//         printf("I am 11");
//     }
//     else{
//         printf("I am not 11");
//     }
//     return 0 ;
// }

// if here in if statement a==11 then the output will be I am not 11 but as here in if condition a=11 so that's why output will be I am 11.
// as in if condition a=11 is non zero value and that's why it will give output as I am 11.

//[2] Student Pass or fail.

// #include<stdio.h>

// int main(){
//     float Total;
//     float Maths;
//     float Science;
//     float History; 
//     float C = 100; 
//     printf("Enter the individual total marks of the subjects: ");
//     scanf("%f" , &Total);
//     printf("Enter your Maths Marks : ");
//     scanf("%f" , &Maths);
//     printf("Enter your Science Marks : ");
//     scanf("%f" , &Science);
//     printf("Enter your History Marks : ");
//     scanf("%f" , &History);
//     //printf("%f\n" , (Maths/Total)*100);
//     //printf("%f\n" , ((Maths+Science+History)/(3*Total))*100);
//     float TotalPercentage = ((Maths+Science+History)/(3*Total))*100;
//     if (TotalPercentage>=40 && (Maths/Total)*100>=33 && (Science/Total)*100>=33 && (History/Total)*100>=33 )
//     {
//         printf("You have passed the exams.");
//     }
//     else{
//         printf("You have not passed the exams.");
//     }
    
//     return 0 ;
// }

// [3] Income Tax

// in tax for first 2,50,000 we dont have to pay tax then for 2.5 to 5.0 we have to pay 5%tax and so on. 

// #include<stdio.h>

// int main(){

//     float Income ;
//     printf("Enter Your income in Lakhs : ");
//     scanf("%f" , &Income);
//     if (Income>250000 && Income<=500000)
//     {
//         printf("The tax slab is 5 percent.You have to pay %.2f tax to the government" , (((Income-250000))*5)/100);
//     }
//     else if (Income>500000 && Income<=1000000)
//     {
//         printf("The tax slab is 20 percent.You have to pay %.2f tax to the government" , 0.05*(500000-250000)+ 0.2*(Income-500000));
//     }
//     else if (Income>1000000)
//     {
//         printf("The tax slab is 30 percent.You have to pay %.2f tax to the government" , 0.05*(500000-250000)+ 0.2*(1000000-500000)+ 0.3*(Income-1000000));
//     }
//     else if (Income<=250000)
//     {
//         printf("You don't have to pay tax to governmnet.");
//     }
    
//     return 0 ;
// }

// [4] Leap year or not. for leap year divisible by 4 and not divisible by 100 or divisible by 400

// #include<stdio.h>

// int main(){

//     int Year ;
//     printf("Entre the Year : ");
//     scanf("%d" , &Year);
//     if (Year%4==0 && Year%100!=100 || Year%400==0)
//     {
//         printf("The Year %d is a Leap Year.", Year);
//     }
//     else{
//         printf("The Year %d is not a Leap Year." , Year);
//     }
    
//     return 0 ;
// }

// [5] program to determine entered character is lowercase or not (Note : We have to use ASCII value for it ) 

// #include<stdio.h>

// int main(){

//     char Character ;
//     printf("Enter any character : ");
//     scanf("%c" , &Character);
//     printf("The value of the character is : %d\n" , Character);
//     if(Character>=97 && Character<=122){
//         printf("The character is lower case character.");
//     }
//     else 
//     {
//         printf("The character is not lower case character.");
//     }
//     return 0 ;
// }

// [6] Find the greatest of four number entered by the user.

// #include<stdio.h>

// int main(){

//     float Number1;
//     float Number2;
//     float Number3;
//     float Number4;
//     printf("Enter Number 1 : ");
//     scanf("%f" , &Number1);
//     printf("Enter Number 2 : ");
//     scanf("%f" , &Number2);
//     printf("Enter Number 3 : ");
//     scanf("%f" , &Number3);
//     printf("Enter Number 4 : ");
//     scanf("%f" , &Number4);
//     if (Number1>Number2 && Number1>Number3 && Number1>Number4)
//     {
//         printf("%f is the greatest number out of 4." , Number1);
//     }
//     else if (Number2>Number1 && Number2>Number3 && Number2>Number4)
//     {
//          printf("%f is the greatest number out of 4." , Number2);
//     }
//     else if (Number3>Number1 && Number3>Number2 && Number3>Number4)
//     {
//         printf("%f is the greatest number out of 4." , Number3);
//     }
//     else{
//         printf("%f is the greatest number out of 4." , Number4);
//     }
    
//     return 0 ;
// }

