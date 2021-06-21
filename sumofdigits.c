# Sum-of-Digits
Developed by Sarit Shekhar Roy

#include <stdio.h>
 
int digit(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + digit(n / 10));
}
 

int main()
{
    int no;
    printf("Please enter a number : ");
    scanf("%d",&no);
    int result = digit(no);
    printf("Sum of digits in %d is %d\n", no, result);
    return 0;
}
