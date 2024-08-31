// [1] Invalid in C

/* [i]
#include<stdio.h>

int main(){
    char dt = "21 Dec 2020";     // This is invalid in C
    printf("Todays date is %c", dt);
    return 0 ;
}
*/

/* [ii]
#include<stdio.h>

int main(){

    int v = 3*3;
    printf("Value of v is %d" , v);  // This is valid in C.
    return 0 ;
}
*/

// [iii]
/*
#include<stdio.h>

int main(){

    int a , b=a; // This is valid in C.
    return 0 ;
}
*/

//[2] Data Type 
/*
#include<stdio.h>

int main(){

    float a = 3.0/8 -2 ;
    printf(" The value of a is %f", a); //The data type will be float as here 3.0 is given.
    return 0 ;
}

*/

//[3] Whether the number is divisible by 97 or not 
/*
#include<stdio.h>

int main(){

    int n;
    int A;
    printf("Enter the Number : ");
    scanf("%d" , &n);
    A = n%97;
    printf("The output is : %d\n", A);
    printf("Here if the output is 0 then the number %d is divisible by 97 or else not." , n);
    return 0 ;
}
*/

//[4] Step by Step evaluation :
/*
 x = 2 , y = 3 , z = 3 , R = 1
3*x / y - z + R 
3*2 / y -z + R
6/3 - z + R
2 - 3 + R
-1 + 1
0
*/

// Code evaluation :

/*
#include<stdio.h>

int main(){

    int x =2 , y=3, z=3 , R=1;
    printf("The value of 3*x/y-z+R is : %d" , 3*x/y-z+R);
    return 0 ;
}

*/

//[5] 3.0 + 1 will be Floating Point number



