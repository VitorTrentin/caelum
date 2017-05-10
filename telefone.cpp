#include <stdlib.h>
#include <stdio.h>

int main(){
    char linha[31];
    char telefone[31];
    while(scanf("%s\n", linha)!= EOF){
        for(int i=0; i< sizeof(linha);i++){
            if(linha[i]=='A' || linha[i]=='B'||linha[i]=='C'){
                telefone[i]='2';
            } else if(linha[i]=='D' || linha[i]=='E'||linha[i]=='F'){
                telefone[i]='3';
            }else if(linha[i]=='G' || linha[i]=='H'||linha[i]=='I'){
                telefone[i]='4';
            }else if(linha[i]=='J' || linha[i]=='K'||linha[i]=='L'){
                telefone[i]='5';
            }else if(linha[i]=='M' || linha[i]=='N'||linha[i]=='O'){
                telefone[i]='6';
            }else if(linha[i]=='P' || linha[i]=='Q'||linha[i]=='R'|| linha[i]=='S'){
                telefone[i]='7';
            }else if(linha[i]=='T' || linha[i]=='U'||linha[i]=='V'){
                telefone[i]='8';
            }else if(linha[i]=='W' || linha[i]=='X'||linha[i]=='Y'||linha[i]=='Z'){
                telefone[i]='9';
            }else{
                telefone[i]=linha[i];
            }
        }
        printf("%s\n", telefone);
    }
}


