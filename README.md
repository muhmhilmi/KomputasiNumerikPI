# Regresi Least-Squares pada Sistem Suspensi Mobil

Proyek UAS Metode Numerik  
Nama: Muhammad Hilmi Al Muttaqi  
NPM: 2306267082  
Kelas: Komputasi Numerik 02  
Fakultas Teknik Universitas Indonesia

## Deskripsi Proyek
Proyek ini bertujuan untuk membangun model regresi linear least-squares dari data eksperimen sistem suspensi mobil. Data yang digunakan menunjukkan hubungan antara displacement (meter) dan gaya (x10⁴ N). Model ini dikembangkan menggunakan bahasa C, dengan hasil regresi:

F(x) = 180.2269x - 12.8979

dan memiliki Mean Squared Error (MSE) sebesar **55.283630**, yang menunjukkan bahwa model cukup akurat untuk pemodelan awal.

## Data
Data diambil dari Tabel P20.49 buku *Applied Numerical Methods with MATLAB* oleh Steven Chapra.

| x (m) | F (10⁴ N) |
|-------|-----------|
| 0.10  | 10        |
| 0.17  | 20        |
| 0.27  | 30        |
| 0.35  | 40        |
| 0.39  | 50        |
| 0.42  | 60        |
| 0.43  | 70        |
| 0.44  | 80        |

## Struktur File
- `regresi_linear.c` – kode utama untuk menghitung model regresi dan prediksi
- `README.md` – dokumentasi proyek

## Cara Menjalankan
1. Buka terminal/command prompt.
2. Kompilasi program:
   gcc regresi_linear.c -o regresi
3. Jalankan program:
   ./regresi

## Video Demonstrasi
Klik link sebelah ini untuk menonton di YouTube: 

📚 Referensi
- S. C. Chapra, Applied Numerical Methods with MATLAB, 4th ed., McGraw-Hill, 2018.
- D. Montgomery and E. A. Peck, Introduction to Linear Regression Analysis, Wiley, 2012.




