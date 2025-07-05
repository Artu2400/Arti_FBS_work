#include<stdio.h>
void main()
{
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  
  
    if (op == '+')
	 {
        printf("Result = %d\n", num1 + num2);
    }
	 else
	 {
        if (op == '-')
		 {
            printf("Result = %d\n", num1 - num2);
        } else
		 {
            if (op == '*')
			 {
                printf("Result = %d\n", num1 * num2);
            } else
			 {
                if (op == '/')
				 {
                    if (num2 != 0)
                        printf("Result = %d\n", num1 / num2);
                    else
                        printf("Error: Division by zero.\n");
                } else 
				{
                    if (op == '%')
					 {
                        if (num2 != 0)
                            printf("Result = %d\n", num1 % num2);
                        else
                            printf("Error: Modulus by zero.\n");
                    } else {
                        printf("Invalid operator.\n");
                    }
                }
            }
        }
}
}