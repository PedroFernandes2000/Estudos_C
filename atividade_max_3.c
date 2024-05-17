#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int n1 , n2 , result;
    char op;
    
    printf("Escreva 2 números\n");
    scanf("%d ",&n1);
    scanf("%d",&n2);
    printf("Escolha um operação:\n *\n +\n / \n - \n ");
    scanf("%s",&op);
    
    switch(op){
        case '*':
            result = n1 * n2;
            break;
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        default:
            printf("operacao invalida");
            break;
    }
    
    printf(" resultado igual a %d", result);
    
    return 0;
}