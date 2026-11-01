#include <stdio.h>

// Fungsi sekarang cukup menerima jumlah transaksi dan mengembalikan total pembayaran akhir
int prosesTransaksi(int jumlahTransaksi);

int main(){
    int jumlahTrans;
    int totalPembayaran = 0;

    printf("=================================\n");
    printf("masukkan jumlah transaksi : ");
    scanf("%d", &jumlahTrans);
    printf("=================================\n");

    // Panggil fungsi dan tampung total akhirnya
    totalPembayaran = prosesTransaksi(jumlahTrans);

    // Cetak total pembayaran di akhir program
    printf("Total pembayaran: %d\n", totalPembayaran);

    return 0;
}

int prosesTransaksi(int jumlahTransaksi){
    int harga, jumlah, subtotal, diskon, pembayaran;
    int akumulasiTotal = 0; // Untuk menjumlahkan semua pembayaran

    for(int i = 0; i < jumlahTransaksi; i++){
        printf("\nTransaksi %d\n", i+1);
        printf("Harga barang: ");
        scanf("%d", &harga);
        printf("Jumlah barang: ");
        scanf("%d", &jumlah);

        // 1. Hitung Subtotal per transaksi
        subtotal = jumlah * harga;

        // 2. Hitung Diskon per transaksi (jika subtotal > 100rb dapat diskon 10%)
        if (subtotal > 100000){
            diskon = subtotal * 10 / 100;
        } else {
            diskon = 0;
        }

        // 3. Hitung Pembayaran per transaksi
        pembayaran = subtotal - diskon;

        // 4. Tambahkan ke akumulasi total keseluruhan
        akumulasiTotal += pembayaran;

        // Cetak detail per transaksi sesuai format yang Anda minta
        printf("Subtotal: %d\n", subtotal);
        printf("Diskon: %d\n", diskon);
        printf("Pembayaran: %d\n", pembayaran);
    }
    
    printf("\n=================================\n");
    
    // Kembalikan nilai akumulasi total ke main
    return akumulasiTotal;
}