int main()
{
    int cod, qtd;
    float preco;
    
    printf("Informe o código do produto: ");
    scanf("%d", & cod);
    printf("Informe a quantidade: ");
    scanf("%d", & qtd);
    
    if (cod == 1001 || cod == 987){
        printf("Total a pagar: R$ %g", preco = 5.32 * qtd);
    }
    else if(cod == 1324 || cod == 7623){
        printf("Total a pagar: R$ %g", preco = 6.45 * qtd);
    }
    else if(cod == 6548){
        printf("Total a pagar: R$ %g", preco = 2.37 * qtd);
    }
    else{
        printf("Produto não encontrado!");
    }
}