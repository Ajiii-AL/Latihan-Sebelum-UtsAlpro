#include <stdio.h>

void TukarNilai( int *a, int *b, int c);

int main(){
    int a,b,c;
    
    TukarNilai(&a, &b, c);

    printf("setelah di tukar : \n");
    printf("A = %d \n", a);
    printf("B = %d \n", b);

    return 0;
}

void TukarNilai( int *a, int *b, int c){
    
    printf("=============================\n");
    printf("masukkan nilai a :");
    scanf("%d", &*a);
    printf("masukkan nilai b :");
    scanf("%d", &*b);

    printf("sebelum di tukar : \n");
    printf("A = %d \n", *a);
    printf("B = %d \n", *b);

    c = *a;
    *a = *b;
    *b = c;
}