int main()
{
    float altura, peso = 0.0;
    char sexo;
    
    printf("Informe M para masculino e F para feminino: ");
    scanf("%c", & sexo);
    printf("Informe a sua altura: ");
    scanf("%f", & altura);
    
    if(sexo == 'M'){
        peso = ((72.7 * altura) - 58);
        printf("O seu peso ideal é: %3.f", peso);
    }
    else if(sexo == 'F'){
        peso = ((62.1 * altura) - 44.7);
        printf("O seu peso ideal é: %.3f", peso);
    }
    else{
        printf("Resposta invalida!");
    }
}