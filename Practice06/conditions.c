#include <stdio.h>

int main()
{
    int Maths;
    int Science;
    int English;

    printf("Enter your Maths number\n");
    scanf("%d", &Maths);
    printf("Enter your Science number\n");
    scanf("%d", &Science);
    printf("Enter your English number\n");
    scanf("%d", &English);

    if(Maths>=33 && Science>=33 && English>=33){
        printf("You will get gift worth 500/-");
    }else if(Maths<33 && Science>=33 && English>=33){
        printf("You will get gift worth 400/-");
    }else if(Maths<33 && Science<33 && English>=33){
        printf("You will get gift worth 300/-");
    }else{
        printf("You are not eligible for gift");
    }
    return 0;
}
