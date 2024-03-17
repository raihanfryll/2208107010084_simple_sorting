# Langkah-langkah untuk menjalankan kode program bahasa C 2208107010084_simple_sorting.c

1. Buka Text Editor atau IDE: Buka text editor atau Integrated Development Environment (IDE) seperti Visual Studio Code, Dev-C++, atau Code::Blocks.
2. Buat File Baru: Buat file baru dengan ekstensi .c, misalnya sorting_performance.c, dan salin kode program di atas ke dalam file tersebut.
3. Simpan File: Simpan file tersebut dengan menekan Ctrl + S atau melalui menu File > Save As.
4. Compile Program: Compile program menggunakan compiler C seperti GCC (GNU Compiler Collection). Jika Anda menggunakan GCC, buka terminal atau command prompt, arahkan ke direktori tempat Anda menyimpan file program, dan jalankan perintah berikut:
bash
gcc 2208107010084_simple_sorting.c -o  2208107010084_simple_sorting

5. Ini akan menghasilkan file executable dengan nama 2208107010084_simple_sorting (atau sesuai dengan nama yang Anda tentukan dalam perintah -o).

6. Jalankan Program: Setelah berhasil dikompilasi, jalankan program dengan mengetikkan nama file executable (atau sesuaikan dengan nama yang Anda tentukan) di terminal atau command prompt, dan tekan Enter.
bash
./2208107010084_simple_sorting
Tunggu Proses Eksekusi: Program akan mulai mengeksekusi dan menghasilkan output berupa waktu eksekusi untuk setiap jenis algoritma sorting dengan ukuran array yang berbeda.

7. Periksa Hasil: Setelah program selesai dieksekusi, Anda dapat melihat hasilnya yang akan ditampilkan di terminal atau command prompt. Selain itu, hasil pengujian juga akan disimpan dalam file teks dengan format numbers_[ukuran_array].txt, yang dapat Anda buka dan periksa.
8. Hapus File Eksekutabel (Opsional): Setelah selesai, Anda dapat menghapus file eksekutabel yang dihasilkan jika tidak lagi diperlukan, misalnya dengan perintah rm sorting_performance di terminal (untuk sistem Unix/Linux) atau del sorting_performance.exe di command prompt (untuk Windows).



# Fungsi-fungsi yang ada dalam kode program ini adalah sebagai berikut:

1. generateRandomNumbers(int *arr, int size): Fungsi ini digunakan untuk menghasilkan bilangan acak dalam array dengan ukuran tertentu.
2. bubbleSort(int *arr, int size): Fungsi ini mengimplementasikan algoritma Bubble Sort untuk mengurutkan array yang diberikan.
3. selectionSort(int *arr, int size): Fungsi ini mengimplementasikan algoritma Selection Sort untuk mengurutkan array yang diberikan.
4. insertionSort(int *arr, int size): Fungsi ini mengimplementasikan algoritma Insertion Sort untuk mengurutkan array yang diberikan.
5. saveToFile(int *arr, int size, const char *filename): Fungsi ini digunakan untuk menyimpan bilangan yang belum diurutkan dan sudah diurutkan ke dalam file teks dengan nama yang ditentukan.

