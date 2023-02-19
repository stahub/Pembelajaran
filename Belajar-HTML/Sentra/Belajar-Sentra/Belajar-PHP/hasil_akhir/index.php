<html>
	<head>
		<title>Hasil Akhir</title>
	</head>
	<body>
		<?php
		$nis  = '539211206';
		$nama   = 'Indrasta Rabbani H';
		$nilai_absen = 91;
		$nilai_tugas = 92;
		$nilai_uts   = 93;
		$nilai_uas   = 94;			 
		$nilai_a = $nilai_absen + $nilai_tugas + $nilai_uts + $nilai_uas;
		$nilai_akhir = $nilai_a / 4;		 

		if ($nilai_akhir>=80){
			$grade = "A";
		}

		elseif ($nilai_akhir>=70){
			$grade = "B";
		}

		elseif ($nilai_akhir>=50){
			$grade = "C";
		}

		elseif ($nilai_akhir>=40){

			$grade = "D";
		}

		else{
			$grade = "E";
		}

			 
		echo "<h4>Hitung Nilai AKhir Mahasiswa</h4>";
		echo "<b>NIS 		:</b> $nis <br>";
		echo "<b>Nama		:</b> $nama <br>";
		echo "<b>Nilai Absen :</b> $nilai_absen <br>";
		echo "<b>Nilai Tugas :</b> $nilai_tugas <br.";
		echo "<b>Nilai UTS   :</b> $nilai_uts <br>";
		echo "<b>Nilai UAS   :</b> $nilai_uas <br><br>";
			 
		echo "<b>Nilai Akhir : $nilai_akhir </b><br>";
		echo "<b>Grade : $grade </b><br>";
		?>
	</body>
</html>
