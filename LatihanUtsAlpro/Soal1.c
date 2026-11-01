#include <stdio.h>

void penghitungLuas(int panjang, int lebar, int *luas);
void penghitungKeliling(int panjang, int lebar, int *keliling);

int main(){
    int p;
    int l;
    int hasilLuas;
    int hasilKeliling;

    printf("===============================\n");
    printf("Masukan Panjang : ");
    scanf("%d", &p);
    printf("masukan lebar : ");
    scanf("%d", &l);

    penghitungLuas(p, l, &hasilLuas);
    penghitungKeliling(p, l, &hasilKeliling);

    printf("hasil dari luas persegi panjang adalah : %d\n", hasilLuas);
    printf("hasil dari keliling pesegi panjang adalah :%d\n", hasilKeliling);

    return 0;
}

void penghitungLuas(int panjang, int lebar, int *luas){
    *luas = panjang * lebar;
}

void penghitungKeliling(int panjang, int lebar, int *keliling){
    *keliling = 2 * (panjang + lebar);
}