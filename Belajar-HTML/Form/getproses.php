<html>
<head>
	<title>Sample</title>
</head>
<body>
	<h2>Data Akun</h2>
	First Name : <?php echo $_POST["first-name"]?>
	<br>
	Last Name : <?php echo $_POST["last-name"]?>
	<br>
	Email : <?php echo $_POST["email"]?>
	<br>
	Password : <?php echo $_POST["password"]?>
	<br><br>

	<h2>Data Personal</h2>
	Full Name : <?php echo $_POST['full-name'] ?>
	<br>
	Birth Date : <?php echo $_POST['birth-date'] ?>
	<br>
	Gender : <?php $data=$_POST['gender'];
			echo "$data";?>
	<br>


</body>
</html>