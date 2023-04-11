int main()
{
    int dia, mes, ano;
    
    printf("Informe sua idade em dias: ");
    scanf("%d", & dia);
    
    mes = dia / 30;
    ano = dia / 365;
    
    printf(" A sua idade é de %d meses \n Sua idade é de %d anos \n Sua idade é de %d dias", mes, ano, dia);
}