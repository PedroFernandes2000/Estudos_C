#include <stdio.h>
#include <locale.h>



int main() {
    setlocale(LC_ALL,"Portuguese");
    int  l[3];
    printf("escreva os 3 lados do triânglo:\n");
    for(int i = 0 ; i < 3 ; i++){
        scanf("%i",&l[i]);
    }
    if(( l[0] + l[1] > l[2]) && ( l[1] + l[2] > l[0] ) && ( l[2] + l[0] > l[1] )){
        if()
    }
    
    return 0;
}

