#include<stdio.h>


int main()


{


    int n, reversedInteger = 0, remainder, originalInteger;


    printf("Enter an integer: ");


    scanf("%d", &n);


    originalInteger = n;

printf("01 %d %d %d\n",n,remainder,reversedInteger);
    // reversed integer is stored in variable (#1)


    while( n!=0 )
     

    {


        remainder = n%10;

        
        reversedInteger = (reversedInteger*10) + remainder;
        ;

        n=n/10;  //(#2)
        printf("02 %d %d %d \n",n,remainder,reversedInteger);

    }

    // palindrome if orignalInteger and reversedInteger are equal (#3)

    if (originalInteger == reversedInteger){printf("03 %d %d \n",originalInteger,reversedInteger);
        

        printf("%d is a palindrome.", originalInteger);}


    else {
       
        printf("%d is not a palindrome.", originalInteger);}

    return 0;


}