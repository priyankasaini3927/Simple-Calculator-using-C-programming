#include <stdio.h>
#include <math.h>




int main()
{
    printf("Welcome to Simple Calculator\n");

    long int n, m;
    int s;
    while (1)
    {
        printf("\nChoose one of the following operation\n1. Addition\n2. Subtraction\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\n");
        printf("Enter your choice : \n");
        scanf("%d", &s);
        if (s==7)
        {
            printf("Exiting..\n");
            break;
            
        }
       
    printf("enter the first numbers\n");
    scanf("%ld", &n);
    printf("enter the second numbers\n");
    scanf("%ld", &m);

    switch (s)
    {
    case 1:
        printf("Your answer is :- %ld\n", n + m);
        break;
    case 2:
        printf("Your answer is :- %ld\n", n - m);
        break;
    case 3:
        printf("Your answer is :- %ld\n", n * m);
        break;
    case 4:
        if (m==0)
        {
            printf("Error! Divde by zero.\n");
            
        }
        else
        {
            printf("Your answer is :- %ld\n", n / m);
        }
        break;
    case 5:
         if (m==0)
        {
            printf("Error! Modulus by zero.\n");
            
        }
        else
        {
            printf("Your answer is :- %ld\n", n % m);
        }
        break;
    case 6: printf("Your answer is :- %.2f\n", pow(n, m)); 
        break;
    default:
        printf("Invalid Option\n");
    }
    }
    return 0;
}