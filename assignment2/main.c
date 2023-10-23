#include <stdio.h>
#include <stdlib.h>
void cubeOfNumber();
void isAlphapet();
void posORneg();
void simpleCalc();
void evenOrodd();
void toUpperCase();
void isFirstMultipleOfSecond();
void primeNumbers();
void swapping();
void holesCounting();
void powerOf2();
void heatingTime();
void integerFloorOfSum();
void count_ones_32bit();
void count_ones_8bit();
void squareNumber();
void powerOf3();

int main()
{
    printf("Assignment 2.\n");
    printf("printing the cube of any number.\n");
    cubeOfNumber();
    printf("----------------------------\n");
    printf("checking if character is alphabet or not.\n");
    isAlphapet();
    printf("----------------------------\n");
    printf("checking if the number if positive or negative.\n");
    posORneg();
    printf("----------------------------\n");
    printf("simple calculator.\n");
    simpleCalc();
    printf("----------------------------\n");
    printf("check if the input is an even number or an odd number\n");
    evenOrodd();
    printf("----------------------------\n");
    printf("converting any letter from lowercase to uppercase.\n");
    toUpperCase();
    printf("----------------------------\n");
    printf("checking if the first is multiple of the second.\n");
    isFirstMultipleOfSecond();
    printf("----------------------------\n");
    printf("displaying Prime Numbers between Intervals\n");
    primeNumbers();
    printf("----------------------------\n");
    printf("swapping the value of two integer numbers.\n");
    swapping();
    printf("----------------------------\n");
    printf("function return an integer denoting the total number of holes in number");
    holesCounting();
    printf("----------------------------\n");
    printf("checking if the input number is power of 2 or not. \n");
    powerOf2();
    printf("----------------------------\n");
    printf("calculating the required heater activation time according to the input temperature of water.\n");
    heatingTime();
    printf("----------------------------\n");
    printf("Determine the integer floor of the sum.\n");
    integerFloorOfSum();
    printf("----------------------------\n");
    printf("counting the number of ones in an unsigned 32-bit integer.\n");
    count_ones_32bit();
    printf("----------------------------\n");
    printf("counting the number of ones in an unsigned 8-bit integer.\n");
    count_ones_8bit();
    printf("----------------------------\n");
    printf("checking if positive integer can be expressed as a power of square number.\n");
    squareNumber();
    printf("----------------------------\n");
    printf("checking if a given number is a power of 3, otherwise return 1. \n");
    powerOf3();
    printf("----------------------------\n");
    printf("end of assignment 2");
}

void cubeOfNumber()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    int result=1;
    for (int i = 1 ; i<=3; i++)
    {
        result *=num;
    }
    printf("the result is %d \n", result);
}

void isAlphapet()
{
    char ch;
    printf("enter a character : ");
    scanf(" %c", &ch);
    int asci;
    asci = (int) ch;
    switch(asci)
    {
    case 65 ... 90:
    case 97 ... 122:
        printf("the character is alphabet\n");
        break;
    default :
        printf("it is not a character\n");
    }
}

void posORneg()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("the number is positive\n");
    }
    else if (num <0)
    {
        printf("the number is negative\n");
    }
    else
    {
        printf("the number is zero\n");
    }
}

void simpleCalc()
{
    float num1, num2, result;
    char operation;
    printf("enter the first number : ");
    scanf("%f", &num1);
    printf("enter the second number : ");
    scanf("%f", &num2);
    printf("enter the operator (+,-,*,/): ");
    scanf(" %c", &operation);
    switch(operation)
    {
    case '+' :
        result = num1 + num2;
        break;
    case '-' :
        result = num1 - num2;
        break;
    case '*' :
        result = num1 * num2;
        break;
    case '/' :
        if (num2==0)
        {
            printf("can't divide over zero");

        }
        else
        {
            result = num1 / num2;
        }
        break;
    default :
        printf("invalid operator. \n");
    }
    printf("result is : %f \n", result);
}

void evenOrodd()
{
    int num;
    printf("enter a number : ");
    scanf(" %d", &num);
    if (num %2 == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
}

void toUpperCase()
{
    char ch;
    int result;
    printf("enter a charcter (lowercase) : ");
    scanf(" %c", &ch);
    result = ch - 32;
    printf ("%c\n", result);
}

void isFirstMultipleOfSecond()
{
    int num1, num2;
    printf("enter the first number : ");
    scanf(" %d", &num1);
    printf("enter the second number : ");
    scanf(" %d", &num2);
    if (num1/2 == num2)
    {
        printf("the first is multiple of the second\n");
    }
    else
    {
        printf("it is not\n");

    }
}

void primeNumbers()
{
    int num1, num2;
    printf("enter the start number : ");
    scanf("%d", &num1);
    printf("enter the end number : ");
    scanf("%d", &num2);

    for(int i=num1 ; i<num2; i++)
    {
        int isPrime =1;
        if (i==1 || i==0)
        {
            isPrime =0;
        }
        for(int j=2 ; j<=i/2 && isPrime; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
            }
        }
        if(isPrime)
        {
            printf("%d\n", i);
        }
    }
}

void swapping()
{
    int num1, num2, sum;
    printf("enter the first number : ");
    scanf("%d", &num1);
    printf("enter the second number : ");
    scanf("%d", &num2);
    printf("before swapping the first number is : %d and the second is : %d\n", num1, num2);
    sum = num1 + num2;
    num1 = sum - num1;
    num2 = sum - num1;
    printf("after swapping the first number is : %d and the second is : %d \n", num1, num2);
}
void holesCounting()
{
    int num, count = 0;
    printf("enter a number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        int digit = num%10;
        switch(digit)
        {
        case 0:
        case 4:
        case 6:
        case 9:
            count++;
            break;
        case 8:
            count+=2;
            break;
        }
        num = num /10;
    }
    printf("%d\n", count);
}

void powerOf2()
{
    int num, result;
    printf("enter a number : ");
    scanf("%d", &num);

    int i=1;
    while(i<num)
    {
        i*=2;
    }
    if (i==num)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}
void heatingTime()
{
    int temp, heating;
    printf("enter the water temperature : ");
    scanf("%d", &temp);
    switch(temp)
    {
    case 0 ... 29 :
        heating = 7;
        break;
    case 30 ... 59 :
        heating = 5;
        break;
    case 60 ... 89 :
        heating = 3;
        break;
    case 90 ... 100 :
        heating = 1;
        break;
    default :
        return 0;
    }
    printf("%d\n", heating);
}

void integerFloorOfSum()
{
    float num1, num2, sum;
    printf("enter the first number : ");
    scanf(" %f", &num1);
    printf("enter the second number : ");
    scanf(" %f", &num2);
    sum = num1 + num2;
    printf("the result is : %d\n", (int)sum);
}

void count_ones_32bit()
{
    unsigned int num;
    int count;
    printf("enter a number : ");
    scanf("%u", &num);
    while (num>0)
    {
        if(num & 1)
        {
            count++;
        }
        num >>=1;
    }
    printf("number of ones is : %d\n", count);
}
void count_ones_8bit()
{
    unsigned int num;
    int count;
    printf("enter a number : ");
    scanf("%hhu", &num);
    while (num>0)
    {
        if(num & 1)
        {
            count++;
        }
        num >>=1;
    }
    printf("number of ones is : %d\n", count);
}
void squareNumber()
{
    int num;
    int isSquareNum;
    printf("enter a number : ");
    scanf("%d", &num);

    for(int i=2 ; i*i <= num && (isSquareNum == 0) ; i++)
    {
        isSquareNum = 0;
        int y = i*i;
        if (y==num)
        {
            isSquareNum = 1;
        }
    }
    printf("%d\n", isSquareNum );
}

void powerOf3()
{
    int num, result;
    printf("enter a number : ");
    scanf("%d", &num);

    int i=1;
    while(i<num)
    {
        i*=3;
    }
    if (i==num)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
