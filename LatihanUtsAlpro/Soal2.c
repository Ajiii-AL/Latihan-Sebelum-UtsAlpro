#include <stdio.h>

char penyeleksiNilai(int nilai);

int main(){
    int nilai;
    char hasil;

    printf("=================================\n");
    printf("masukan nilai :");
    scanf("%d", &nilai);

    hasil = penyeleksiNilai(nilai);

    printf("hasil dari penyeleksi nilai adalah : %C\n", hasil);

    return 0;
}


char penyeleksiNilai(int nilai){
    if(nilai >= 90 && nilai <= 100){
        return 'A';
    }else if(nilai >= 80 && nilai < 90){
        return 'B';
    }else if(nilai >= 70 && nilai < 80){
        return 'C';
    }else if(nilai >= 60 && nilai < 70){
        return 'D';
    }else{
        return 'E';
    }
}