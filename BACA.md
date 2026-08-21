[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: GPL-3.0](https://img.shields.io/badge/License-GPL-%2D3.0-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/license/gpl-3.0)
![GitHub last commit](https://img.shields.io/github/last-commit/cakraawijaya/Conveyor-with-PWM-Speed-and-Item-Counting?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Arduino%20&%20STM8-light.svg?style=flat&logo=STMicroelectronics&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-EW%20Project%20Challenge%202026-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Conveyor with PWM Speed and Item Counting
Proyek ini menggabungkan konveyor mini dengan sistem penghitung barang otomatis. Sistem ini terdiri dari dua papan mikrokontroler (Arduino Pro Mini dan STM8S103F3P6), yang masing-masing bekerja secara independen namun tetap saling melengkapi. Arduino Pro Mini bertanggung jawab atas pengendalian motor konveyor, termasuk pengaturan kecepatan dan arah putaran motor. STM8S103F3P6 berfungsi sebagai modul penghitung barang otomatis yang menampilkan hasil perhitungan secara lokal melalui LCD I2C.

Kecepatan konveyor diatur menggunakan potensiometer, sedangkan arah putaran motor dikendalikan melalui push button. Penghitungan barang dilakukan menggunakan laser dan sensor LDR. Ketika barang menghalangi pancaran laser, sistem akan mendeteksinya dan menambahkan jumlah hitungan yang kemudian ditampilkan pada LCD. Proyek ini diharapkan dapat menjadi solusi otomasi yang sederhana dan terjangkau untuk meningkatkan efisiensi serta mengurangi kesalahan dalam penghitungan barang, sekaligus menjadi media pembelajaran mengenai kendali motor, sensor, dan sistem tertanam yang dapat dikembangkan lebih lanjut untuk kebutuhan otomasi industri.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | • Arduino Pro Mini<br>• STM8S103F3P6 |
| Editor Kode | Arduino IDE 1.8.19 (Versi Lama yang Stabil) |
| Alat Pemrogram | • USB PL2303<br>• USB FTDI (Alternatif USB PL2303)<br>• ST-Link/V2 |
| Alat Komunikasi Serial | USB FTDI |
| Driver | • PL2303 USB Driver<br>• ST-Link USB Driver<br>• CDM FTDI USB Driver |
| Protokol Komunikasi | Inter Integrated Circuit (I2C) |
| Bahasa Pemrograman | C/C++ |
| Pustaka Arduino | LiquidCrystal_I2C (bawaan) |
| Aktuator | Gear Motor / Motor DC (x1) |
| Sensor | • Modul Sensor LDR (x1)<br>• KY-008: Modul Pemancar Laser 5V (x1) |
| Layar | LCD I2C (x1) |
| Komponen Lainnya| • Kabel USB Mini - USB tipe A (x1)<br>• Socket female jack DC (x1)<br>• Kabel USB Mikro - JST 2 pin (x1)<br>• Kabel jumper (1 set)<br>• PCB Dot Matrix Single Layer 10cm x 22cm (x1)<br>• Adaptor DC 5V 2A (x1)<br>• Adaptor DC 12V 2A (x1)<br>• Motor driver L298N (x1)<br>• Potensiometer (x1)<br>• Tombol tekan 12 x 12 mm (x3)<br>• PVC Lembaran 3 mm 10 x 50 cm (x5)<br>• Beton Baja Stainless Steel 30 cm (x1)<br>• Bantalan Bearing 6mm (x3)<br>• Pipa 1/2 Inchi 25 cm (x1)<br>• Kain Oscar 50 x 137 cm (x1)<br>• Stiker kayu (x2)<br>• Braket L (x24)<br>• Isolasi listrik PVC (x3)<br>• Sandpaper G-180 1 m (x1)<br>• Velg Smart Car (x1)<br>• Hexagonal Spacer Female to Female M3 x 12 (x4)<br>• Hexagonal Spacer Female to Male M3 x 20 (x4)<br>• Baut M3 x 8 (x8)<br>• Baut M3 x 20 (x12)<br>• Baut M3 x 30 (x2)<br>• Baut M5 x 25 (x8)<br>• Baut M5 x 20 (x32)<br>• Mur M3 (x14)<br>• Mur M5 (x40)<br>• Header Pin Female Single Row 1x40 (x2)<br>• Header Pin Male Double Row 2x40 (x2)<br>• Header Pin Female Double Row 2x40 (x2) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://bit.ly/ArduinoIDE_Installer
   ```

   </td></tr></table><br>

2. PL2303 USB Driver

   <table><tr><td width="810">
   
   ```
   https://bit.ly/PL2303P_USBdriver
   ```

   </td></tr></table><br>

3. ST-Link USB Driver

   <table><tr><td width="810">
   
   ```
   https://bit.ly/STLink_USBdriver
   ```

   </td></tr></table><br>
   
4. CDM FTDI USB Driver

   <table><tr><td width="810">
   
   ```
   https://bit.ly/CDM_FTDI_USBdriver
   ```

   </td></tr></table>
   
<br><br>

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Block Diagram.jpg" alt="block-diagram"></td>
<td><img src="Assets/Documentation/Diagram/Pictorial Diagram.jpg" alt="pictorial-diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Table/Device Wiring.jpg" alt="wiring"></td>
</tr>
</table>

<br><br>

## Pengaturan USB PL2303 & Arduino Pro Mini
<img width="840" src="Assets/Documentation/Diagram/Arduino Pro Mini with PL2303.jpg" alt="pl2303-arduino-pro-mini-configuration"><br><br>

<h3><img src="https://github.com/user-attachments/assets/932b96eb-cbc7-42f1-8938-43cb431889a5" width="16" height="16"> Catatan :</h3>
<blockquote>
   <ul>
   <li>
   
   ``` Arduino Pro Mini ``` ini tidak dilengkapi dengan ``` port USB ```, sehingga anda membutuhkan perangkat tambahan berupa ``` USB to TTL Serial ``` untuk dapat terhubung ke laptop ataupun PC. ``` USB to TTL Serial ``` seperti ``` USB PL2303 ``` ini biasa digunakan untuk media perantara dalam pengunggahan suatu program.
   
   </li>
   <li>
   
   Pemasangan kabel antara ``` USB PL2303 ``` dengan board ``` Arduino Pro Mini ``` dapat anda lihat selengkapnya pada gambar di atas.
   
   </li>
   <li>
   
   Untuk mengunggah program, selain menggunakan ``` USB PL2303 ```, anda juga dapat menggunakan alat pemrogram lainnya seperti: ``` USB CP2102 ```, ``` USB CH340 ```, atau dengan ``` USB FTDI ```. Berdasarkan pengalaman, saya akui bahwa penggunaan ``` USB FTDI ``` atau ``` USB CP2102 ``` itu jauh lebih baik daripada ``` USB PL2303 ``` maupun ``` USB CH340 ```. Saya merekomendasikan metode alternatif ini karena saya sering mengalami kegagalan pengunggahan saat menggunakan ``` USB PL2303 ```. Hal ini biasanya terjadi ketika waktu reset manual tidak selaras dengan proses pengunggahan. Contoh error-nya ditunjukkan di bawah ini.
   
   </li>
   
   <img width="810" height="250" src="Assets/Documentation/Experiment/Arduino Pro Mini Upload Failed.jpg" alt="upload-failed">
   </ul>
</blockquote>

<br><br>

## Pengaturan USB FTDI & Arduino Pro Mini (Metode Alternatif)
<img width="840" src="Assets/Documentation/Diagram/Arduino Pro Mini with FTDI (Alternative).jpg" alt="ftdi-arduino-pro-mini-configuration"><br><br>

<h3><img src="https://github.com/user-attachments/assets/932b96eb-cbc7-42f1-8938-43cb431889a5" width="16" height="16"> Catatan :</h3>
<blockquote>
   <ul>
   <li>
   
   Pemasangan kabel antara ``` USB FTDI ``` dengan board ``` Arduino Pro Mini ``` dapat anda lihat selengkapnya pada gambar di atas.
   
   </li>
   <li>
   
   Mengunggah program menggunakan ``` USB FTDI ``` umumnya lebih mudah dan lebih andal karena perangkat ini dapat secara otomatis mereset ``` Arduino Pro Mini ``` melalui pin ``` DTR ```. Artinya, anda tidak perlu lagi menekan tombol ``` Reset ``` secara manual setiap kali mengunggah program.
   
   </li>
   <li>
   
   Jika Anda tidak memiliki perangkat ``` USB FTDI ```, anda dapat menggunakan perangkat ``` USB CP2102 ``` sebagai gantinya, karena pengaturannya hampir sama.
   
   </li>
   </ul>
</blockquote>

<br><br>

## Pengaturan ST-Link/V2 & STM8S103F3P6
<img width="840" src="Assets/Documentation/Diagram/STM8S103F3P6 with ST-Link V2.jpg" alt="stlink-stm8s103f3p6-configuration"><br><br>

<h3><img src="https://github.com/user-attachments/assets/932b96eb-cbc7-42f1-8938-43cb431889a5" width="16" height="16"> Catatan :</h3>
<blockquote>
   <ul>
   <li>
   
   Modul antarmuka kabel tunggal atau ``` SWIM ``` pada dasarnya digunakan untuk berkomunikasi dengan board ``` STM8 ```.

   </li>
   <li>
   
   Pemasangan kabel antara ``` ST-Link/V2 ``` dengan board ``` STM8S103F3P6 ``` dapat anda lihat selengkapnya pada gambar di atas.
   
   </li>
   <li>
   
   Berdasarkan pengalaman pribadi, ``` STM8 ``` hanya dapat diprogram dengan ``` ST-Link ```.
   
   </li>
   </ul>
</blockquote>

<br><br>

## Menghilangkan proteksi penulisan pada STM8S103F3P6
Proteksi penulisan pada board ``` STM8S103F3P6 ``` dapat dihilangkan melalui beberapa tahapan, antara lain :<br><br>
1. Hubungkan board ``` STM8S103F3P6 ``` ke ``` ST-Link/V2 ```, lalu hubungkan ``` ST-Link/V2 ``` ke PC atau laptop.<br><br>

2. Buka ``` CMD (Command Prompt) ```.<br><br>

3. Masuk ke dalam direktori :

   <table><tr><td width="810">

   ``` C:\Users\[Computer Name]\AppData\Local\Arduino15\packages\sduino\tools\STM8Tools\2019.02.05\win ```

   </td></tr></table><br>

4. Masukkan perintah :

   <table><tr><td width="810">
   
   ```
   stm8flash -cstlinkv2 -pstm8s103?3 -u
   ```

   </td></tr></table><br>
   
5. Tekan ``` Enter ```, lalu hasilnya dapat anda lihat seperti gambar di bawah ini.
   
   <img width="810" height="250" src="Assets/Documentation/Experiment/Remove Protection STM8.jpg" alt="stm8-rmv-protection">

<br><br>

## Memindai Alamat I2C Yang Ada Pada LCD (STM8S103F3P6)
<table><tr><td width="840">

```ino
/*
  =====================================================
  I2C Scanner untuk STM8S103F3P6
  by: Devan Cakra Mudra Wijaya, S.Kom.
  =====================================================

  Fungsi:
  - Mendeteksi seluruh perangkat I2C yang terhubung
  - Menampilkan alamat perangkat dalam format HEX
  - Menampilkan jumlah perangkat yang ditemukan


  =====================================================
  Pin SDA dan SCL untuk STM8S103F3P6
  =====================================================
  SDA -> PB5
  SCL -> PB4
*/

// Memanggil library I2C untuk komunikasi I2C
#include "I2C.h"

// Konstanta untuk menentukan jeda antar scan (5000 ms = 5 detik)
const uint16_t SCAN_INTERVAL = 5000;


// Fungsi setup() dijalankan satu kali saat board pertama kali menyala atau reset
// Digunakan untuk inisialisasi perangkat keras, komunikasi serial, sensor, modul, dan konfigurasi awal program
void setup() {

  // Memulai komunikasi Serial dengan baud rate 9600
  Serial_begin(9600);

  // Menunggu selama 5 detik sebelum program dimulai
  delay(5000);

  // Menampilkan header program
  Serial_println_s("====================================");
  Serial_println_s("         I2C DEVICE SCANNER         ");
  Serial_println_s("by: Devan Cakra Mudra Wijaya, S.Kom.");
  Serial_println_s("====================================");

  // Mencetak baris kosong
  Serial_println_s("");

  // Menginisialisasi komunikasi I2C
  I2C_begin();
}


// Fungsi loop() dijalankan terus-menerus setelah Fungsi setup() selesai
// Seluruh logika utama program biasanya ditempatkan di dalam fungsi ini
void loop() {

  // Variabel untuk menyimpan kode error hasil komunikasi I2C
  uint8_t error;

  // Variabel untuk menyimpan alamat I2C yang sedang diperiksa
  uint8_t address;

  // Variabel penghitung jumlah device yang ditemukan
  uint8_t deviceCount = 0;

  // Menampilkan informasi bahwa proses scan dimulai
  Serial_println_s("------------------------------------");
  Serial_println_s("Scanning I2C bus...");
  Serial_println_s("------------------------------------");

  // Melakukan perulangan dari alamat 1 sampai 126
  // Alamat I2C valid adalah 0x01 sampai 0x7E
  for (address = 1; address < 127; address++) {

    // Melakukan transaksi penulisan I2C (driver I2C STM8)
    // Digunakan untuk menguji respons ACK dari perangkat
    // Kode kesalahan bergantung pada implementasi driver I2C
    error = I2C_write(address, 0x00);

    // Jika tidak ada error, maka:
    if (error == 0) {

      // Menampilkan informasi device ditemukan
      Serial_print_s("[FOUND] Device at address 0x");

      // Jika alamat kurang dari 16, maka:
      // Tambahkan angka 0 di depan agar format HEX rapi
      if (address < 16) {
        Serial_print_s("0");
      }

      // Menampilkan alamat dalam format HEX
      Serial_print_ub(address, HEX);
      Serial_println_s("");

      // Menambah jumlah device yang ditemukan
      deviceCount++;
    }

    // Jika terjadi error tidak dikenal, maka:
    else if (error == 4) {

      // Menampilkan pesan error
      Serial_print_s("[ERROR] Unknown error at address 0x");

      // Jika alamat kurang dari 16, maka:
      // Tambahkan angka 0 di depan agar format HEX rapi
      if (address < 16) {
        Serial_print_s("0");
      }

      // Menampilkan alamat yang bermasalah dalam format HEX
      Serial_print_ub(address, HEX);
      Serial_println_s("");
    }

    // Jika error selain 0 atau 4, maka:
    // Diabaikan, biasanya ini terjadi karena tidak ada perangkat pada alamat tersebut
  }

  // Mencetak baris kosong
  Serial_println_s("");

  // Jika tidak ada device ditemukan, maka:
  if (deviceCount == 0) {

    // Tampilkan pesan tidak ada device
    Serial_println_s("No I2C devices found.");
  }
  else { // Jika setidaknya satu perangkat ditemukan, maka:

    // Menampilkan jumlah device yang ditemukan
    Serial_print_s("Total devices found: ");

    // Menampilkan nilai deviceCount
    Serial_print_ub(deviceCount, DEC);
    Serial_println_s("");
  }

  // Menampilkan informasi waktu scan berikutnya
  Serial_print_s("Next scan in ");

  // Mengubah milidetik menjadi detik
  Serial_print_ub(SCAN_INTERVAL / 1000, DEC);

  // Menampilkan satuan detik
  Serial_println_s(" seconds.");

  // Baris kosong
  Serial_println_s("\n");

  // Menunggu selama 5 detik sebelum scan ulang
  delay(SCAN_INTERVAL);
}
```

</td></tr></table><br><br>

## Pengaturan USB FTDI & STM8S103F3P6
<img width="840" src="Assets/Documentation/Diagram/STM8S103F3P6 with FTDI.jpg" alt="ftdi-stm8s103f3p6-configuration"><br><br>

<h3><img src="https://github.com/user-attachments/assets/932b96eb-cbc7-42f1-8938-43cb431889a5" width="16" height="16"> Catatan :</h3>
<blockquote>
   <ul>
   <li>
   
   Komunikasi serial pada board ``` STM8S103F3P6 ``` ini sangat dimungkinkan terjadi, terutama untuk keperluan ``` Serial Monitor ``` dan ``` Serial Plotter ```. Alat yang dapat dipakai untuk komunikasi serial antara lain: ``` USB CP2102 ```, ``` USB CH340 ```, ``` USB FTDI ```, atau dengan ``` USB PL2303 ```.

   </li>
   <li>
   
   Pemasangan kabel antara ``` USB FTDI ``` dengan board ``` STM8S103F3P6 ``` dapat anda lihat detailnya pada gambar di atas.
   
   </li>
   </ul>
</blockquote>

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek dengan cara klik ``` File ``` -> ``` Open ``` :

   <table><tr><td width="810">
   
      • ``` pwm_conveyor.ino ```
      
      • ``` auto_counter.ino ```

   </td></tr></table><br>
   
2. Isi ``` Url Pengelola Papan Tambahan ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` File ``` -> ``` Preferences ``` -> masukkan ``` Boards Manager Url ``` dengan menyalin tautan berikut :
   
      ```
      https://raw.githubusercontent.com/tenbaht/sduino/master/package_sduino_stm8_index.json
      ```

   </td></tr></table><br>
   
3. ``` Pengaturan Board ``` di Arduino IDE

   <table>
      <tr><th>
         
      i
         
      </th><th width="780">
            
      Cara mengatur board ``` Arduino Pro Mini ```
   
      </th></tr>
      <tr><td colspan="2" width="780">

      Pilih papan dengan mengklik: ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Pro or Pro Mini ```.
              
      </td></tr>
   </table><br><table>
      <tr><th>
         
      ii
         
      </th><th width="775">

      Cara mengatur board ``` STM8S103F3P6 ```
            
      </th></tr>
      <tr><td colspan="2" width="775">

      • Klik bagian ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Instal ``` Sduino STM8 plain C core (non-C++) ```.

      • Kemudian pilih papan dengan mengklik: ``` Tools ``` -> ``` Board ``` -> ``` STM8S Boards ``` -> ``` STM8S103F3 Breakout Board ```.
            
      </td></tr>
   </table><br>
   
4. ``` Ubah Processor ``` di Arduino IDE untuk board Arduino Pro Mini (sesuaikan dengan tipenya)

   <table><tr><td width="810">
   
      Klik ``` Tools ``` -> ``` Processor ``` -> ``` ATmega328P (5V, 16 MHz) ```

   </td></tr></table><br>

5. ``` Pengaturan Port ``` di Arduino IDE untuk board Arduino Pro Mini

   <table><tr><td width="810">
   
      Klik ``` Port ``` -> Pilih sesuai dengan port perangkat anda ``` (anda dapat melihatnya di Device Manager) ```

   </td></tr></table><br>

6. ``` Ubah Pemrogram ``` di Arduino IDE untuk board STM8S103F3P6

   <table><tr><td width="810">
      
   Klik ``` Tools ``` -> ``` Programmer ``` -> ``` ST-Link/V2 ```

   </td></tr></table><br>
   
7. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

8. Jika tidak ada kesalahan dalam kode program, langkah selanjutnya yaitu menggunakan alat pemrograman sesuai prosedur.

   <table><tr><td width="810">

      • ``` Arduino Pro Mini ``` gunakan -> ``` USB PL2303 ``` atau ``` USB FTDI ```.

      • ``` STM8S103F3P6 ``` gunakan -> ``` ST-Link/V2 ```.
            
   </td></tr></table>
   
   Kemudian klik: ``` Upload ``` untuk mengunggah kode program.<br><br>

9. Beberapa hal yang perlu anda lakukan saat menggunakan ``` board Arduino Pro Mini ``` dengan ``` USB PL2303 ``` :

   <table><tr><td width="810">

      • Informasi ``` Arduino IDE ```: ``` Uploading... ``` -> segera tekan tombol ``` RESET ``` dan lepaskan.
      
      • Tunggu sampai muncul pesan: ``` Done Uploading ``` -> ``` Program langsung dioperasikan ```.

   </td></tr></table><br>

10. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` alat pemrogram ``` / ``` yang lainnya ```.

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>
   
2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
    
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<img width="840" src="Assets/Documentation/Experiment/Conveyor.jpg" alt="conveyor">

<br><br>

## Apresiasi
Jika karya ini bermanfaat bagi anda, maka dukunglah karya ini sebagai bentuk apresiasi kepada penulis dengan mengklik tombol ``` ⭐Bintang ``` di bagian atas repositori.

<br><br>

## Penafian
Aplikasi ini merupakan hasil karya saya sendiri dan bukan merupakan hasil plagiat dari penelitian atau karya orang lain, kecuali yang berkaitan dengan layanan pihak ketiga yang meliputi: pustaka, kerangka kerja, dan lain sebagainya.