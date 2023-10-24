#include <stdio.h>
#include <stdlib.h>
void equationEvaluation();
void myNameAndGrade();
void convertTemperature();
void areaAndCircumference();
void ASCII_Value();
void relationOfTwoNumbers();
void perfectSquare();
void simpleCalc();
void sumOf100integers();
void fact();
void prime();
void engAlphabet();
void power();
void reverse();
void countDigits();
void halfPyramid();
void invertedPyramid();
void fullPyramid();
void cross_stars();

int main()
{

    printf("Assignment 1\n");
    printf("----------------------------\n");
    printf("printing the results of this equation: Result =  ((num1 + num2) * 3) minus 10 \n");
    equationEvaluation();
    printf("----------------------------\n");
    printf("printing my name and my grade");
    myNameAndGrade();
    printf("----------------------------\n");
    printf("converting temperature from degrees Celsius to degrees Fahrenheit. \n");
    convertTemperature();
    printf("----------------------------\n");
    printf("calculating the area and circumference. \n");
    areaAndCircumference();
    printf("----------------------------\n");
    printf("printing the ASCII value of a character input by the user.\n");
    ASCII_Value();
    printf("----------------------------\n");
    printf("printing the relation between two integer number. \n");
    relationOfTwoNumbers();
    printf("----------------------------\n");
    printf("printing the smallest of three numbers\n");
    smallestOf3integers();
    printf("----------------------------\n");
    printf("checking if the number is perfect square\n");
    perfectSquare();
    printf("----------------------------\n");
    printf("reads a student grade percentage and prints Evaluation\n");
    studentGrade();
    printf("----------------------------\n");
    printf("simple calculator");
    simpleCalc();
    printf("----------------------------\n");
    printf("sum of 100 integers \n");
    sumOf100integers();
    printf("----------------------------\n");
    printf("factorial \n");
    fact();
    printf("----------------------------\n");
    prime();
    printf("----------------------------\n");
    printf("a program to display English alphabets from A to Z.\n");
    engAlphabet();
    printf("\n----------------------------\n");
    printf("Write a program to calculate the power of a number.\n");
    power();
    printf("\n----------------------------\n");
    printf( "Write a program to reverse a number.\n");
    reverse();
    printf("\n----------------------------\n");
    printf( "Write a program to count number of digits in a decimal number.\n");
    countDigits();
    printf("\n----------------------------\n");
    printf("Write a program to display half pyramid using stars\n");
    halfPyramid();
    printf("\n----------------------------\n");
    printf("Write a program to display inverted half pyramid using stars pattern");
    invertedPyramid();
    printf("\n----------------------------\n");
    printf("Write a program to display a full pyramid using stars pattern.");
    fullPyramid();
    printf("\n----------------------------\n");
    printf("cross stars \n");
    cross_stars();
    printf("\n----------------------------\n");


}

void equationEvaluation()
{
    int num1, num2, result;
    printf("enter a number : ");
    scanf("%d", &num1);
    printf("enter another number : ");
    scanf("%d", &num2);
    result = ((num1 + num2) * 3) - 10 ;
    printf("%d\n", result);

}
void myNameAndGrade()
{
    printf("my name is : Salma Sherif Mohamed, my age is : 21.\n");
}
void convertTemperature()
{
    int c;
    float f;
    printf("enter the temperature in celsius : ");
    scanf("%d", &c);
    f = (c * 9) / 5 + 32;
    printf("temperatue in fahrenheit is : %f \n", f);
}

void areaAndCircumference()
{
    float radius, area, circumference;
    printf("enter the radius of the circle : ");
    scanf(" %f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf(" the area of the circle is %f \n the circumference of the circle is %f \n", area, circumference);

}
void ASCII_Value()
{
    char ch;
    printf("enter a character : ");
    scanf(" %c", &ch);
    printf("the ASCII value of the character %c is : %d \n", ch, ch);
}
void relationOfTwoNumbers()
{
    float num1, num2;
    printf("enter the first number : ");
    scanf("%f", &num1);
    printf("enter the second number : ");
    scanf("%f", &num2);
    if (num1 == num2)
    {
        printf("the two numbers are equal.\n");
    }
    else if(num1 > num2)
    {
        printf("the two numbers are not equal, the first contain the higher value.\n");
    }
    else
    {
        printf("the two numbers are not equal, the second contain the higher value.\n");
    }
}
void smallestOf3integers()
{
    int num1, num2, num3;
    printf("enter three integers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int min;
    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if(num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    else
    {
        min = num3;
    }
    printf("%d is the smallest number\n", min);
}
void perfectSquare()
{
    int num;
    int isSquareNum;
    printf("enter a positive number : ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("please enter positive number : ");
        scanf("%d", &num);
    }
    else
    {

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
}
void studentGrade()
{
    int num;
    printf("enter your grade : ");
    scanf("%d", &num);
    if ( num <0 || num > 100)
    {
        printf("please enter a number from 0 to 100. \n");
        scanf("%d", &num);
    }
    else
    {
        if ( num >= 85)
        {
            printf("Excellent");
        }
        else if ( num >= 75)
        {
            printf("very good");
        }
        else if ( num >= 65)
        {
            printf("good");
        }
        else if ( num > 50)
        {
            printf("Pass");
        }
        else if ( num >0 )
        {
            printf("Fail");
        }
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
void sumOf100integers()
{
    int result=0;
    int sum=0;
    for(int i=1; i<=100; i++)
    {
        result+=i;
    }
    printf("%d", result);
    printf(" validating using n*(n+1)/2 formula : \n" );
    sum = (100*(100+1))/2;
    printf("sum is %d", sum);
}
void fact()
{
    int fact =1;
    int num;
    printf("enter a positive integer : ");
    scanf("%d", &num);
    for(int i= 2 ; i<=num; i++)
    {
        fact *= i;
    }
    printf("%d\n", fact);

}

void prime()
{
    int num;
    printf("enter a positive integer : ");
    scanf("%d", &num);
    int flag = 1;
    for(int i=2 ; i <=num/2 && flag ==1 ; i++)
    {
        if(num%i == 0)
        {
            flag =0;
        }
    }
    if (flag == 0)
    {
        printf("it is not prime number");
    }
    else
    {
        printf("it is prime number");
    }

}


void engAlphabet()
{
    int asci_A = 65;
    for (int i = asci_A ; i<91; i++)
    {
        printf("%c  ", i);
    }
}
void power()
{
    int number, power, result=1;
    printf("enter a number : ");
    scanf("%d", &number);
    printf("enter the power : ");
    scanf("%d", &power);
    for (int i = 1 ; i<=power; i++)
    {
        result *=number;
    }
    printf("the result is %d ", result);
}

void reverse()
{
    int number, result=0;
    printf("enter a number : ");
    scanf("%d", &number);
    while(number != 0)
    {
        int digit = number%10;
        result = result * 10 + digit;
        number= number/10;
    }
    printf("the reversed number is : %d", result);
}
void countDigits()
{
    int number, count=0;
    printf("enter a decimal number : ");
    scanf("%d", &number);
    while(number !=0)
    {
        int digit = number%10;
        count++;
        number /= 10;
    }
    printf("%d", count);
}
void halfPyramid()
{
    int size ;
    printf("enter the size : ");
    scanf("%d", &size);
    char array[size][size];

    for (int row =0 ; row<size; row++)
    {
        for ( int col =0 ; col<=row ; col++)
        {
            array[row][col] = '*' ;
        }
    }

    for (int row =0 ; row<size; row++)
    {
        for ( int col =0 ; col<=row ; col++)
        {
            printf("%c\t",array[row][col]);
        }
        printf("\n");
    }
}
void invertedPyramid()
{
    int size ;
    printf("enter the size : ");
    scanf("%d", &size);
    char array[size][size];

    for (int row =0 ; row<size; row++)
    {
        for ( int col =0 ; col< size-row ; col++)
        {
            array[row][col] = '*' ;
        }
    }

    for (int row =0 ; row<size; row++)
    {
        for ( int col =0 ; col< size-row ; col++)
        {
            printf("%c\t",array[row][col]);
        }
        printf("\n");
    }
}

void fullPyramid()
{
    int row, col ;
    printf("enter the row size : ");
    scanf("%d", &row);
    printf("enter the column size ( should be double the size of the row) : ");
    scanf("%d", &col);
    char array[row][col];

    int mid = (col+1)/2;
    int before = mid - 1, after = mid + 1;
    array[0][mid] = '*';


    for ( int j=1 ; j<row; j++)
    {
        for (int i=before ; i<=after; i++)
        {
            array[j][i] = '*' ;
        }
        before--;
        after++;
    }

    for ( int i= 0 ; i<row; i++)
    {
        for (int j=0 ; j<col; j++)
        {
            if(array[i][j] == '*')
            {
                printf("%c\t",array[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

}
void cross_stars()
{
    int size;
    printf("enter the size : ");
    scanf("%d", &size);
    if (size % 2 == 0)
    {
        size++;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j || i + j == size - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}








