// [i] Example of a C structuer can be created as follow:

// #include<stdio.h>
// #include<string.h>

// int main(){

//     struct employee
//     {
//         int code;
//         float salary;
//         char name;
//     };

//     struct employee e1; // creating a structural variable
//     strcpy(e1.name,"parshwa");
//     e1.salary = 22.5;
//     e1.code = 07;


//     return 0 ;
// }

//[ii]

// #include<stdio.h>
// #include<string.h>

// int main(){

//     struct employee
//     {
//         int code;
//         float salary;
//         char name;
//     };

//     struct employee e1 , e2 , e3;

//     e1.code = 7;
//     e1.salary = 40.15;
//     strcpy(e1.name,"PARSHWA");

//     e2.code = 8;
//     e2.salary = 41.15;
//     strcpy(e2.name,"PARSH");

//     e3.code = 9;
//     e3.salary = 42.15;
//     strcpy(e3.name,"PAR");



//     return 0 ;
// }

// [ii] User input :

// #include<stdio.h>

// int main(){

//     struct employee
//     {
//         int code;
//         float salary;
//         char name[10];
//     };

//     struct employee e1 , e2 , e3;

//     printf("Enter your name : ");
//     scanf("%s",&e1.name);
//     printf("Enter your salary : ");
//     scanf("%f",&e1.salary);
//     printf("Enter your code : ");
//     scanf("%d" , &e1.code);
    
//     printf("Enter your name : ");
//     scanf("%s",&e2.name);
//     printf("Enter your salary : ");
//     scanf("%f",&e2.salary);
//     printf("Enter your code : ");
//     scanf("%d" , &e2.code);

//     printf("Enter your name : ");
//     scanf("%s",&e3.name);
//     printf("Enter your salary : ");
//     scanf("%f",&e3.salary);
//     printf("Enter your code : ");
//     scanf("%d" , &e3.code);

//     printf("%s %f %d\n" , e1.name , e1.salary , e1.code);
//     printf("%s %f %d\n" , e2.name , e2.salary , e2.code);
//     printf("%s %f %d\n" , e3.name , e3.salary , e3.code);

//    return 0 ;
//}

// [III] STRUCTURE ARRAY : 

// #include<stdio.h>

// struct employee
//     {
//         int code;
//         float salary;
//         char name;
//     };

// int main(){ 

    

//     struct employee e1 ;
    
    // struct employee Facebook[100];
    // Facebook[0].code = 1;
    // Facebook[1].code = 2;

// initializing structures : 

// struct employee PARSHWA = {3,33.33,"PARSHWA"};
// struct employee OM = {0}; // all elements set to zero.  
// // structures are stored in contogios memory.


// pointer to structure :  

// struct employee *ptr;         // pointer to structure employee.
// ptr = &e1;
// printf("%d" , (*ptr).code);  // it will print the code of e1 so we can use pointer to print diffrent variables.
 

 // Arrow operator :instead of (*ptr).code we can write ptr->code.

//   return 0 ;
// }

// [iv] Passing structure to function:

// #include<stdio.h>
// #include<string.h>

// struct employee
// {
//     int code;
//     float salary;
//     char name[10];

// };

// void show(struct employee e){
//     printf("%s    %f     %d",e.name,e.salary,e.code);
// }

// int main(){

//     struct employee e1;
//     e1.code = 1;
//     e1.salary = 10.1;
//     strcpy(e1.name,"parshwa");
//     show(e1);


//     return 0 ;
// }

// [V]      TYPEDEF :
 
//  #include<stdio.h>
//  #include<string.h>

//  typedef struct employee
//  {
//     int code;
//     float salary;
//     char name[10];

//  }Emp;
 
 
//  int main(){
 
//  Emp e1;                 // by using typedef we dont have to use struct employee again and again by using typedef we created an emp variable like int
//                          // so now we can use emp rather than writing structure employee everytime.
//  Emp* ptr = &e1;
//  e1.code=1;
//  e1.salary=11.11;
//  strcpy(e1.name,"PARSHWA");
// printf("%s %d %f" , ptr->name,ptr->code,ptr->salary);      // Arrow operator
    
//     return 0 ;
//  }

// [1] Create a  two dimentional vector using structures in c.

// #include<stdio.h>

// typedef struct Vector
// {
//     int x;
//     int y;
// }VEC;


// int main(){

//     VEC V1 , V2 ;

//     V1.x=2;
//     V2.x=3;
//     V1.y=4;
//     V2.y = 5;

//     printf("(%d,%d)\n",V1.x,V1.y);
//     printf("(%d,%d)",V2.x,V2.y);
//     return 0 ;
// }

//               Modified code by the help of chat gpt

// [2] write a function sumvector which returns the sum of two vector passed to it.The vector must be two dimentional.

// #include<stdio.h>

// typedef struct Vector
// {
//     int x;
//     int y;

// }Vec;

// Vec Sumvector(Vec v1,Vec v2){
//     Vec  sum;
//     sum.x = v1.x + v2.x;
//     sum.y = v2.y + v2.y;
//     return sum;
    
// } 

// int main(){

//     Vec v1 , v2;
//     v1.x=4;
//     v2.x=5;
//     v1.y=1;
//     v2.y=2;
//     Vec Result = Sumvector( v1 , v2);
//     printf("(%d,%d)", Result.x,Result.y);
    
//     return 0 ;
// }

// [3] Twenty integers are to be stored in memory what will you prefer Array or structure : I would prefer Array.

// [4] write a program to illustrare the use of arrow operator in c.

// #include<stdio.h>
// #include<string.h>

// typedef struct Employee
// {
//     int code;
//     float Salary;
//     char name[10];
// }EMP;


// int main(){

//     EMP e1 , e2 , e3;
//     EMP* ptr =&e1;
//     EMP* ptr2 =&e2;
//     EMP* ptr3 =&e3;

//     e1.code=1;
//     e1.Salary = 10.1;
//     strcpy(e1.name,"Parshwa");

    
//     e2.code=2;
//     e2.Salary = 10.2;
//     strcpy(e2.name,"Parsh");
    
//     e3.code=3;
//     e3.Salary = 10.3;
//     strcpy(e3.name,"Par");

//     printf("%d %f %s\n", ptr->code,ptr->Salary,ptr->name);
//     printf("%d %f %s\n", ptr2->code,ptr2->Salary,ptr2->name);
//     printf("%d %f %s\n", ptr3->code,ptr3->Salary,ptr3->name);

//     return 0 ;
// }

// [5]  write a program with a structutre representing a complex number.

// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// #include<complex.h>

// typedef struct Complex
// {
//     int a;
//     int b;
    
// }COM;


// int main(){

//     COM c1 , c2 , c3;
    
//     c1.a = 3;
//     c1.b=4;
    
//     c2.a = 5;
//     c2.b=6;

//     c3.a = 7;
//     c3.b=8;

//     printf("The complex number 1 is : %d + %d*i\n",c1.a,c1.b);
//     printf("The complex number 2 is : %d + %d*i\n",c2.a,c2.b);
//     printf("The complex number 3 is : %d + %d*i\n",c3.a,c3.b);
//     return 0 ;
// }

// [6]  Create an array of 5 complex numbers created in problem 5 and display them with the help of of a display function . 
// the values must be taken as an input from the user.

// #include<stdio.h>

// typedef struct Complex
// {
//     int a;
//     int b;
// }Com;

// void Display(Com c[] ){            // Your Display() function should not return anything since it just prints the values. So, the return type should be void instead of Com.
    
    
//     for (int i = 0; i < 5; i++)
//     {
//          printf("%d + %di\n",c[i].a,c[i].b); 
//     }
                                             
   
// }

// int main(){

//     Com c[5];

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter you complex number coefficient complex number %d : " , i+1);
//         scanf("%d %d",&c[i].a,&c[i].b);
//     }
    
//     Display(c);

//     return 0 ;
// }

// [8]  Create a structure representing a bank account of a coustomer . what field did you use and why?

// #include<stdio.h>
// #include<string.h>

// typedef struct Bank_Account
//     {
//         int Account_Number;
//         float Balance;
//         char name[10];
//     }acc;

// void Display(acc a[]){
//     for (int i = 0; i < 2; i++)
//     {
//         printf("%d %f %s\n",a[i].Account_Number,a[i].Balance,a[i].name);
//     }
// }    

// int main(){

//     acc a[2];

//     for (int i = 0; i < 2; i++)
//     {
//         printf("Enter your Account Number: ");
//         scanf("%d",&a[i].Account_Number);
//         printf("Enter your Balance: ");
//         scanf("%f",&a[i].Balance);
//         printf("Enter your Name: ");
//         scanf("%s",&a[i].name);
//     }

//     Display(a);
    
//     return 0 ;
// }

//                        VERY GOOD !!

// [9] write a structure capable of storing date.write a function to compare those dates.
// doubt what to do if the array have more than 2 dates for 2 dates to compare it's easy but what to do for the 5.

// for 2 dates : 
// #include<stdio.h>

// typedef struct Date {
//     int day;
//     int month;
//     int year;
// } Date;

// // Function to compare two dates
// // Returns -1 if date1 is earlier than date2
// // Returns 1 if date1 is later than date2
// // Returns 0 if both dates are equal
// int compareDates(Date date1, Date date2) {
//     if (date1.year < date2.year)
//         return -1;
//     else if (date1.year > date2.year)
//         return 1;

//     // If years are the same, compare months
//     if (date1.month < date2.month)
//         return -1;
//     else if (date1.month > date2.month)
//         return 1;

//     // If months are the same, compare days
//     if (date1.day < date2.day)
//         return -1;
//     else if (date1.day > date2.day)
//         return 1;

//     // If day, month, and year are all equal, the dates are the same
//     return 0;
// }

// int main() {
//     Date d1, d2;

//     // Input for first date
//     printf("Enter the first date (dd mm yyyy): ");
//     scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

//     // Input for second date
//     printf("Enter the second date (dd mm yyyy): ");
//     scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

//     // Compare the dates
//     int result = compareDates(d1, d2);

//     if (result == 0)
//         printf("The dates are the same.\n");
//     else if (result < 0)
//         printf("The first date is earlier than the second date.\n");
//     else
//         printf("The first date is later than the second date.\n");

//     return 0;
// }





