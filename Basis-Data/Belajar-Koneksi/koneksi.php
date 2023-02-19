<?php
$conn = mysqli_connect("localhost", "root", "", "kontak");
$result = mysqli_query($conn, "select * from isinya");

$kontak = mysqli_fetch_assoc($result);
while($isinya = mysqli_fetch_assoc($result)){
    var_dump($isinya);
}

function query($query)
?>