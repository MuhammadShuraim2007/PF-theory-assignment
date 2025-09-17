#include <stdio.h>

int main(){
    int x;
    int y;

    printf("Welcome to quadrant recognizer\n");

    printf("enter the value of X: \n");
    scanf("%d" , &x);

    printf("enter the value of Y: \n");
    scanf("%d" , &y);

    if (x>0 && y>0)
    {
        printf("The point in first quadrant");
    }else if (x < 0 && y > 0)
    {
        printf("The point tis in second quadrant");
    }else if (x < 0 && y < 0)
    {
        printf("The point is in third quadrant");
    }else if (x > 0 && y < 0)
    {
        printf("The point is in fourth quadrant");
    }


    return 0;
}