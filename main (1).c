#include <stdio.h>

int main() {
    int length, width, area;

    // Input dari user
    printf("Masukkan panjang: ");
    scanf("%d", &length);

    printf("Masukkan lebar: ");
    scanf("%d", &width);

    // Menghitung luas
    area = length * width;

    // Menampilkan hasil
    printf("Luas persegi panjang adalah: %d\n", area);

    return 0;
}
