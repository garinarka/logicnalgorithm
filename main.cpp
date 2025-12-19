#include <iostream>
using namespace std;

const int MAX = 50;
const int MAX_TOPIK = 10;

// ================= STRUCT =================
struct Mahasiswa
{
    string nama;
    string topik;
    int prioritas; // 1 = prioritas, 0 = reguler
};

struct StatistikDosen
{
    int totalMahasiswa;
    int prioritasCount;
    int regulerCount;
};

// ================= GLOBAL =================
Mahasiswa antrian[MAX];
int front = 0, rear = 0;

string daftarTopik[MAX_TOPIK];
int jumlahTopik[MAX_TOPIK];
int totalTopik = 0;

StatistikDosen stats = {0, 0, 0};

// ================= FUNCTION =================
void menu();
void tambahAntrian();
void panggilMahasiswa();
void tampilkanAntrian();
void tampilkanStatistik();
void catatTopik(string topik);
void resetAntrianJikaKosong();

// ================= MAIN =================
int main()
{
    int pilihan;

    do
    {
        menu();
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan)
        {
        case 1:
            tambahAntrian();
            break;
        case 2:
            panggilMahasiswa();
            break;
        case 3:
            tampilkanAntrian();
            break;
        case 4:
            tampilkanStatistik();
            break;
        case 0:
            cout << "Program selesai. Semoga bimbingan lancar.\n";
            break;
        default:
            cout << "Menu tidak valid.\n";
        }
    } while (pilihan != 0);

    return 0;
}

// ================= IMPLEMENTATION =================
void menu()
{
    cout << "\n=== SISTEM ANTRIAN BIMBINGAN DOSEN ===\n";
    cout << "1. Tambah Antrian Bimbingan\n";
    cout << "2. Panggil Mahasiswa\n";
    cout << "3. Tampilkan Antrian\n";
    cout << "4. Lihat Statistik Bimbingan\n";
    cout << "0. Keluar\n";
}

void tambahAntrian()
{
    if (rear >= MAX)
    {
        cout << "Antrian penuh.\n";
        return;
    }

    Mahasiswa m;
    cout << "Nama Mahasiswa: ";
    getline(cin, m.nama);

    cout << "Topik Bimbingan: ";
    getline(cin, m.topik);

    cout << "Prioritas? (1 = Ya, 0 = Tidak): ";
    cin >> m.prioritas;
    cin.ignore();

    if (m.prioritas == 1)
    {
        // Geser antrian reguler ke belakang
        int i = rear;
        while (i > front && antrian[i - 1].prioritas == 0)
        {
            antrian[i] = antrian[i - 1];
            i--;
        }
        antrian[i] = m;
    }
    else
    {
        antrian[rear] = m;
    }

    rear++;
    cout << "Mahasiswa berhasil ditambahkan ke antrian.\n";
}

void panggilMahasiswa()
{
    if (front == rear)
    {
        cout << "Antrian kosong.\n";
        return;
    }

    Mahasiswa m = antrian[front];
    front++;

    cout << "\nMemanggil Mahasiswa:\n";
    cout << "Nama   : " << m.nama << endl;
    cout << "Topik  : " << m.topik << endl;
    cout << "Status : " << (m.prioritas ? "Prioritas" : "Reguler") << endl;

    // Statistik
    stats.totalMahasiswa++;
    if (m.prioritas)
        stats.prioritasCount++;
    else
        stats.regulerCount++;

    catatTopik(m.topik);
    resetAntrianJikaKosong();
}

void tampilkanAntrian()
{
    if (front == rear)
    {
        cout << "Antrian kosong.\n";
        return;
    }

    int waktuPerMahasiswa = 15;

    cout << "\n=== DAFTAR ANTRIAN ===\n";
    for (int i = front; i < rear; i++)
    {
        int posisi = i - front;
        cout << posisi + 1 << ". "
             << antrian[i].nama
             << " | " << antrian[i].topik
             << " | " << (antrian[i].prioritas ? "Prioritas" : "Reguler")
             << " | Estimasi Tunggu: "
             << posisi * waktuPerMahasiswa << " menit"
             << endl;
    }
}

void tampilkanStatistik()
{
    cout << "\n=== STATISTIK BIMBINGAN DOSEN ===\n";
    cout << "Total Mahasiswa Dibimbing : " << stats.totalMahasiswa << endl;
    cout << "Mahasiswa Prioritas       : " << stats.prioritasCount << endl;
    cout << "Mahasiswa Reguler         : " << stats.regulerCount << endl;

    cout << "\nTopik Bimbingan:\n";
    for (int i = 0; i < totalTopik; i++)
    {
        cout << "- " << daftarTopik[i]
             << " : " << jumlahTopik[i] << endl;
    }
}

void catatTopik(string topik)
{
    for (int i = 0; i < totalTopik; i++)
    {
        if (daftarTopik[i] == topik)
        {
            jumlahTopik[i]++;
            return;
        }
    }

    if (totalTopik < MAX_TOPIK)
    {
        daftarTopik[totalTopik] = topik;
        jumlahTopik[totalTopik] = 1;
        totalTopik++;
    }
}

void resetAntrianJikaKosong()
{
    if (front == rear)
    {
        front = rear = 0;
    }
}
