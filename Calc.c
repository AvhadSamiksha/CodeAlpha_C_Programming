#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int main()
{
    int n,x,y,res;
    printf("\n------------------------TASK 1: Basic calculator-----------------------------\n");
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division : \n");
    scanf("%d",&n);
    printf("-------------------------------------------------------------------------------\n");
    printf("\nEnter the numbers to be calculated : ");
    scanf("%d\t%d",&x,&y);
    switch(n)
    {
        case 1:
         res = add(x,y);
         break;
        
        case 2:
         res= sub(x,y);
         break;

        case 3:
         res = mul(x,y);
         break;

        case 4:
         res = div(x,y);
         break;

        default:
         printf("\nInvalid input!!\n");
    }
    printf("The result is %d",res);
    return 0;
}
int add(int x, int y)
{ 
    int addition;
    addition = x + y;
    return addition;
}
int sub(int x, int y)
{
    int subtraction;
    subtraction = x - y;
    return subtraction;
}
int mul(int x, int y)
{
    int multiplication;
    multiplication = x * y;
    return multiplication;
}
int div(int x, int y)
{
    int division;
    division = x / y;
    return division;
}