## **_BIMBIDOS_**

# 📚 Sistem Antrian Bimbingan Dosen (C++)

**BIMBIDOS** adalah aplikasi konsol berbasis **C++** yang mensimulasikan **sistem antrian (waiting list) bimbingan dosen** dengan dukungan **prioritas mahasiswa**, **estimasi waktu tunggu**, dan **statistik bimbingan sederhana**.  
Aplikasi ini dikembangkan sebagai media latihan penerapan konsep dasar pemrograman untuk mahasiswa **semester 1**.

> Fokus utama pengembangan: logika program jelas, struktur kode rapi, dan kompleksitas tetap proporsional dengan level pembelajaran.

---

## 🎯 Tujuan Pengembangan

Aplikasi ini bertujuan untuk:

- Mensimulasikan proses antrian bimbingan dosen secara sederhana
- Melatih pemahaman konsep dasar pemrograman C++
- Membiasakan penulisan kode yang terstruktur dan modular
- Mengembangkan kemampuan analisis data sederhana melalui statistik

---

## 🧠 Konsep yang Digunakan

Aplikasi menerapkan konsep **antrian (queue)** dengan prinsip **FIFO (First In First Out)**, dengan beberapa penyesuaian kontekstual:

- Mahasiswa dengan status **prioritas** didahulukan
- Mahasiswa **reguler** mengikuti urutan kedatangan
- Statistik bimbingan dihitung selama program berjalan
- Estimasi waktu tunggu ditampilkan berdasarkan posisi antrian

> Seluruh fitur diimplementasikan **tanpa library lanjutan** untuk menjaga ruang lingkup tetap sesuai dengan tujuan pembelajaran.

---

## ✨ Fitur Utama

- ➕ Menambahkan mahasiswa ke dalam antrian bimbingan
- ⚡ Sistem prioritas mahasiswa (prioritas & reguler)
- 📢 Pemanggilan mahasiswa sesuai urutan antrian
- 📋 Menampilkan daftar antrian aktif
- ⏱️ Estimasi waktu tunggu berdasarkan posisi antrian
- 📊 Statistik bimbingan dosen:
  - Total mahasiswa yang telah dibimbing
  - Jumlah mahasiswa prioritas dan reguler
  - Distribusi topik bimbingan
- 🚪 Keluar dari program dengan aman

---

## 🛠️ Teknologi & Materi yang Digunakan

| Materi      | Implementasi                            |
| ----------- | --------------------------------------- |
| Bahasa      | C++                                     |
| Percabangan | `if`, `else`, `switch`                  |
| Perulangan  | `for`, `while`, `do-while`              |
| Function    | Modularisasi fitur                      |
| Array       | Penyimpanan antrian & statistik         |
| Struct      | Representasi data mahasiswa & statistik |

> Catatan: Program **tidak menggunakan `vector`, `queue`, `map`, maupun file I/O** secara sengaja untuk memperkuat pemahaman konsep dasar.

---

## 🧩 Struktur Data

```cpp
struct Mahasiswa {
    string nama;
    string topik;
    int prioritas; // 1 = prioritas, 0 = reguler
};

struct StatistikDosen {
    int totalMahasiswa;
    int prioritasCount;
    int regulerCount;
};
````

---

## ▶️ Cara Menjalankan Program

1. Pastikan compiler C++ telah terpasang (misalnya `g++`)

2. Compile program:

   ```bash
   g++ main.cpp -o antrian
   ```

3. Jalankan program:

   ```bash
   ./antrian
   ```

---

## 📸 Alur Singkat Program

1. Pengguna memilih menu
2. Mahasiswa ditambahkan ke antrian
3. Sistem mengatur urutan antrian berdasarkan prioritas
4. Mahasiswa dipanggil satu per satu
5. Statistik bimbingan diperbarui secara otomatis
6. Pengguna dapat melihat statistik kapan saja

---

## 📊 Statistik Bimbingan

Statistik yang ditampilkan meliputi:

* Total mahasiswa yang telah dibimbing
* Jumlah mahasiswa prioritas dan reguler
* Jumlah bimbingan per topik
* Topik bimbingan yang paling sering muncul

> Statistik ini memberikan **insight sederhana** terhadap pola bimbingan tanpa menambah kompleksitas sistem.

---

## 🚧 Batasan Program

* Data tidak disimpan secara permanen
* Statistik hanya berlaku selama program berjalan
* Sistem hanya mendukung satu dosen
* Tidak terdapat visualisasi grafik

> Batasan ini ditetapkan secara sadar agar aplikasi tetap sesuai dengan level mahasiswa semester awal.

---

## 👨‍💻 Author

**Kelompok 12 — 25SI04**

| NIM        | Nama |
| ---------- | ---- |
| xx.xx.xxxx |      |
| xx.xx.xxxx |      |
| xx.xx.xxxx |      |
| xx.xx.xxxx |      |

**Program Studi** : Sistem Informasi

> Proyek ini dibuat untuk keperluan akademik dan pembelajaran.
> Kode sederhana, tetapi dirancang dan dikembangkan dengan pertimbangan logika yang matang.
