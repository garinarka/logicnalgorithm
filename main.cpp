#include <iostream>
#include <string>
using namespace std;

const int MAX = 10;

struct Antrian
{
    string nama;
    string topik;
};

// Deklarasi fungsi
void tampilMenu();
void tambahAntrian(Antrian q[], int &belakang);
void panggilAntrian(Antrian q[], int &depan, int &belakang);
void lihatAntrian(Antrian q[], int depan, int belakang);

int main()
{
    Antrian queue[MAX];
    int depan = 0, belakang = 0;
    int pilihan;

    do
    {
        tampilMenu();
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1)
        {
            tambahAntrian(queue, belakang);
        }
        else if (pilihan == 2)
        {
            panggilAntrian(queue, depan, belakang);
        }
        else if (pilihan == 3)
        {
            lihatAntrian(queue, depan, belakang);
        }
        else if (pilihan == 0)
        {
            cout << "Program selesai. Semoga bimbingannya lancar.\n";
        }
        else
        {
            cout << "Pilihan tidak valid.\n";
        }

        cout << endl;
    } while (pilihan != 0);

    return 0;
}

void tampilMenu()
{
    cout << "=== ANTRIAN BIMBINGAN DOSEN ===\n";
    cout << "1. Tambah antrian\n";
    cout << "2. Panggil mahasiswa berikutnya\n";
    cout << "3. Lihat antrian\n";
    cout << "0. Keluar\n";
}

void tambahAntrian(Antrian q[], int &belakang)
{
    if (belakang >= MAX)
    {
        cout << "Antrian penuh. Tunggu giliran berikutnya.\n";
        return;
    }

    cout << "Nama mahasiswa: ";
    getline(cin, q[belakang].nama);
    cout << "Topik bimbingan: ";
    getline(cin, q[belakang].topik);

    belakang++;
    cout << "Mahasiswa berhasil masuk antrian.\n";
}

void panggilAntrian(Antrian q[], int &depan, int &belakang)
{
    if (depan == belakang)
    {
        cout << "Antrian kosong.\n";
        return;
    }

    cout << "Memanggil:\n";
    cout << "Nama  : " << q[depan].nama << endl;
    cout << "Topik : " << q[depan].topik << endl;

    depan++;
}

void lihatAntrian(Antrian q[], int depan, int belakang)
{
    if (depan == belakang)
    {
        cout << "Antrian masih kosong.\n";
        return;
    }

    cout << "Daftar Antrian:\n";
    for (int i = depan; i < belakang; i++)
    {
        cout << (i - depan + 1) << ". "
             << q[i].nama << " - "
             << q[i].topik << endl;
    }
}
