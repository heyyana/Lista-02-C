int main()
{
    int ano, mes, dia, resultado;
    
    printf("Informe sua idade em anos, meses e dias: ");
    scanf("%d %d %d", & ano, & mes, & dia);
    
    printf("A sua idade expressa em dias é: %d", resultado = (ano * 365) + (mes * 30) + dia);
}