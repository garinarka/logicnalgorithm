## **_BIMBIDOS_**

# 📚 Sistem Antrian Bimbingan Dosen (C++)

Aplikasi konsol berbasis **C++** yang mensimulasikan **sistem antrian bimbingan dosen** dengan dukungan **prioritas mahasiswa** dan **statistik bimbingan** sederhana.  
Dikembangkan sebagai latihan penerapan konsep dasar pemrograman untuk mahasiswa **semester 1**.

> Fokus utama: logika program jelas, struktur rapi, dan kompleksitas tetap masuk akal.

---

## 🎯 Tujuan Pengembangan

Aplikasi ini dibuat untuk:

- Mensimulasikan proses antrian bimbingan dosen
- Melatih pemahaman konsep dasar pemrograman C++
- Membiasakan penulisan kode yang terstruktur sejak awal
- Menunjukkan kemampuan analisis sederhana melalui statistik

---

## 🧠 Konsep yang Digunakan

Aplikasi menerapkan konsep **antrian (queue)** dengan prinsip **FIFO (First In First Out)**, dengan penyesuaian:

- Mahasiswa **prioritas** didahulukan
- Mahasiswa **reguler** mengikuti urutan masuk
- Statistik dihitung selama program berjalan

> Semua fitur diimplementasikan **tanpa library lanjutan** untuk menjaga scope pembelajaran.

---

## ✨ Fitur Utama

- ➕ Menambahkan mahasiswa ke antrian bimbingan
- ⚡ Sistem prioritas (prioritas & reguler)
- 📢 Pemanggilan mahasiswa sesuai urutan antrian
- 📋 Menampilkan daftar antrian aktif
- 📊 Statistik bimbingan dosen:
  - Total mahasiswa dibimbing
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

> Catatan: Program **tidak menggunakan `vector`, `queue`, `map`, atau file I/O** secara sengaja.

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
```

---

## ▶️ Cara Menjalankan Program

1. Pastikan compiler C++ terpasang (misalnya `g++`)
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

1. User memilih menu
2. Mahasiswa ditambahkan ke antrian
3. Sistem mengatur urutan berdasarkan prioritas
4. Mahasiswa dipanggil satu per satu
5. Statistik bimbingan diperbarui otomatis
6. User dapat melihat statistik kapan saja

---

## 📊 Statistik Bimbingan

Statistik yang ditampilkan meliputi:

- Total mahasiswa yang telah dibimbing
- Jumlah mahasiswa prioritas dan reguler
- Jumlah bimbingan per topik

> Statistik ini membantu memberikan **insight sederhana** terhadap proses bimbingan tanpa kompleksitas berlebih.

---

## 🚧 Batasan Program

- Data tidak disimpan permanen
- Statistik hanya berlaku selama program berjalan
- Tidak ada sistem multi-dosen
- Tidak ada visualisasi grafik

> Batasan ini dibuat **secara sadar** agar program tetap sesuai level mahasiswa semester awal.

---

## 👨‍💻 Author

**Kelompok 12 — 25SI04**

| NIM        | Nama |
| ---------- | ---- |
| xx.xx.xxxx |      |
| xx.xx.xxxx |      |
| xx.xx.xxxx |      |
| xx.xx.xxxx |      |

**Program Studi** : _Sistem Informasi_

> Proyek ini dibuat untuk keperluan akademik dan pembelajaran.
> Kode sederhana, tapi ditulis dengan niat.
