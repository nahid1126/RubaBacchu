#include <stdio.h>

int main()
{
    char operator;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&operator);
    printf("Enter two operands: ");
    scanf("%lf%lf",&n1,&n2);



    /*switch(operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n",n1, n2, n1+n2);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf\n",n1, n2, n1-n2);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf\n",n1, n2, n1*n2);
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf\n",n1, n2, n1/n2);
        break;

    // operator doesn't match any case constant +, -, *, /
    default:
        printf("Error! operator is not correct");
    }*/
    switch(operator)
    {
    case 'N':
        printf("Yes YOu are Nahid\n");
        break;

    case 'B':
        printf("Yes You are Baccu\n");
        break;

    // operator doesn't match any case constant +, -, *, /
    default:
        printf("Yes You are Ruba");
    }

    return 0;
}
