// Nama : Notesa Aldinasari 
// NIM: 20230140173



// 1. Contoh deklarasi variable :	
#include<iostream>
using namespace std;
 
int main(){
 std::string nama = "notesa"; 
int umur = 18;
double tinggi = 159,9;
bool belum menikah = true; 
float nilaiUjian = 85.0f; 

std::cout << nama << " " << umur <<" 
return 0

} 
// Pada deklarasi variable diatas itu menggunakan int bertipe interger , bool bertipe boolean, flot bertipe float. 


// 2. Contoh implementasi  dari prosedur dan fungsi: 
// -Fungsi hitungLuasPersegiPanjang menerima dua parameter, panjang dan lebar, yang merupakan tipe double.
// -Fungsi menghitung luas persegi panjang dengan mengalikan panjang dan lebar.
// -Hasil perhitungan dikembalikan sebagai nilai double.
// -Fungsi main berisi program utama yang meminta input dari pengguna, menghitung luas persegi panjang dengan memanggil fungsi, dan menampilkan hasil ke layar.

// 3. contoh implementasi looping : 
#include <iostream>
using namespace std;

int main() {
    // Mencetak angka dari 1 hingga 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
//  - Menggunakan loop for untuk mencetak angka dari 1 hingga 10
// - Menggunakan loop while untuk memeriksa apakah suatu bilangan genap
// - Menggunakan loop do-while untuk menghitung jumlah digit dalam suatu bilangan bulat

// 4. contoh implementasi conditional statment
//pada if diatas  akan menjalankan blok kode di dalam kurung kurawal jika nilai nilaiUjian lebih besar dari atau sama dengan 75. 
//Jika kondisi tidak terpenuhi, blok kode di dalam else akan dieksekusi.

//5. contoh implementasi struct 
// struct Orang didefinisikan dengan tiga anggota: nama, usia, dan alamat. Kemudian, variabel struct orang 
// dideklarasikan dan diinisialisasi dengan nilai-nilai yang sesuai. Terakhir, data variabel struct ditampilkan ke konsol.

// 6. 
#include <iostream> 
using namespace std;

// Fungsi untuk menghitung rata-rata kualitas udara
int main() 
{
double hitungRataRataKualitasUdara(const vector <double>& dataSensor) {
    double total = 0;
    for (double nilai : dataSensor) {
        total += nilai;
    }
    return total / dataSensor.size();
}

// Fungsi untuk memeriksa status kualitas udara
string periksaKualitasUdara(const vector<double>& dataSensor) {
    double rataRata = hitungRataRataKualitasUdara(dataSensor);
    if (rataRata > 75 || any_of(dataSensor.begin(), dataSensor.end(), [](double nilai) { return nilai >= 45; })) {
        return "Tidak Sehat";
    }
    else {
        return "Sehat";
    }
}

// Fungsi untuk menampilkan hasil pemantauan
void tampilkanHasil(const map<string, string>& dataKualitasUdara) {
    cout << "\nHasil Pemantauan Kualitas Udara:" << endl;
    for (const auto& [kota, status] : dataKualitasUdara) {
        cout << kota << ": " << status << endl;
    }

    int jumlahSehat = 0; 
    int jumlahTidakSehat = 0;
    for (const auto& [kota, status] : dataKualitasUdara) {
        if (status == "Sehat") {
            jumlahSehat++;
        }
        else {
            jumlahTidakSehat++;
        }
    }
    cout << "\nTotal Lokasi Sehat: " << jumlahSehat << endl;
    cout << "Total Lokasi Tidak Sehat: " << jumlahTidakSehat << endl;
}

// Fungsi utama
int main() {
    map<string, string> dataKualitasUdara;

    do {
        string namaKota;
        cout << "Masukkan nama kota: ";
        getline(cin, namaKota);

        vector <double> dataSensor;
        for (int i = 0; i < 3; i++) {
            double nilaiSensor;
            cout << "Nilai sensor " << i + 1 << ": ";
            cin >> nilaiSensor;
            dataSensor.push_back(nilaiSensor);
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string statusKualitasUdara = periksaKualitasUdara(dataSensor);
        dataKualitasUdara[namaKota] = statusKualitasUdara;

        tampilkanHasil(dataKualitasUdara);

        char ulang;
        cout << "\nUlangi program? (y/t): ";
        cin >> "ulang"; 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (tolower(ulang) == 'y');

    return 0; 