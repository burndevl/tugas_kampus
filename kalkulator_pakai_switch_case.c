#include <stdio.h>

// tempat simpan angka
int angka_pertama;
int angka_kedua;

// tempat simpan data pilihan dan hasil
int pilihan;
int hasil;

void masukan_angka() {
    printf("Masukan angka Pertama :");
    scanf("%d", &angka_pertama);
    printf("Masukan angka Kedua :");
    scanf("%d", &angka_kedua);
}

void rumus_perkalian() {
    hasil = angka_pertama * angka_kedua;
}
void rumus_pertambahan() {
    hasil = angka_pertama + angka_kedua;
}
void rumus_pengurangan() {
    hasil = angka_pertama - angka_kedua;
}
void rumus_pembagian() {
    hasil = angka_pertama / angka_kedua;
}

int main() {


printf("KALKULATOR SIMPLE DENGAN C \n");
printf("NO 1. PERKALIAN (*)\nNO 2. PERTAMBAHAN (+)\nNO 3. PEMBAGIAN (/)\nNO 4. PENGURANGAN (-)\n");
printf("MASUKAN PILIHAN KAMU : ");
scanf("%d", &pilihan);


switch (pilihan)
{
case 1:
    printf("\nSELAMAT DATANG DI OPERATOR PERKALIAN\n");
    // ambil func dari void lek
   masukan_angka();
    // rumus perkalian
    rumus_perkalian();
    // output
    printf("Hasilnya menggunakan rumus perkalian adalah : %d", hasil);
    break;
case 2:
    printf("\nSELAMAT DATANG DI OPERATOR PERTAMBAHAN\n");
    // ambil func dari void lek
   masukan_angka();
    // rumus pertambahan
    rumus_pertambahan();
    // output
    printf("Hasilnya menggunakan rumus pertambahan adalah : %d", hasil);
    break;
case 3:
    printf("\nSELAMAT DATANG DI OPERATOR PEMBAGIAN\n");
    // ambil func dari void lek
   masukan_angka();
    // rumus pembagian
    rumus_pembagian();
    // output
    printf("Hasilnya menggunakan rumus pembagian adalah : %d", hasil);
    break;
case 4:
    printf("\nSELAMAT DATANG DI OPERATOR PENGURANGAN\n");
    // ambil func dari void lek
   masukan_angka();
    // rumus pengurangan
    rumus_pengurangan();
    // output
    printf("Hasilnya menggunakan rumus pengurangan adalah : %d", hasil);
    break;

default:
    printf("Pilihan kamu tidak ada.");
    break;
}

// printf("pilihan kamu %d ", pilihan); //debug pilihan

return 0;

}