#include <stdio.h> // Library untuk fungsi input/output

int main() {
    // Data eksperimen
    int n = 8; // Jumlah data
    double x[] = {0.10, 0.17, 0.27, 0.35, 0.39, 0.42, 0.43, 0.44}; // Data x
    double y[] = {10, 20, 30, 40, 50, 60, 70, 80}; // Data y

    // Variabel untuk menyimpan jumlah
    double sum_x = 0, sum_y = 0, sum_xx = 0, sum_xy = 0; // Inisialisasi variabel untuk menyimpan jumlah

    // Menghitung jumlah-jumlah yang dibutuhkan
    for (int i = 0; i < n; i++) { // Loop untuk menghitung jumlah
        sum_x += x[i]; // Menjumlahkan semua nilai x
        sum_y += y[i]; // Menjumlahkan semua nilai y
        sum_xx += x[i] * x[i]; // Menjumlahkan kuadrat dari nilai x
        sum_xy += x[i] * y[i]; // Menjumlahkan hasil kali x dan y
    }

    // Menghitung koefisien regresi
    double a = (n * sum_xy - sum_x * sum_y) / (n * sum_xx - sum_x * sum_x); // Menghitung gradien (a)
    double b = (sum_y - a * sum_x) / n; // Menghitung intercept (b)

    // Menampilkan persamaan regresi
    printf("Persamaan regresi linear: F(x) = %.4lf x + %.4lf\n", a, b); // Menampilkan persamaan regresi

    // Menampilkan prediksi
    printf("\nData Prediksi:\n"); // Header untuk data prediksi
    printf("x (m)\tF_aktual\tF_prediksi\n"); // Header tabel
    for (int i = 0; i < n; i++) { // Loop untuk menghitung dan menampilkan prediksi
        double y_pred = a * x[i] + b; // Menghitung nilai prediksi
        printf("%.2lf\t%.2lf\t\t%.2lf\n", x[i], y[i], y_pred); // Menampilkan x, y aktual, dan y prediksi
    }

    // Menghitung Mean Squared Error (MSE)
    double mse = 0; // Inisialisasi variabel MSE
    for (int i = 0; i < n; i++) { // Loop untuk menghitung MSE
        double y_pred = a * x[i] + b; // Menghitung nilai prediksi
        mse += (y[i] - y_pred) * (y[i] - y_pred); // Menjumlahkan kuadrat error
    }
    mse /= n; // Membagi total error dengan jumlah data
    printf("\nMean Squared Error (MSE): %.6lf\n", mse); // Menampilkan nilai MSE

    return 0; // Mengembalikan nilai 0 untuk menandakan program selesai dengan sukses
}
