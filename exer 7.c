int main()
{
    short i;
    float a, b, c;
    
    printf("Informe um número de 1 a 3: ");
    scanf("%hd", & i);
    printf("Informe três números reais: ");
    scanf("%g%g%g", &a, &b, &c);
    
    if(i == 1){
        if (c > a && c > b && b > a){
            printf("A ordem crescente é %g %g %g", a, b, c);//
        }
        else if (a > b && a > c && c > b){
            printf("A ordem crescente é %g %g %g", b, c, a);//
        }
        else if (a > b && a > c && b > c){
            printf("A ordem crescente é %g %g %g", c, b, a);//
        }
        else if(c > a && c > b && a > b){
            printf("A ordem crescente é %g %g %g", b, a, c);//
        }
        else if (b > a && b > c && c > b){
            printf("A ordem crescente é %g %g %g", a, c, b);//
        }
        else if (b > a && b > c && a > c){
            printf("A ordem crescente é %g %g %g", c, a, b);//
        }
    }
    if (i == 2){
        if (c < a && c < b && b < a){
            printf("A ordem decrescente é %g %g %g", a, b, c);//
        }
        else if (a < b && a < c && c < b){
            printf("A ordem decrescente é %g %g %g", b, c, a);//
        }
        else if (a < b && a < c && b < c){
            printf("A ordem decrescente é %g %g %g", c, b, a);//
        }
        else if(c < a && c < b && a < b){
            printf("A ordem decrescente é %g %g %g", b, a, c);//
        }
        else if (b < a && b < c && c < b){
            printf("A ordem decrescente é %g %g %g", a, c, b);//
        }
        else if (b < a && b < c && a < c){
            printf("A ordem decrescente é %g %g %g", c, a, b);//
        }
    }
    if (i == 3){
        if (c < a && c < b && a < b){
	    printf("O maior número fica no meio: %g e %g e %g",a,b,c);
	}
	else if (a < b && a < c && b < c){
            printf("O maior número fica no meio: %g %g %g", b, c, a);//
        }
        else if (a < b && a < c && c < b){
            printf("O maior número fica no meio: %g %g %g", c, b, a);//
        }
        else if(c < a && c < b && b < a){
            printf("O maior número fica no meio: %g %g %g", b, a, c);//
        }
        else if (b < a && b < c && a < c){
            printf("O maior número fica no meio: %g %g %g", a, c, b);//
        }
        else if (b < a && b < c && c < a){
            printf("O maior número fica no meio: %g %g %g", c, a, b);//
        }
    }
}