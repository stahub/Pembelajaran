<html>
<head>
	<title>Create Account</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<fieldset>
	<legend><b><a style="font-size: 125%;">Create Freelancer Account</a></b></legend><br>
	<fieldset>
	<legend><a><b>Fill it properly</b></a></legend><br>
	<form action = "getproses.php" method = "post">
		First Name : 
		<input type = "text" name = "first-name">
		<br>

		Last Name : 
		<input type = "text" name = "last-name">
		<br>

		Email : 
		<input type = "email" name = "email">
		<br>

		Password : 
		<input type = "password" name = "password">
		</fieldset>

		<fieldset><legend><br>
		<a><b>Personal data</b></a><br><br></legend>

		Full Name :
		<input type="text" name="full-name">
		<br>

		Birth Date :
		<input type="date" name="birth-date">
		<br>

		Gender :
		<input type="radio" name="gender" value="Male">Male
		<input type="radio" name="gender" value="Female">Female<br>
		</fieldset>


		<br>
		<input class="tombol" type="submit" value="Submit">
	</form>
</fieldset>
</body>
</html>