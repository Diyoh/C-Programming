#include<stdio.h>

int main()
{
double first, second;
float result;
char op;
printf("enter operator (+, -, /, *, ):\n");
scanf("%c", &op);
printf("input two operands: ");
scanf("%lf %lf", &first, &second);

switch (op){
case '+':
result=first+second;
printf("the sum of %.llf and %.llf is %llf \n", first, second, result );
break;

case '-':
result=first-second;
printf("the difference between %.llf and %.llf is %llf \n", first, second, result);
break;

case '*':
result=first*second;
printf("the product of %.llf and %.llf is %llf\n", first, second, result);
break;

case '/':
    result=first/second;
    printf("the result when %.llf is divided by %.llf is %llf\n", first, second, result);
    break;

default:
    printf("this is not an operator");
}
return 0;
}


