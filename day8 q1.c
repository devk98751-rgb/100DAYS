/*Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("%c is an uppercase alphabet.\n",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c is a lowercase alphabet.\n",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a digit.\n",ch);
    }
    else
    {
        printf("%c is a special character.\n",ch);
    }
    return 0;
}/*Write a program to input three numbers and find the largest among them using if–else.
*/
#include <stdio.h>
int main() {
    int num1, num2, num3;

   
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}