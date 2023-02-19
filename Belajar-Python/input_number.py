print ('Masukan bilangan pertama =')
Bilangan1 = int( input() )

print ('Masukkan bilangan kedua =')
Bilangan2 = int( input() )

hasil = Bilangan2 + Bilangan1

print (f" {Bilangan1} + {Bilangan2} = {hasil}")


# mengapa harus ada int() dan di dalamnya baru di ketikkan input()?
# karena setiap input() itu datanya otomatis menjadi string, memang sudah jadi default, oleh karena itu di beri int () untuk mengkonversikan sebuah inputan yang awalnya string menjadi integer
# tetapi karena inputan telah di konversikan menjadi data integer, maka inputan tidak bisa di input dengan huruf maupun kata kata
