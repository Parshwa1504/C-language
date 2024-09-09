// [1] create a string using double qoutes and Print it's content using loop. 

// #include<stdio.h>

// int main(){

//     //char st[] = {'P','A','R','S','H','W','A','\0'};
//     char st[] = {"PARSHWA"};  // This is same as above as we added double quote so it will add null character at end automatically.
//     for (char i = 0; i < 7; i++)
//     {
//         printf("The character stored in index value %d is : %c\n",i,st[i]);
//     }
    
   
//     return 0 ;
// }

// [2]  Printing Strings : ( if we wnat to only print the strings.)

// #include<stdio.h>

// int main(){

//     //char st[] = {'P','A','R','S','H','W','A','\0'};
//     char st[] = {"PARSHWA"};  // This is same as above as we added double quote so it will add null character at end automatically.
//     for (char i = 0; i < 7; i++)
//     {
//         printf("%c",st[i]);
        
//     }
//     printf("\n");

// // We can use %s to print the entire string at once so that we dont have to use 'for loop' and by sing %S we can print the entire string at once.

//     printf("%s",st);

//     return 0 ;
// }

// [3] User input in String: We can use %S with scanf to take string input from the user.
// Scan f automatically adds a null character when the enter key is pressed.

// #include<stdio.h>

// int main(){

//     char st[8]; // here string will be created for 3 character as 4 th one will be null character.
//     scanf("%s",st);   // here we dont use & operator as in st[] , st defines address at 0th index .
//     printf("%s",st);
//     return 0 ;
// }

// [4] gets and puts in string: gets is a function which can be used to receive a multi-word string.gets 
// calls will be needed for multiple strings.

// puts can be used to output a string.

// #include<stdio.h>

// int main(){

//     char st[40];
//     gets(st);          // The entered string is stored in st.
//     // printf("%s",st);
//     puts(st);          // prints the string and place sthe cursor on the new line.
//     printf("Good Morning!");
//     return 0 ;
// }

// [5] standard library functions for c :

// [i] strlen(): Function is used to count the number of character in the string excluding null character(\0).
// [ii] strcpy(): this function is used to copy the content of second string into first string passed to it.second string should have the capacity to store the first string. 
// [iii] strcat() : this function is used to concatinate two strings.(be strings bhegi karvi ).
// [iv]  strcmp() : this function is used to compare two strings.It returns 0 if the string are equal ,
// a negetive value if the first strings mismatching character's ASCII value is less than the second string's correspondng mismatching character , and positive otherwise. 


// #include<stdio.h>
// #include<string.h> // this header file is used when we use string functions 

// int main(){

    // char str[50] = "PARSHWA";
    // printf("%d" , strlen(str));         // output : 7    strlen()

    // char str[50] = "I AM PARSHWA";
    // char str2[50] ;
    // strcpy(str2 , str);      // the string which is empty or in which we have to copy should be first written in the function.
    // printf("%s  %s" , str , str2);      // output : I AM PARSHWA   I AM PARSHWA   strcpy()
    // return 0 ;

    // char str[60] = "HELLO I AM ";
    // char str2[60] = "PARSHWA";
    // strcat(str,str2);
    // printf("%s" , str2);  // output : HELLO I AM PARSHWA . so in this str2 will be added to str as we have done strcat(str,str2) so if we print str then we will get 
    //                       // HELLO I AM PARSHWA but if we print str2 then we will get PARSHWA.

    // char str[50] = "PARSHWA";
    // char str2[50] = "PARSHWA";
    // char str3[50] = "PURVI";
    // char str4[50] = "DIVYANG";

    // printf(("%d"),strcmp(str,str2)); // output : 0 As here both str and str1 is same so output is zero on doing strcmp(str,str2).
   
    // printf(("%d"),strcmp(str4,str3)); // output : -1  negetive value generally -1 as str4 and str 3 is not same and in strcmp(str4,str3) D's ascii value is less than the P's ascii value
                                    // that's why we get negetive value. (trick : if it's in alphabaticle order then the value will be negetive ) 
    
    // printf(("%d"),strcmp(str3,str4)); // output : +1  positive value generally +1 as str4 and str 3 is not same and in strcmp(str3,str4) D's ascii value is less than the P's ascii value
                                    // that's why we get positive value. (trick : if it's not in  alphabaticle order then the value will be positive. ) 

// }

// [1] gets() is used to appropriatly read a multi-word string.

// [2] write a program to take string as an input from the user using %c and %S
//    confirm that the strings are equal.

// #include<stdio.h>
// #include<string.h>

// int main(){

//   // for the user input from the user using %c:  
//     char str[7];                                                    //  IN %C got confused 
//     printf("Enter your String : ");
//    for (char i = 0; i < 7; i++)
//    {
//     scanf("%c" , &str[i]);
//     printf("%c",str[i]);
//    }
   
// // for the user input from the user using %S:
//     printf("Enter your String : ");
//     scanf("%s",&str);
//     printf("%s",str);
    
    

//     return 0 ;
// }

// [3] write your own version of strlen function from <string.h>:

// #include<stdio.h>


// int Length(char str[]){

    
//     int count = 0;

//         for (int i = 0; i < 5; i++)
//     {
//         if (str[i] != '\0')
//         {
//             count++;   
//         }
//         else{
//             return 0;
//         }
        
//     }
//     return count;
// }

// int main(){

//     char str[] = "SHI v";
//     Length(str);
//     printf("The length of the string is %d",Length(str));
    

//     return 0 ;
// }

// For the user input : 

// #include<stdio.h>

// int Length(char str[]){
//     int Count = 0;
//     for (int i = 0; i < 60; i++)
//     {
//         if (str[i] != 0)
//         {
//             Count++;  
             
//         }
//         else 
//         {
//             break;
//         }
        
       
//     }
//      return Count;
// }

// int main(){

//     char str[60] ;
//     printf("Enter your string : ");
//     // scanf with %[^\n] will read until a newline is encountered (input with spaces)
//     scanf(" %[^\n]", str);
//     Length(str);
//     printf("The length of the string is %d",Length(str));
    

//     return 0 ;
// }

// [4] write a function slice() to slice a string . it should change the original string such that it is now the sliced string.take m and n as starting and ending point.

// #include<stdio.h>

// char* Slice(char str[],int m , int n){
//     char* ptr = &str[m];
//     char* ptr2 = &str[n];
//    str = ptr;
//    str[n+1] = '\0';
//     return str;
//     }

// int main(){

//     char str[] = {"I AM PARSHWA"};
    
//     printf("We have to slice the string then it will print : %s",Slice(str,1,6));


//     return 0 ;
// }

// [5] Write your own version of strcpy function.

// #include<stdio.h>
// #include<string.h>

// char Copy(char st[], char st2[]){
//     for (int i = 0; i < strlen(st); i++)
//     {
//         st2[i] = st[i] ;
//     }
//       st2[strlen(st)] = '\0';
// }

// int main(){

//     char str[] = "HI I AM PARSHWA";
//     char str2[60];
//     Copy(str,str2);
//     printf("%s\n",str);
//     printf("%s",str2);
//     return 0 ;
// }

// [6] write a program to encrypt a string by adding 1 to the ascii value of it's character.

// #include<stdio.h>
// #include<string.h>

// char* Encryption(char st[], char st2[]){
//     for (int i = 0; i < strlen(st); i++)
//     {
//        st2[i] = st[i] + 1;  // by doing + 1 value of st2 will increase by 1 not value of st[1] where by doing st[i]++ both's value was increasing.
       
//     }
//     st2[strlen(st)] = '\0'; // we have to add null value at last in st2 or it will add some garbage value in last .
//     return st2;
// }

// int main(){

//     char str[] = "I AM PARSHWA";
//     char encstr[100];
//     printf("%s\n",str);
//     printf("%s" ,Encryption(str,encstr));
//     return 0 ;
// }

// [7] decrypt the string encrypted using encrypt function in problem above.

// #include<stdio.h>
// #include<string.h>

// char* Encryption(char st[], char st2[]){
//     for (int i = 0; i < strlen(st); i++)
//     {
//        st2[i] = st[i] + 1;  // by doing + 1 value of st2 will increase by 1 not value of st[1] where by doing st[i]++ both's value was increasing.
       
//     }
//     st2[strlen(st)] = '\0'; // we have to add null value at last in st2 or it will add some garbage value in last .
//     return st2;
// }

// char* Decryption(char st2[], char st3[]){
//     for (int i = 0; i < strlen(st2); i++)
//     {
//        st3[i] = st2[i] - 1;  // by doing + 1 value of st2 will increase by 1 not value of st[1] where by doing st[i]++ both's value was increasing.
       
//     }
//     st3[strlen(st2)] = '\0'; // we have to add null value at last in st2 or it will add some garbage value in last .         MOST IMP PLEASE REMEMBER !!
//     return st3;
// }

// int main(){

//     char str[] = "I AM PARSHWA";
//     char encstr[100];
//     char decstr[100];
//     printf("%s\n",str);
//     printf("%s\n" ,Encryption(str,encstr));
//     printf("%s",Decryption(encstr,decstr));
//     return 0 ;
// }

// [8] Write a program to count the occurence of a given character in a string.

// #include<stdio.h>
// #include<string.h>

// int Occurance(char st[], char ch){
//     int count = 0 ;
//     for (int i = 0; i < strlen(st); i++)
//     {
//         if (st[i] == ch)
//         {
//             count++;
//         }
        
        
//     }
    
//     return count;
// }

// int main(){

//     char str[] = "HI I AM PARSHWA" ;
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c",&ch);
//     printf("The occurance of %c is %d times" , ch , Occurance(str,ch));

//     return 0 ;
// }

// [9] Write a program to find that given character is present in the string or not.

// #include<stdio.h>
// #include<string.h>

// int Present(char st[], char ch){
//    int found = 0;                                 // This is for non repetation in my case not one was repeating so keep remember.
//     for (int i = 0; i < strlen(st); i++)
//     {
        
//         if (st[i] == ch)
//         {
//            found = 1;
//            break;
//         }
            
//     }

//     if (found)
//         {
//            printf("The given character is present in the string\n");
           
//         }
//        else{
//         printf("The given character is not present in the string\n" );
//        }
    
// }

// int main(){

//     char str[] = "HI I AM PARSHWA" ;
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c",&ch);
//     Present(str,ch);
    

//     return 0 ;
// }
