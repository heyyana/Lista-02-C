int main()
{
    short a, b;
    
    printf("Informe o valor de a: ");
    scanf("%hd", & a);
    printf("Informe o valor de b: ");
    scanf("%hd", & b);
    
    if((a % b) == 0){
        printf("%hd e %hd são multiplos!", a, b);
    }
    else{
        printf("%hd e %hd não são multiplos!", a, b);
    }
}