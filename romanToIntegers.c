#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int romanToInt(char* s);
int tradutor (char c);

int main(){
    char numeroEmRomano[15];
    int resultado;

    printf("Digite o numero em especifico em romano:\n");
    scanf("%s",numeroEmRomano);

    resultado = romanToInt(numeroEmRomano);
    printf("%d",resultado);
}
int romanToInt(char* s){
    
    int somaTotal = 0;
    int c1, c2;

    for(int x=0; x<strlen(s); x++){
        c1 = tradutor(s[x]);
       
    if(x + 1 < strlen(s)){
        c2 = tradutor(s[x+1]);
        } else {
        c2 = 0;
        }

        if ( c1 >= c2 ){
            somaTotal = somaTotal + c1;
        }
        else if ( c2>c1 ){
            somaTotal = somaTotal + c2-c1;
            x++;
        }
    }

return somaTotal;
}
int tradutor(char c){
    switch(c){
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default: return 0;
    }
}