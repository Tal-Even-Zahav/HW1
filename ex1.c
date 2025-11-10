#include <stdio.h>

int main() {

    int base = 0, num = 0;
    int abs = 0, sum = 0, count =0, temp = 0;
    char sign;

    printf("Please enter a number (integer) and a base:\n");
    scanf("%d %d", &num, &base);
    while (base != 8 && base != 10 && base != 16)
    {
        printf("Invalid base %d\nPlease enter a valid base [8,10,16]:\n", base);
        scanf("%d", &base);
    }
    
    printf("Here is some information about the given numbers: %d\n", num);
    
    if(num > 0)
    {
        sign = '+';
        abs = num;
    }
        
    else if(num < 0)
    {
        sign = '-';
        abs = -num;
    }
        
    else
        sign = '0';

    printf("Its sign is: %c\n", sign);
    printf("Decimal representation of the absolute value: %d\n", abs);

    temp = abs; //for keeping the number in shape

    do
    {
        sum += temp % 10;
        count++;
        temp = temp / 10;
    } while (temp != 0);

    printf("The number of digits is: %d\n", count);
    printf("The sum of digits is: %d\n", sum);

    if (base == 10)
        printf("Base 10 representation was already computed above.");
    else if (base == 8)
        printf("0d%d = 0%o",abs ,abs);
    else
        printf("0d%d = 0x%x",abs ,abs);
    
    return 0;

}