# String jika pakai kutip 1 tidak masalah, sama saja dengan kutip 2

nama_depan = 'Indrasta'
nama_tengah = 'Rabbani'
nama_belakang = 'Harahap'

sapa = "Halo " + nama_depan + ' ' + nama_tengah + ' ' + nama_belakang

print(sapa)

# Format string memakai {} yang dimana sepasi dan variabel dapat lngsung terbaca dan teroutput tanpa harus menggunakan simbol +
# PERLU DI INGAT untuk memakai foramt string di depan inputan untuk variabel harus di beri huruf f 
# Seperti contoh berikut

nama_depan = 'Indrasta'
nama_tengah = 'Rabbani'
nama_belakang = 'Harahap'

sapa = f"Hello {nama_depan} {nama_tengah} {nama_belakang}"




print(sapa)