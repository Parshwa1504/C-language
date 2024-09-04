// #include<stdio.h>

// int main(){

//     int i = 72 ;
//     int*j = &i; // here j is pointer pointing to p.
    

//     printf("The address of i is %p\n" , &i);
//     printf("The address of i using pointer j is %p\n ", j);
//     printf("The value of i using it's address is %d\n " , *(&i));
//     printf("The value of j in hexadecimals  using address of j is %p\n",*(&j) );  // this will give us address of i as j is pointing to i so j's stored value will be address of i .
//     printf("The value in decimals of j using address of j is %d\n",*(&j) );


// // here %p is for address of a varible in hexadecimal value to obtain address of variable in integer i.e decimal value we have to use %u.
// // we can find the value of variable using it's address also by using star operator.
// // by using and operator(&) we can find the address of the variable using it's value and by using star operator(*) we can find the value of variable using it's address      

// // output  : 
// // The address of i is 0061FF1C
// // The address of i using pointer j is 0061FF1C
// //  The value of i using it's address is 72
// //  The value of j in hexadecimals  using address of j is 0061FF1C
// // The value in decimals of j using address of j is 6422300

//     return 0 ;
// }

// Other type of pointer :

// #include<stdio.h>

// int main(){

//     char X = 'A';
//     char* Y = &X;
//     float A = 2.33 ;
//     float* B= &A;

//     printf("The address of Character X is %p \n",Y);
//     printf("The address of Character X is %u \n",Y);
//     printf("The address of float A is %p\n",B);
//     printf("The address of Character X is %u \n",Y);
//     printf("The value of A is %f\n", *(B));
//     printf("The value of X is %c\n", *(Y));
//     return 0 ;

//  // output:
// // The address of Character X is 0061FF17 
// // The address of Character X is 6422295 
// // The address of float A is 0061FF10
// // The address of Character X is 6422295 
// // The value of A is 2.330000
// // The value of X is A
// }

// Pointer to a Pointer :

// #include<stdio.h>

// int main(){

//     int i =6;
//     int*j = &i;
//     int** k = &j;

//     // here *(&k) == value of k = address of j(&j) -> *(&j) = value of j = address of i (&i) -> *(&i) = value of i. => ***(&k) = value of  i. 

    

//     printf("The value of i is %d\n" ,i);
//     printf("The value of i is %d\n",*j);
//     printf("The value of i is %d\n",***(&k));

//     // output   

// //  The value of i is 6
// // The value of i is 6
// // The value of i is 6


//     return 0 ;
// }

// Types of function call  :

// [1] Call by value:

// #include<stdio.h>

// int Sum(int , int);

// int Sum(int A,int B){
//     A = 10;              // in call by value if we change the value of A or B in the function then it will not change ie the out can be change 
//     return A+B;          //  but value of x and y can not be change as copy of x and y is going in to the function so by giving command to the function 
// }                        // we can change the out put but never change the value of x and y by the use of call by value and that's why we use call by reference 
//                          // in which we use pointer's consept to change the value in the function.
// int main(){

//     int x = 5;
//     int y = 6;
//     printf("Sum of %d and %d is %d" , x , y , Sum(x,y));
//     return 0 ;
// }

// output : Sum of 5 and 6 is 16 . as you can see output is changed but the value of A is still 5 only.

// [2] Call by Reference : 
 
//  #include<stdio.h>

// int Sum(int* , int* );

// int Sum(int* A , int* B){   // By using the call by reference function we can chage the value of any variable which in main function 
//     *A = 10;                // in any other function by mentioning it's address or we can say giving the address of the variable to the user defined
//     return *A + *B ;         // function so that variable's copy will not go but the address of variable will go and we can change the value of variable  
//                             // in the user defined function.
//      }


// int main()
// {  
//     int x = 5;
//     int y = 6;
//     printf("Sum of %d and %d is %d" , x , y , Sum(&x,&y));
//     return 0 ;
// }

// [3] Swapping using call by reference :

// #include<stdio.h>

// int Swap(int*,int*);

// int Swap(int* X , int* Y){    // we introduced third variable by using third variable we assume three plates x has 5 , y has 6 and temp is empty
//     int Temp ;                //  then x gives it's value to temp so now x empty , y 6 and temp 5
//     Temp = *X;                // then y gives it's value to x so now x 6 , y empty and temp 5
//     *X = *Y ;                 // now temp gives it's value to y so now x 6 , y 5 and temp empty
//     *Y = Temp;                // so that's how we swap the value of x and y using call by reference function.
//     return 0;
// }

// int main(){

//     int A = 5;
//     int B = 6;
//     printf("Value of A and B is %d and %d \n " , A , B);
//     Swap(&A,&B);
//     printf("After Swapping The value of A nd B is  %d and %d  ",A , B);
//     return 0 ;
// }




