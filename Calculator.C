#include <stdio.h>

int main(){

      /* Variables */
      char op;
      double num1;
      double num2;
      double result;

      printf("\nEnter an operator (+ - * /): ");
      scanf("%c", &op);

      printf("\nEnter numer one: ");
      scanf("%lf", &num1);

      printf("\nEnter numer two: ");
      scanf("%lf", &num2);

      switch (op)
      {
            case '+':
                  result = num1 + num2;
                  printf("\nResult: %.2lf", result);
                  break;
            case '-':
                  result = num1 - num2;
                  printf("\nResult: %.2lf", result);
                  break;
            case '*':
                  result = num1 * num2;
                  printf("\nResult: %.2lf", result);
                  break;
            case '/':
                  result = num1 / num2;
                  printf("\nResult: %.2lf", result);
                  break;
            default:
                  printf("%c is not valid operator", &op);
                  break;
      }

      return 0;
}