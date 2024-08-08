#include<stdio.h>

int main(){
    //define variable
    int length, breadth;

    // // get input from user
    printf("Enter length ");
    scanf("%d", &length);

    printf("Enter breadth ");
    scanf("%d", &breadth);

    printf("The area of this reactangle is %d", length*breadth);
    return 0;
}