#include <stdio.h>
#include <stdlib.h>
#include "salma.h"
int row =3;
int size = 100;


q1()
{
    int rows, cols;
    printf("enter number of rows: ");
    scanf("%d", &rows);
    printf("enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("enter the elements :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("average of each column:\n");
    for (int j = 0; j < cols; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += arr[i][j];
        }
        double average = (double)sum / rows;
        printf("column %d: %f\n", j + 1, average);
    }

}
void q2()
{
    int row, col;
    printf("enter rows size : ");
    scanf("%d", &row);
    printf("enter columns size : ");
    scanf("%d", &col);


    int matrix1[row][col], matrix2[row][col], result[row][col];


    printf("enter elements of first matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter element matrix 1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }


    printf("enter elements of second matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter element matrix 2 [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("result matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}


void q3()
{
    char str[size];
    printf("enter characters : \n");
    int flag = 1;
    int i = 0;

    while(i < size && flag == 1)
    {
        char c;
        scanf("%c", &c);
        if (c == '\n')
        {
            flag = 0;
        }
        else
        {
            str[i] = c;
            i++;
        }

    }
    str[i] = '\0';
    printf("%s", str);
}
void q4()
{
    printf("enter a character : ");
    while (1)
    {
        char key;
        key = getch();

        switch(key)
        {
        case -32:
            break;
        case 72:
            printf("Extended key it's ascii code is 72");
            break;
        case 75:
            printf("Extended key it's ascii code is 75");
            break;
        case 77:
            printf("Extended key it's ascii code is 77");
            break;
        case 80:
            printf("Extended key it's ascii code is 80");
            break;
        default:
            printf("Normal Key its key is %d", key);
            break;
        }
    }
}

void q5()
{
    char firstName[30];
    char lastName[30];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("Your full name is: %s %s\n", firstName, lastName);

}

void q7()
{
    char str[size];
    int chCount[256] = {0};
    printf("enter a string: ");
    scanf("%s", str);
    int i=0;
    while(str[i] != '\0')
    {
        int asci = (int)str[i];
        chCount[asci]++;
        i++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (chCount[i] > 0)
        {
            printf("'%c' %d times\n", (char)i, chCount[i]);
        }
    }
}

void q8()
{
    char str1[100];
    char str2[100];
    printf("enter a string : ");
    scanf("%s",str1);
    for (int i=0 ; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    printf("printing the copy of the string %s", str2);
}

void q9()
{
    char str[100];
    printf("enter a string : \n");
    scanf("%s", str);
    int i = 0;
    int count =0;

    while(str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d", count);
}


void q10()
{
    char str[100];
    printf("enter a string : ");
    scanf("%s",str);
    int i=0;
    while(str[i] != '\0')
    {
        int c = (int) str[i];
        switch(c)
        {
        case 65 ... 90:
        case 97 ... 122:
            printf("%c", str[i]);
            break;
        }
        i++;
    }
}
void q11()
{
    char ch[100];
    printf("enter a string : ");
    scanf("%s", &ch);
    int i=0;
    while(ch[i] != '\0')
    {
        int c = (int) ch[i];
        if ( c >= 97 && c<=122)
        {
            c-=32;
        }
        i++;
        printf("%c", (char)c);
    }
}
