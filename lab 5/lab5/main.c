#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5, y=8;
    printf("method 1\n");
    swap_way1(&x,&y);
    printf("method 2\n");
    swap_way2(&x,&y);
    printf("method 3\n");
    swap_way3(&x,&y);

}

void swap_way1(int *x, int *y)
{
    printf("before");
    printf (" x is %d and y is %d\n",*x,*y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("after");
    printf (" x is %d and y is %d\n",*x,*y);

}

void swap_way2(int *x, int *y)
{
    printf("before");
    printf (" x is %d and y is %d\n",*x,*y);
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    printf("after");
    printf (" x is %d and y is %d\n",*x,*y);
}

void swap_way3(int *x, int *y){
    printf("before");
    printf (" x is %d and y is %d\n",*x,*y);
    *x = *x * *y;
    *y = *x / *y;
    *x = *x / *y;
    printf("after");
    printf (" x is %d and y is %d\n",*x,*y);
}
