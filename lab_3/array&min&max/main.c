#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("enter the size of the array : ");
    scanf("%d", &size);
    int array[size];

    // enter elements
    for(int i=0; i<size; i++){
        int val;
        printf("enter element in the array : ");
        scanf("%d", &val);
        array[i] = val;
    }
    // display elements
    for(int i = 0; i < size; ++i) {
     printf("%d \n", array[i]);
    }

    // max & min
    int x = array[0];
    int y = array[0];
    for (int i=0; i<size; i++){
        if(array[i]>x){
            x=array[i];
        }
        else if (array[i]<y){
            y=array[i];
        }

    }
    printf("the maximum number is : %d \n", x);
    printf("the minimum number is : %d \n", y);
    return 0;
}
