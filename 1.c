#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num == 0)
        printf("%d is a Zero",num);
    else if(num < 0)
        printf("%d is a Negative number",num);
    else
        printf("%d is a Positive number",num);
    return 0;
}
