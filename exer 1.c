int main()
{
    short a,b,c;
    
    printf("Informe o valor de a: ");
    scanf("%hd", & a);
    printf("Informe o valor de b: ");
    scanf("%hd", & b);
    printf("Informe o valor de c: ");
    scanf("%hd", & c);
    
    if (a > b && a > c){
        printf("O maior número é o A = %hd", a);
    }
    else if(b > a && b > c){
        printf("O maior número é o B = %hd", b);
    }
    else{
        printf("O maior número é o C = %hd", c);
    }
}