#include <stdio.h>

int main()
{

    // int  add , sub , mul , div ;
    float num1, num2;
    int choose;
    printf("Enter any 2 Number :");
    scanf("%f %f", &num1, &num2);

   
    printf("1.Addition \n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Choose any operation by entering number(1-4) \n");
    scanf("%d", &choose);

    do
    {
        printf("Please enter the valid number between 1 to 4\n");
        printf("1.Addition \n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        scanf("%d", &choose);
    } while (choose > 4 || choose < 1);

    switch (choose)
    {
    case 1:
        printf("%.2f + %.2f = %.2f ", num1, num2, num1 + num2);

        break;

    case 2:
        printf("%.2f - %.2f = %.2f ", num1, num2, num1 - num2);

        break;

    case 3:
        printf("%.2f x %.2f = %.2f ", num1, num2, num1 * num2);

        break;

    case 4:
        printf("%.2f / %.2f = %.2f ", num1, num2, num1 / num2);

        break;
    }
    return 0;
}