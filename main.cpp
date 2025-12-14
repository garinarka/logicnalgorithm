#include <iostream>
#include <string>
using namespace std;

const int MAX = 10;

struct Antrian
{
    string nama;
    string topik;
    int prioritas; // 1 = mendesak, 2 = normal, 3 = santai
};

// Deklarasi fungsi
void tampilMenu();
void tambahAntrian(Antrian q[], int &jumlah);
void panggilAntrian(Antrian q[], int &jumlah);
void lihatAntrian(Antrian q[], int jumlah);

int main()
{
    Antrian queue[MAX];
    int jumlah = 0;
    int pilihan;

    do
    {
        tampilMenu();
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1)
        {
            tambahAntrian(queue, jumlah);
        }
        else if (pilihan == 2)
        {
            panggilAntrian(queue, jumlah);
        }
        else if (pilihan == 3)
        {
            lihatAntrian(queue, jumlah);
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
    cout << "=== ANTRIAN BIMBINGAN DOSEN (PRIORITAS) ===\n";
    cout << "1. Tambah antrian\n";
    cout << "2. Panggil mahasiswa\n";
    cout << "3. Lihat antrian\n";
    cout << "0. Keluar\n";
}

void tambahAntrian(Antrian q[], int &jumlah)
{
    if (jumlah >= MAX)
    {
        cout << "Antrian penuh.\n";
        return;
    }

    Antrian baru;
    cout << "Nama mahasiswa : ";
    getline(cin, baru.nama);
    cout << "Topik bimbingan: ";
    getline(cin, baru.topik);
    cout << "Prioritas (1=mendesak, 2=normal, 3=santai): ";
    cin >> baru.prioritas;
    cin.ignore();

    if (baru.prioritas < 1 || baru.prioritas > 3)
    {
        cout << "Prioritas tidak valid.\n";
        return;
    }

    int i = jumlah - 1;
    while (i >= 0 && q[i].prioritas > baru.prioritas)
    {
        q[i + 1] = q[i];
        i--;
    }

    q[i + 1] = baru;
    jumlah++;

    cout << "Mahasiswa berhasil ditambahkan ke antrian.\n";
}

void panggilAntrian(Antrian q[], int &jumlah)
{
    if (jumlah == 0)
    {
        cout << "Antrian kosong.\n";
        return;
    }

    cout << "Memanggil:\n";
    cout << "Nama  : " << q[0].nama << endl;
    cout << "Topik : " << q[0].topik << endl;
    cout << "Prioritas : " << q[0].prioritas << endl;

    for (int i = 0; i < jumlah - 1; i++)
    {
        q[i] = q[i + 1];
    }
    jumlah--;
}

void lihatAntrian(Antrian q[], int jumlah)
{
    if (jumlah == 0)
    {
        cout << "Antrian kosong.\n";
        return;
    }

    cout << "Daftar Antrian:\n";
    for (int i = 0; i < jumlah; i++)
    {
        cout << i + 1 << ". "
             << q[i].nama << " | "
             << q[i].topik << " | "
             << "Prioritas: " << q[i].prioritas << endl;
    }
}
