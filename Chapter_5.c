// write a prgram for the sum function:

// #include<stdio.h>

//  int Sum(int,int);     // function prototype

//     int Sum(int a , int b){
//         printf("The sum of the both number is %d\n" , a+b);  // function defination
//         return a+b;
//     }

// int main(){
//     Sum(10 , 3);     // function call
//     return 0 ;
// }

// write a program with three funtion :

// #include<stdio.h>

// void GoodMorning();
// void GoodAfterNoon();
// void GoodNight();

// void GoodMorning(){
//     printf("Good Morning Man!\n");
// }

// void GoodAfterNoon(){
//     printf("good AfterNoon Man!\n");

// }

// void GoodNight(){
//     printf("Good Night Man!\n");
// }

// int main(){

//     GoodAfterNoon();
//     GoodNight();
//     GoodMorning();

    
//     return 0 ;
// }

// Calaculate the area of the square using library function.

// #include<stdio.h>
// #include <math.h>

// int main(){

//     int a =2 ;
//     printf("The area of the square is %f\n" , pow(a , 2))   ; // this pow is for the power as it indicates a square . also to access this function we have to use <math.io>.
//     return 0 ;
// }

// Recursion : 

// #include<stdio.h>

//     int factorial(int);

//     int factorial(int n){
//         if (n==0 || n==1)  // Base Condition
//         {
//             return 1;
//         }
        
//         return factorial (n-1) * n ;
//     }
    
//    int main(){
//          int n = 4;
//         printf("The factorial of the number %d is %d " , n , factorial(n));
//         return 0 ;
//    }

// [1] write a program to find the average of three numbers using functions.

// #include<stdio.h>

// float Average(int , int , int);

// float Average(int a , int b , int c){
//     printf("The average of the %d , %d and %d is %f" , a , b , c , (a+b+c)/3);
//     return (a+b+c)/3.0 ;
// }

// int main(){
    
//     int Number_1;
//     int Number_2;
//     int Number_3;
//     printf("Enter Number 1 : ");
//     scanf("%d" , &Number_1);
//     printf("Enter Number 2 : ");
//     scanf("%d" , &Number_2);
//     printf("Enter Number 3 : ");
//     scanf("%d" , &Number_3);
//     Average(Number_1 , Number_2 ,Number_3);
//     return 0 ;
// }

// [2] write a function to convert celcius to farenhit :

// #include<stdio.h>

// float Feranhit(float);

// float Feranhit(float a){
//     printf("The converted value of %f Celcius to Feranhit is %f" , a , ((a*9/5) + 32) );
//     return (a*(9/5) + 32);
// }

// int main(){

//     float Celcius;
//     printf("Enter temprature in Celcius : ");
//     scanf("%f" , &Celcius);
//     Feranhit(Celcius);
//     return 0 ;
// }

// [3] write a function to calculate force of attraction on a body of mass m exerted by earth (g=9.98)

// #include<stdio.h>

// float g = 9.98;
// float Force_Attraction(float);

// float Force_Attraction(float m){
//     printf("The force of Attraction on a body of mass %f exerted by earth is %f : " , m , m*g);
//     return m*g;
// }

// int main(){

//     float Mass ;
//     printf("Enter Mass of the body : ");
//     scanf("%f" , &Mass);
//     Force_Attraction(Mass);
//     return 0 ;
// }

// [4] Write a program using recursion to find nth element of the fibonachi series . 
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

// #include<stdio.h>

// int Fibonachi(int);

// int Fibonachi(int n){
//         if (n==1)              
//         {
           
//             return 0;

//         }
//         else if (n==2)
//         {   
            
//             return 1;
//         }

//         return (Fibonachi(n-2) + Fibonachi(n-1)) ;
//     }
// int main()
// {

//     int Element ;
//     printf("Enter your nth element : ");
//     scanf("%d" , &Element);
//     Fibonachi(Element);
//     printf("The %d th element of the fibonachi series is %d \n" , Element , Fibonachi(Element) );
    
//     return 0 ;
// }

//                                      " GOOD "

/* 
[5] printf("%d %d %d" , a , ++a , a++);   in this if a=1 then this line will print 3 3 1 . the evalution order is determined by compiler so it will start
evalution from right to left so fisrt a++ , ++a , a . also 1 2 2 can also correct answer as there is no evalution order is defined.
in right to left a++ > a is 1 it's printed and then it will increase by 1 so now a = 2 . now ++a > so it will first increase a by 1 and then print it so now 
a= 3 . then a > so now it will print value of a =3 so final output will be 3 3 1.
For left to right so a so print 1 , ++a > a will increase by 1 and then print so 2 and then a++ it will print a so 2 then it will increase a by 1. so final 
output will be 1 2 2 .
*/

// [6] write a program in recursive function to calculate the sum of n natural numbers.

// #include<stdio.h>

// int Sum(int);

// int Sum(int n){

//     if (n==1)
//     {
//         return 1;
//     }

//     return (Sum(n-1) + n) ;

// }

// int main(){

//     int Natural_Number;
//     printf("Enter Natural Number : ");
//     scanf("%d" , &Natural_Number);
//     printf("The sum of first %d Natural Number is %d " , Natural_Number , Sum(Natural_Number));
//     return 0 ;
// }

//                                                           " VERT GOOD "

// [7] write a program using functions to print the following pattern ( First n lines ).

// *
// * * 
// * * * 

// #include<stdio.h>

// void Star ( int , char);

// void Star (int n , char Character){                                          (2 , *)
          
//     for (int i = 1; i <= n ; i++)                                            '

//     {
//         for (int j = 1 ; j < i + 1 ; j++)
//         {
//             printf("%c " , Character);
//         }

//         printf("\n");
         
//     }

//     }

// int main(){

//     char character = '*';
//     int Number ;
//     printf("Enter the Number of lines of pattern you want : ");
//     scanf("%d" , &Number);
//     Star(Number,character);

//     return 0 ;
// }

    

