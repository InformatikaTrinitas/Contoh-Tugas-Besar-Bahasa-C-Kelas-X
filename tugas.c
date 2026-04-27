#include <stdio.h>

// Fungsi untuk menghitung total harga
float hitungTotal(float harga, int jumlah) {
    return harga * jumlah;
}

// Fungsi untuk menghitung diskon
float hitungDiskon(float total) {
    if (total > 100000) {
        return total * 0.1; // diskon 10%
    } else {
        return 0;
    }
}

// Prosedur untuk menampilkan hasil
void tampilkanHasil(float total, float diskon) {
    printf("\n===== STRUK PEMBELIAN =====\n");
    printf("Total Harga   : %.2f\n", total);
    printf("Diskon        : %.2f\n", diskon);
    printf("Total Bayar   : %.2f\n", total - diskon);
}

int main() {
    // Variabel
    int jumlahBarang, i, jumlah;
    float harga, total = 0, subtotal;

    // Input jumlah barang
    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlahBarang);

    // Perulangan
    for (i = 1; i <= jumlahBarang; i++) {
        printf("\nBarang ke-%d\n", i);

        printf("Masukkan harga: ");
        scanf("%f", &harga);

        printf("Masukkan jumlah: ");
        scanf("%d", &jumlah);

        // Operator + fungsi
        subtotal = hitungTotal(harga, jumlah);
        total += subtotal;
    }

    // Percabangan + fungsi
    float diskon = hitungDiskon(total);

    // Output
    tampilkanHasil(total, diskon);

    return 0;
}
