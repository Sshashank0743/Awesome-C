# include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have entered %d as your current age\n", age);
    if(age>20){
        printf("You can vote.");
    }else{
        printf("You are not eligible for voting.");
    }
    return 0;
}
