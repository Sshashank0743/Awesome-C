int main(int argc, char const *argv[])
{
    int num, index=0;
    printf("Enter your number\n");
    scanf("%d", &num);
    do{
        printf("%d", index+1);
        index = index +1;
    }while(index < num);
    return 0;
}
