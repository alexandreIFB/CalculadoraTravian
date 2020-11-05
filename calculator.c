#include <stdio.h>

int main(){
    double valorTotalCampo = 42180;
    double valorTotalCeleiro = 14.020;
    double valorAtualCereal = 117000;
    double resto = valorAtualCereal - ((2*valorTotalCampo) + valorTotalCeleiro);
    printf("Resto de cereal = %.2lf\n",resto);


    double valorCeasaris = 2170;
    double tempoCeasaris = (22*60) + 44;

    double valorImperatris = 600;
    double tempoImperatris = 17*60;

    double proporcaoTempo = tempoCeasaris / tempoImperatris;


    double juntos = valorCeasaris + (valorImperatris
    *proporcaoTempo);

    double quantidadeJuntos = resto / juntos;

    double quantidadeCeasis = quantidadeJuntos;
    double quantidadeImperatris = quantidadeJuntos*proporcaoTempo;

    printf("Você deve fazer:\n%.2lf Ceasis\n%.2lf Imperatris\nPara que fiquem o mesmo tempo funcionando\n",quantidadeCeasis,quantidadeImperatris);


    double campoCereal[3] = [ 11810, 15815, 11810, 3375 ];
    double celeiro[3] = [ 4155 , 5190, 3635 , 1040]
    double Imperiano[3] = [150, 160, 210, 80]
    double Ceasis[3] = [550, 640,800 , 180];

    double npc[3] = [ 
        (2*campoCereal[0])+ celeiro[0] + (quantidadeImperatris*Imperatris[0]) +(quantidadeCeasis*Ceasis[0]),
        (2*campoCereal[1])+ celeiro[1] + (quantidadeImperatris*Imperatris[1]) +(quantidadeCeasis*Ceasis[1]),
        (2*campoCereal[2])+ celeiro[2] + (quantidadeImperatris*Imperatris[2]) +(quantidadeCeasis*Ceasis[2]),
        (2*campoCereal[3])+ celeiro[3] + (quantidadeImperatris*Imperatris[3]) +(quantidadeCeasis*Ceasis[3]),
    ];
    
    printf("O NPC deve se feito com as seguintes quantidade:\nMadeira = %.2lf\nBarro = %.2lf\nFerro = %.2lf\nCereal = %.2lf\n", npc[0],npc[1],npc[2],npc[3]);

}