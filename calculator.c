#include <stdio.h>

int main()
{
    double valorTotalCampo = 42180;
    double valorTotalCeleiro = 14.020;
    double valorAtualCereal = 117000;
    double resto = valorAtualCereal - ((2 * valorTotalCampo) + valorTotalCeleiro);
    printf("Resto de cereal = %.2lf\n", resto);

    double valorCeasaris = 2170;
    double tempoCeasaris = (22 * 60) + 44;

    double valorImperatris = 600;
    double tempoImperatris = 17 * 60;

    double proporcaoTempo = tempoCeasaris / tempoImperatris;

    double juntos = valorCeasaris + (valorImperatris * proporcaoTempo);

    double quantidadeJuntos = resto / juntos;

    double quantidadeCeasis = quantidadeJuntos;
    double quantidadeImperatris = quantidadeJuntos * proporcaoTempo;

    printf("Você deve fazer:\n"
           "%.2lf Ceasis\n"
           "%.2lf Imperatris\n"
           "Para que fiquem o mesmo tempo funcionando\n",
           quantidadeCeasis, quantidadeImperatris);

    double campoCereal[4] = {11810, 15815, 11810, 3375};
    double celeiro[4] = {4155, 5190, 3635, 1040};
    double Imperiano[4] = {150, 160, 210, 80};
    double Ceasis[4] = {550, 640, 800, 180};

    double npc[4] = {
        (2 * campoCereal[0]) + celeiro[0] + (quantidadeImperatris * Imperiano[0]) + (quantidadeCeasis * Ceasis[0]),
        (2 * campoCereal[1]) + celeiro[1] + (quantidadeImperatris * Imperiano[1]) + (quantidadeCeasis * Ceasis[1]),
        (2 * campoCereal[2]) + celeiro[2] + (quantidadeImperatris * Imperiano[2]) + (quantidadeCeasis * Ceasis[2]),
        (2 * campoCereal[3]) + celeiro[3] + (quantidadeImperatris * Imperiano[3]) + (quantidadeCeasis * Ceasis[3]),
    };

    printf("O NPC deve se feito com as seguintes quantidades:\n"
           "Madeira = %.2lf\n"
           "Barro = %.2lf\n"
           "Ferro = %.2lf\n"
           "Cereal = %.2lf\n",
           npc[0], npc[1], npc[2], npc[3]);
}