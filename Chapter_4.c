// print natural numbers from 10 to 20 when initial loop counter is initialized to 0.

// #include<stdio.h>

// int main(){

//     int i = 0 ;
//     while (i<=10)
//     {
//         printf("%d\n" , i+10);
//         i++;
//     }
    
//     return 0 ;
// }

 // Do while loop

//  #include<stdio.h>
 
//  int main(){
    
//     int n;
//     int i = 1;
//     printf("Enter any Number : ");
//     scanf("%d",&n);
//     do
//     {
//         printf("%d\n" , i);
//         i++;
//     } while (i<=n);
    
//     return 0 ;
//  }

// For loop :

// #include<stdio.h>

// int main(){

//     int n;
//     int i;
//     printf("Enter any Number : ");
//     scanf("%d" , &n);
//     for ( i = 0; i <= n; i++)
//     {
//         printf("%d\n",i);
//     }
    

//     return 0 ;
// }

// Decrementing for loop

// #include<stdio.h>

// int main(){
//     int i;
//     printf("Enter any Number : ");
//     scanf("%d" , &i);
//     for (i ; i; i--)
//     {
//         printf("%d\n",i);
//     }
    
//     return 0 ;
// }

//  Here output will be 6 to 1 if we enter the number as 6 .
// as in condition we put i that means condition will true untill i's value is non zero that's why it will print till 1 as when i's value becomes equal to zero the loop will terminate.

// Print n natural numbers in reverse order.

// #include<stdio.h>

// int main(){

//     int i ;
//     int n;
//     printf("Enter any number : ");
//     scanf("%d" , &n);
//     for ( i = n; i ; i--)
//     {
//         printf("%d\n" , i);
//     }
    
//     return 0 ;
// }

// Break Statemnet :

// #include<stdio.h>

// int main(){

//     for (int i = 0; i < 10; i++)
//     {
//         if (i==5)
//         {
//             break;  // it will exist the whole loop after i==5.so our output will be 0 to 4.
//         }
        
//         printf("%d\n" , i);
//     }
    
//     return 0 ;
// }

// Continue Statement :

// #include<stdio.h>

// int main(){

//     for (int i = 0; i < 10; i++)
//     {
//         if (i==5)
//         {
//             continue;  // it will skip the iteration i==5 and the output will skip 5 and print every other numbers.
//         }
        
//         printf("%d\n" , i);
//     }
    
//     return 0 ;
// }

// [1] write a program to write a multiplication table of given number n.

// #include<stdio.h>

// int main(){

//     int n;
//     printf(" Enter any number : ");
//     scanf("%d" , &n);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n" , i*n);
//     }
    
//     return 0 ;
// }

// [2] Write a program to write a multiplication table of n in reverse order.

// #include<stdio.h>

// int main(){

//     int n;
//     printf(" Enter any number : ");
//     scanf("%d" , &n);
//     for (int i = 10; i ; i--)
//     {
//         printf("%d\n" , i*n);
//     }
    
//     return 0 ;
// }

// [3] A do while loop is executed at least once.

// [4] it's true what can be done by one type of loop can also be done by other two types of loops.

// [5] sum first 10 natural numbers using while and For loop : 

// [i] For loop :
// #include<stdio.h>

// int main(){
//     int S = 0;
//     int n;
//     printf("Enter any number : ");
//     scanf("%d" , &n);
//     for (int i = n; i>0 ; i--)
//     {
//         S = S+ n + i ; 
//     }

//     printf( "The sum of n natural number is %d" , S - (n*n));
    
//     return 0 ;
// }

// [ii] While loop :

// #include<stdio.h>

// int main(){

//     int n ;
//     int S=0;
//     printf("Enter any Number : ");
//     scanf("%d" , &n);
//     int i = n;
//     while (i>0)
//     {
//         S = S + n + i;
//         i--;
//     }
    
//     printf("The sum of the first n intergers is %d" , S-(n*n));

//     return 0 ;
// }

// [iii] do while loop :

// #include<stdio.h>

// int main(){

//     int n ;
//     printf("Enter any Number : ");
//     scanf("%d" , &n);
//     int i = n;
//     int S = 0;
//     do
//     {
//         S = S + n + i;
//         i--;
//     } while (i>0);

//     printf("The sum of n natural number is %d" , S - (n*n));
    
//     return 0 ;
// }

// [7] write a program to calculate the sum of numbers ocuuring in multiplication table of 8.

// #include<stdio.h>

// int main(){

//     int S = 0;
//     int n ;
//     printf("Enter any number : ");
//     scanf("%d" , &n);
//     for (int i = 1; i <= 10; i++)
//     {
//         S = S + n*i ;
//     }

//     printf("The sum of numbers in multiplication table of n is %d" , S);
    
//     return 0 ;
// }

// [8] write a program to print a factorial of a given number using for loop and while loop.

// [i] By for loop :
// #include<stdio.h>

// int main(){

//     int F = 1;
//     int n ;
//     printf("Enter any number : ");
//     scanf("%d" , &n);
    
//     for (int i = 1; i<=n; i++)
//     {
//         if(n==0){
//             F=1;
//             break;
//         }
//         F = (F) * (i);
//     }
    
//     printf("The factorial value of the given number is %d" , F);
//     return 0 ;
// }

// [ii] By While Loop:

// #include<stdio.h>

// int main(){

//     int F =1 ;
//     int n ;
//     int i = 1;
//     printf("Enter any Number : ");
//     scanf("%d" , &n);
//     while (i<=n)
//     {
//         if(n==0){
//             F=1;
//             break;
//         }
//         F = F * (i);
//         i++;
//     }
    
//     printf("The factorial value of the given number is %d" , F);
//     return 0 ;
// }

// [9] Check the number is prime or not using loops.

// #include<stdio.h>
// #include <math.h>

// int main(){

//     int P ;
//     int n ;
//     printf("Enter any Number : ");
//     scanf("%d" , &n);

//     if (n<2)
//     {
//         printf("The entered number is not Prime");
//         return 0;
        
//     }
//     else if (n==2)
//     {
//         printf("The entered number is Prime.");
//         return 0;
//     }
//     else if (n>2 && n%2==0)
//     {
//         printf("The entered number is not Prime");
//         return 0;
//     }
   
//     for (int i = 2 ; i <= sqrt(n); i++)
//     {
        
//         if (n%i == 0)
//         {
//              P = 0; // the number will not be prime as modulus is zero so in if statement condition it will direct go to else statement.
//              break;
//         }

//     }
//     if(P){
//         printf("The entered number is a prime number");
//     }
//     else 
//     {
//         printf("The entered number is not a prime number");
//     }
    
//     return 0 ;
// }

// [ii] Using while loop :

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int n ;
//     int i = 2;
//     int Prime = 1 ;
//     printf("Enter any number : ");
//     scanf("%d" , &n);
//     if (n<2)
//     {
//         printf("Entered number is not prime");
//         return 0;
//     }
//     else if (n==2)
//     {
//         printf("Entered number is prime");
//         return 0;
//     }
//     else if (n>2 && n%2==0)
//     {
//         printf("Entered number is not prime");
//         return 0;
//     }

//         while (i<=sqrt(n))
//         {
//          if (n%i==0)
//          {
//             Prime = 0;
//             break;
//          }
//          i++;
          
//         }
        
//     if (Prime)
//     {
//         printf("The entered number is  prime");
//     }
//     else{
//         printf("The entered number is not prime");
//     }
    
    
//     return 0 ;
// }
