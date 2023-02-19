<html>
    <head>
        <title>Bejalar PHP</title>
        <link rel="icon" type="image/x-icon" href="telkom-nobg.ico"></link>
    </head>
    <body>

    <?php
    $angka1 = 22;
    $angka2 = 10;
    $jumlah = $angka1+$angka2;
    $kurang = $angka1-$angka2;
    $bagi = $angka1/$angka2;
    $kali = $angka1*$angka2; 

    echo "<h4> Angka 1 : $angka1 <h4>";
    echo "<h4> Angka 2 : $angka2 <h4>";
    echo "<h4> Hasil penjumlahan = $jumlah <h4>";
    echo "<h4> Hasil pengurangan = $kurang <h4>";
    echo "<h4> Hasil pembagian = $bagi <h4>";
    echo "<h4> Hasil perkalian = $kali <h4>";
    ?>
    <a href="index.php">Balik Ke Halaman 1</a>
    </body>
</html>