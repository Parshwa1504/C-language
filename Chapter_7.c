// [i] Arrays :

// #include<stdio.h>

// int main(){

//     int Marks[90];
//     Marks[0] = 50;
//     Marks[1]=45;
//     printf("The value of marks[0] and marks[1] is %d %d",Marks[0] , Marks[1]);
//     return 0 ;
// }

// [ii] Arrays for user input : 

// #include<stdio.h>

// int main(){

//     int Marks[5];
//     printf("Enter Marks of student 1 : ");
//      scanf("%d" , &Marks[0]);
//       printf("Enter Marks of student 2 : ");
//      scanf("%d" , &Marks[1]);
//       printf("Enter Marks of student 3 : ");
//      scanf("%d" , &Marks[2]);
//       printf("Enter Marks of student 4 : ");
//      scanf("%d" , &Marks[3]);
//       printf("Enter Marks of student 5 : ");
//      scanf("%d" , &Marks[4]);

//      printf("The Marks of student 1 , student 2 , student 3 , student 4 and student 5 is : %d , %d , %d , %d , %d  ",  Marks[0] , Marks[1] ,Marks[2], Marks[3] ,Marks[4]);
//     return 0 ;
// }

// [iii] We dont have to write all 5 we can do it by for loop : EASY METHOD FOR USER INPUT IN ARRAYS.

// #include<stdio.h>

// int main(){

//     int Marks[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter Marks of student %d : " , i+1 );
//         scanf("%d" , &Marks[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("The Marks of the student %d is :  %d  " , i+1 , Marks[i]);
//     }
    
    
//     return 0 ;
// }

// [iv] Other ways to initialize array : (This is usually for small arrays : )

// #include<stdio.h>

// int main(){

//     int Marks[3] = {40,50,60}; // or we can write int Marks[] = {40,50,60};  both will work.
//     for (int i = 0; i < 3; i++)
//     {
//         printf("The Marks of the student %d is :  %d  " , i+1 , Marks[i]);
//     }
//     return 0 ;
// }

// [v] Pointer Arithmatic :

// Pointer Arithmatic using integer pointer :
// #include<stdio.h>

// int main(){

//     int a = 5;
//     int * ptr = &a;
//     printf("The address of the value a is %u\n" ,&a);
//     printf("The address of the value a is %u\n" ,ptr);
//     ptr++;
//     printf("The address of the value a after doing ptr++ is %u\n" ,ptr);
//     return 0 ;
// }

// output :  As integer takes 4 bytes in the memory to store and we have taken integer pointer after doing ptr++ it will jump 4 bytes  
// he address of the value a is 6422296
// The address of the value a is 6422296
// The address of the value a after doing ptr++ is 6422300

// Pointer Arithmatic using Char Pointer :

//  #include<stdio.h>

// int main(){

//     char a = 'A';
//     char * ptr = &a;
//     printf("The address of the value a is %u\n" ,&a);
//     printf("The address of the value a is %u\n" ,ptr);
//     ptr++;
//     printf("The address of the value a after doing ptr++ is %u\n" ,ptr);
//     return 0 ;
// }

// output :  As character takes 1 bytes in the memory to store and we have taken char pointer after doing ptr++ it will jump 1 bytes.
// The address of the value a is 6422299
// The address of the value a is 6422299
// The address of the value a after doing ptr++ is 6422300

// [vi] Arrays in memory : 

// #include<stdio.h>

// int main(){

//     int Marks[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter Marks of student %d : " , i+1 );
//         scanf("%d" , &Marks[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("The Marks of the student %d is :  %u \n " , i+1 , &Marks[i]);
//     }
    
    
//     return 0 ;
// }

// output :  so in array we are having contigious memory blocks that's the reason all marks 1 to 5 's address have difference of 4 . as every integer
//            input take 4 bytes of space in the memory .

// Enter Marks of student 1 : 40
// Enter Marks of student 2 : 50
// Enter Marks of student 3 : 60
// Enter Marks of student 4 : 70
// Enter Marks of student 5 : 80
// The Marks of the student 1 is :  6422276 
//  The Marks of the student 2 is :  6422280
//  The Marks of the student 3 is :  6422284
//  The Marks of the student 4 is :  6422288
//  The Marks of the student 5 is :  6422292

// [vii] Array using pointers in c for ptr++ :

// #include<stdio.h>

// int main(){

//     int Marks[] = {30,40,50,60};
//     int* ptr = &Marks[0];

//     for (int i = 0; i < 4; i++)
//     {
//         printf("The Marks of Student %d is %d \n " , i+1 , Marks[i]);
//         printf("The Marks of student %d is %d \n" , i+1 , *ptr);      // printing marks of students using ptr++ in arrays
//         ptr++;   // by doing ptr++ the pointer will jump to next value in array i.e Array[0] to Array[1].
//     }
    
//     return 0 ;
// }

// Passing array to a user defined function : 

// #include<stdio.h>

// void PrintArray(int a[] ,int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , a[i]);
//     }
//     printf("\n");
// }

// int main(){

//     int Array[] = {1,2,3,4,5,6};
//     PrintArray(Array , 6);
//     return 0 ;
// }

// [iX] Multidimentional Array : 2D array quick quizz : create a 2d array taking input from the user . write a display function to print the content of this 2d array on screen.
                                             //       VERY GOOD
// #include<stdio.h>

// int main(){
    
//     int Array[3][2] ;

//     for (int i = 0; i < 3 ; i++)
//     {
    
//         for (int j = 0; j < 2; j++)
//         {
//             printf("Enter the value of Array[%d][%d] : " ,i , j );
//             scanf("%d" , &Array[i][j]);
//         }

        
//     }
 
// //  for (int i = 0; i < 3 ; i++)
// //     {
    
// //         for (int j = 0; j < 2; j++)
// //         {
// //             printf(" the value of Array[%d][%d] : %d \n", i , j , Array[i][j] );
            
// //         }  
// //     }

// //  // if we want to print it in this way {1,2}then    
// //                                        {3,4}                     
// //                                        {5,6}

// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 2; j++)
//     {
//         printf("%d " , Array[i][j]);
//     }
//     printf("\n");
    
// }
 
//     return 0 ;
// }

// [1] Create an array of 10 numbers . verify that when we do ptr+2 it will point to the third element given that pointer was pointing to the first element.
//                                       (yes it will happen as by doing ptr+=2 the pointer will shift by 2 values)
// #include<stdio.h>

// int main(){

//     int Array[10];
    
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter Number %d :" , i+1);
//         scanf("%d" , &Array[i]);
//     }
//     int* ptr = &Array[0];
//     printf("The value of variable pointer pointing  is %d\n",*ptr);
//     ptr+=2;
//     printf("The value of the variable pointer pointing  after ptr+2 is %d",*ptr);

    
//     return 0 ;
// }

// [2] if s[3] is a 1d array of integers then *(s+3) refers to the fourth element 
// as you can see it's true in array s[] if we right s it will  count as a address of the zeroth element or we can say pointer pointing on zeroth element
// but here s+3 is pointer will jump from zeroth to third element and * indicates the value so yes both are same.
// s[] > defines value and s > defines address on zeroth position.

// #include<stdio.h>

// int main(){

//     int Array[] = {1,2,3,4,5,6};
//     printf("The value of 4th element in array is %d\n" , Array[3]);
//    printf("The value of 4th element in array is %d" , *(Array+3));
//     return 0 ;
// }

// [3] write a program to create an array of 10 integers and store multiplication table of 5 in it.

// #include<stdio.h>

// int main(){

//     int Array[10];
//     for (int i = 1; i <= 10 ; i++)
//     {
//          Array[i-1] = 5*i;
//          printf("%d\n" , Array[i-1]);
        
//     }
    
//     printf("5*4 is : %d", Array[3]);
//     return 0 ;
// }

// [4] repeat above problem for the user input :

//  #include<stdio.h>

// int main(){

//     int n;
//     int Array[10];
//     printf("Enter the multiplication table you want to print : ");
//     scanf("%d" , &n);
//     for (int i = 1; i <= 10 ; i++)
//     {
//          Array[i-1] = n*i;
//          printf("%d\n" , Array[i-1]);
        
//     }
    
//     return 0 ;
// }

//                           VERY GOOD QUESTION

// [5] Write a program containing a function which reverses the array passed to it.

// #include<stdio.h>

// void Reverse(int a[], int n){
//     int temp;
//     for (int i = 0; i < n/2; i++)
//     {
//         temp = a[i];
//         a[i] = a[n-i-1];
//         a[n-i-1] = temp;
//     }
    
// }

// void PrintArray(int a[] ,int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , a[i]);
//     }
//     printf("\n");
// }

// int main(){

//     int Array[] = {1,2,3,4,5,6};
//     PrintArray(Array , 6);
//     Reverse(Array , 6);
//     PrintArray(Array , 6);
//     return 0 ;
// }

// [6] Write a program containing function which counts the number of positive integers in an array.

// #include<stdio.h>

// int Positive(int a[],int n){
// int count = 0;   
//      for (int i = 0; i < n; i++)
//      {
//         if (a[i]>0)
//         {
//              count++;
//         }
        
//      }

//      return count;
// }

// int main(){

//     int Array[] = {-1,-2,-3,0,1,2,3,4,5};
//     Positive(Array,9);
//     printf("The number of positive integers in the given array is %d",Positive(Array,9)) ;

//     return 0 ;
// }

// [7] create an array of size 3 X 10 cotaining multiplication tables of the number 2,7,9 respectively.

#include<stdio.h>

int main(){

    int Array[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 10; a++)
        {
            Array[0][a] = 2*(a+1);
        }    
    
        for (int a = 0; a < 10; a++)
        {
            Array[1][a] = 7*(a+1);
        } 

        for (int a = 0; a < 10; a++)
        {
            Array[2][a] = 9*(a+1);
        } 
    }
    
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d " , Array[i][j]);
        }
        printf("\n");
        
    }
    
    return 0 ;
}

// [8] Repeat above problem for a custom input given by the user.

// [9] create a 3d array and print the address of it's element in increasing order.




