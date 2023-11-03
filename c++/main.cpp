#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;

int main()
{
    struct Menu
    {
        string nama;
        double harga;
        int jumlah;
    };

    vector<Menu> daftarMenu(10);
    double totalHarga = 0.0;
    double uangBelanjaan = 0.0;

    const HANDLE kasir = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(kasir, 3);
    cout << "\t\t   =====  Warung Berkah  =====\n";
    cout << endl;

    SetConsoleTextAttribute(kasir, 5);
    string input;
    cout << "Nama Pembeli : "; cin >> input;
    cout << endl;

    SetConsoleTextAttribute(kasir, 14);
    cout << "===============================================================\n";
    cout << endl;

    SetConsoleTextAttribute(kasir, 3);
    cout << "\t=============== Menu Makanan =================\n";
    cout << endl;
    cout << "\t+--------------------------------------------+\n";
    cout << "\t|No.|     Menu Makanan      |     Harga      |\n";
    cout << "\t|--------------------------------------------|\n";
    cout << "\t|1. | Mie Goreng            |  Rp.  8.500,00 |\n";
    cout << "\t|2. | Ayam Geprek           |  Rp. 15.000,00 |\n";
    cout << "\t|3. | Magelangan            |  Rp. 10.000,00 |\n";
    cout << "\t|4. | Nasi Goreng           |  Rp. 12.000,00 |\n";
    cout << "\t|5. | Mie Goreng telur      |  Rp. 10.000,00 |\n";
    cout << "\t|6. | Nasi Oseng ayam       |  Rp. 12.000,00 |\n";
    cout << "\t|7. | Nasi Ayam Rica        |  Rp. 12.000,00 |\n";
    cout << "\t|8. | Ayam Geprek Krisbar   |  Rp. 17.000,00 |\n";
    cout << "\t|9. | Ayam Geprek Mozarella |  Rp. 17.000,00 |\n";
    cout << "\t|10 | Nasi                  |  Rp.  3.000,00 |\n";
    cout << "\t+--------------------------------------------+\n";

    cout << endl;

    daftarMenu[0] = { "Mie Goreng           ", 8500.0, 0 };
    daftarMenu[1] = { "Ayam Geprek          ", 15000.0, 0 };
    daftarMenu[2] = { "Magelangan           ", 10000.0, 0 };
    daftarMenu[3] = { "Nasi Goreng          ", 12000.0, 0 };
    daftarMenu[4] = { "Mie Goreng telur     ", 10000.0, 0 };
    daftarMenu[5] = { "Nasi Oseng ayam      ", 12000.0, 0 };
    daftarMenu[6] = { "Nasi Ayam Rica       ", 12000.0, 0 };
    daftarMenu[7] = { "Ayam Geprek Krisbar  ", 17000.0, 0 };
    daftarMenu[8] = { "Ayam Geprek Mozarella", 17000.0, 0 };
    daftarMenu[9] = { "Nasi                 ", 3000.0, 0 };


    while (true)
    {
        SetConsoleTextAttribute(kasir, 2);
        cout << "\t~ Pilih Menu (1-10) atau 0 untuk selesai  : ";
        int pilihan;
        cin >> pilihan;
        if (pilihan == 0)
        {
            break;
        }
        else if (pilihan >= 1 && pilihan <= 10)
        {
            int index = pilihan - 1;
            SetConsoleTextAttribute(kasir, 6);
            cout << "\t  Masukkan jumlah " << daftarMenu[index].nama << setw(5) << ": ";
            cin >> daftarMenu[index].jumlah;
            totalHarga += daftarMenu[index].harga * daftarMenu[index].jumlah;
        }
        else
        {
            SetConsoleTextAttribute(kasir, 4);
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    }
    cout << endl;
    SetConsoleTextAttribute(kasir, 14);
    cout << "===============================================================\n";
    cout << endl;

    vector<Menu> daftarMenu2(10);

    SetConsoleTextAttribute(kasir, 3);

    cout << "\t=============== Menu Minuman =================\n";
    cout << endl;
    cout << "\t+--------------------------------------------+\n";
    cout << "\t|No.|     Menu Minuman      |     Harga      |\n";
    cout << "\t|--------------------------------------------|\n";
    cout << "\t|1. | Tea Es/Panas          |  Rp. 3.000,00  |\n";
    cout << "\t|2. | Jeruk Es/Panas        |  Rp. 4.000,00  |\n";
    cout << "\t|3. | Milk Tea              |  Rp. 5.000,00  |\n";
    cout << "\t|4. | Kopi                  |  Rp. 3.000,00  |\n";
    cout << "\t|5. | Es Lemon Tea          |  Rp. 5.000,00  |\n";
    cout << "\t|6. | Air Minerak 600 Ml    |  Rp. 3.000,00  |\n";
    cout << "\t+--------------------------------------------+\n";

    cout << endl;

    daftarMenu2[0] = { "Tea Es/Panas         ", 3000.0, 0 };
    daftarMenu2[1] = { "Jeruk Es/Panas       ", 4000.0, 0 };
    daftarMenu2[2] = { "Milk Tea             ", 5000.0, 0 };
    daftarMenu2[3] = { "Kopi                 ", 3000.0, 0 };
    daftarMenu2[4] = { "Es Lemon Tea         ", 5000.0, 0 };
    daftarMenu2[5] = { "Air Minerak 600 Ml   ", 3000.0, 0 };


    while (true)
    {
        SetConsoleTextAttribute(kasir, 2);
        cout << "\t~ Pilih Menu (1-6) atau 0 untuk selesai   : ";
        int pilihan;
        cin >> pilihan;
        if (pilihan == 0)
        {
            break;
        }
        else if (pilihan >= 1 && pilihan <= 6)
        {
            int index = pilihan - 1;
            SetConsoleTextAttribute(kasir, 6);
            cout << "\t  Masukkan jumlah " << daftarMenu2[index].nama << setw(5) << ": ";
            cin >> daftarMenu2[index].jumlah;
            totalHarga += daftarMenu2[index].harga * daftarMenu2[index].jumlah;
        }
        else
        {
            SetConsoleTextAttribute(kasir, 4);
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    }
    cout << endl;
    SetConsoleTextAttribute(kasir, 14);
    cout << "===============================================================\n";
    cout << endl;

    cout << endl;
    SetConsoleTextAttribute(kasir, 1);
    cout << setw(39) << "Total Harga       : " << totalHarga << endl;
    cout << endl;
    SetConsoleTextAttribute(kasir, 4);
    cout << "\tMasukkan uang belanjaan      : ";
    cin >> uangBelanjaan;

    cout << endl;
    SetConsoleTextAttribute(kasir, 14);
    cout << "===============================================================\n";
    cout << endl;

    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(kasir, 9);
    cout << "\t\t === Struk Belanja  ===\n";
    SetConsoleTextAttribute(kasir, 6);
    cout << "--------------------------------------------------------\n";
    cout << " Nama Menu__             Harga      Jumlah      Subtotal\n";
    cout << "--------------------------------------------------------\n";
    for (int i = 0; i < daftarMenu.size(); i++)
    {
        if (daftarMenu[i].jumlah > 0)
        {
            double subtotal = daftarMenu[i].harga * daftarMenu[i].jumlah;
            cout << daftarMenu[i].nama << setw(9) << daftarMenu[i].harga << setw(12) << daftarMenu[i].jumlah << setw(14) << subtotal << endl;
        }
        if (daftarMenu2[i].jumlah > 0)
        {
            double subtotal2 = daftarMenu2[i].harga * daftarMenu2[i].jumlah;
            cout << daftarMenu2[i].nama << setw(9) << daftarMenu2[i].harga << setw(12) << daftarMenu2[i].jumlah << setw(14) << subtotal2 << endl;
        }
    }
    cout << "--------------------------------------------------------\n";
    cout << setw(39) << "Total Harga       : " << setw(17) << totalHarga << endl;
    cout << setw(39) << "Uang Belanjaan    : " << setw(17) << uangBelanjaan << endl;

    double kembalian = uangBelanjaan - totalHarga;
    cout << setw(39) << "Kembalian         : " << setw(17) << kembalian << endl;;
    cout << "--------------------------------------------------------\n";
    cout << endl;
    SetConsoleTextAttribute(kasir, 9);
    cout << "  ================== Thank You! " << input << " ==================" << endl;
    cout << endl;

    SetConsoleTextAttribute(kasir, 14);
    system("pause");
    return 0;
}
