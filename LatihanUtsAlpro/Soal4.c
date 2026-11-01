#include <stdio.h>

float hitungRataRata( float hasilRata);

int main(){
    float hasilRata;

    hasilRata = hitungRataRata(hasilRata);

    printf("Rata-rata : %.2f", hasilRata);
    return 0;
}

float hitungRataRata(float hasilRata){
    
    float nilai1, nilai2, nilai3;

    printf("=================================\n");
    printf("masukkan nilai 1 : ");
    scanf("%f", &nilai1);
    printf("masukkan nilai 2 : ");
    scanf("%f", &nilai2);
    printf("masukkan nilai 3 : ");
    scanf("%f", &nilai3);

    hasilRata = (nilai1 + nilai2 + nilai3) / 3.0;

    return hasilRata;
}