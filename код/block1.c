#include <stdio.h>
#include <stdbool.h>

int calc(int a, int b, char s)
{

    switch(s)
    {
        case '+' : 
            return a + b;

        case '-' :
            return a - b;

        case '*' :
            return a * b;

        case '/' :
            if (b == 0)
            {
                printf("Error: division by zero\n");
                return 0;
            }
            return a / b;

        case '%' :
            if (b == 0)
            {
                printf("Error: division by zero\n");
                return 0;
            }
            return a % b;

        default :
            printf("Unknown operation\n");
            return 0;
    }

}

int max_of_three(int a, int b, int c)
{
    if (a > b)
    {
        return a > c ? a : c;
    }
    else
    {
        return b > c ? b : c;
    }
}

int min_of_three(int a, int b, int c)
{
    if (a < b)
    {
        return a < c ? a : c;
    }
    else
    {
        return b < c ? b : c;
    }
}

void verify_year(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            printf("Yes\n");
        }
    }
    else 
        printf("No\n");
}

void multi_table(void)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf( "%d * %d = %d ", j, i, i*j );
            if (i != 10)
            {
                printf("  ");
            }
            if (j == 10)
            {
                printf("\n");
            }
        }
    }
}

int sum_of_num(int num)
{
    int res = 0;

    bool is_minus = false;

    if(num < 0)
    {
        num = num * -1;
        is_minus = true;
    }

    while (num > 0)
    {
        res += num % 10;
        num /= 10;
    }
    if(is_minus)
    {
        return -res;
    }
    else
    {
        return res;
    }
}

int reverse_number(int num)
{
    int temp  = 0;
    int res   = 1;
    int count = 1;

    bool is_minus = false;

    if(num < 0)
    {
        num = num * -1;
        is_minus = true;
    }

    while (num > 0)
    {
        count *=10;
        temp = num % 10;
        num /= 10;
        res *= 10;
        res += temp;

    }
    if(is_minus)
    {
        return -1 * (res - count);
    }
    else
    {
        return res - count;
    }
    
}

int is_even(int x)
{
    if(x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    /*Calc
    char s;

    scanf(" %c", &s);

    int result = calc(10, 5, s);
    printf("%d\n", result); 
    */

    /*Max of three
    int result = max_of_three(1, 6, 9);
    printf("%d\n", result);
    */

    /* Verify Year
    verify_year(2024);
    */

    /* Multiplication table
    multi_table();
    */

    /* Sum of number */
    //int result = sum_of_num(-5382);
    //printf("%d\n", result);
    

    /* reverse number */
    //int result = reverse_number(-12);
    //printf("%d\n", result);
    
    
    /* is_even? */
    //for (int i = -10; i < 11; i++)
    //{
    //    int result = is_even(i);
    //    printf("i: %d\n", result);
    //}



    return 0;
}