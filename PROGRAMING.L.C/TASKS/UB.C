#include<stdio.h>

int main(void)
{ 
    int unit, Bill, rem, value = 50, a, b, c;
    int rate1 = 1, rate2 = 2, rate3 = 4, rate4 = 6, rate5 = 8;
    
    printf("Enter unit = ");
    scanf("%d", &unit);

    if(unit >= 0 && unit <= 50)
    {
        Bill = unit * rate1;
        printf("Print Bill = %d", Bill); 
    }
    else if(unit >= 51 && unit <= 100)
    { 
        rem = unit - 50;
        value = 50;
        Bill = (rem * rate2 + value);
        printf("Print bill = %d", Bill);  
    }
    else if(unit >= 101 && unit <= 200)
    { 
        rem = unit - 100;
        a = 100;
        Bill = (rem * rate3 + a + value);
        printf("Print bill = %d", Bill);
    }
    else if(unit >= 201 && unit <= 300)
    { 
        rem = unit - 150;
        b = 200;
        Bill = (rem * rate4 + a + b + value);
        printf("Print bill = %d", Bill);
    }
    else if(unit > 300)
    {
        rem = unit - 300;
        c = 300;
        Bill = (rem * rate5 + a + b + c + value);
        printf("Print bill = %d", Bill);
    }
    else
    {
        printf("Invalid input. Please enter a non-negative integer.");
    }

    return 0;
}

