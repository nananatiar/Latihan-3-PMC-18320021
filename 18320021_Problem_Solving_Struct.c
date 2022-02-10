#include <stdio.h>
//Fannan Bachtiar
//18320021
//Program Menampilkan Nama dan NIM Mahasiswa yang Presensinya Kurang Dari 80%
struct mhs {
    int nim;
    char nama[80];
    float presensi;
    };

struct mhs kls[40] = {{13220099, "Boenga Trakhir", 75.5}, {13220098, "Ooga Boogawati", 85.5}, {13220120, "Ramboo Tan", 100.0}, {13220199, "Ooga Booga Telat", 65.5},
                        {18320199, "Sussy Baka", 70.0}, {13220199, "Robi N Hut", 62.5} }; 

int main() {
    printf("Daftar Siswa yang Tidak Boleh Ikut Ujian :\n");
    int i;

    for (i = 0; i<5; ++i) // mahasiswa di kelas hanya 6
    {
    if (kls[i].presensi < 80.0){
        printf("- %d %s. Presensi : %0.2f %\n", kls[i].nim, kls[i].nama, kls[i].presensi);
    }
    }
return(0);
}
