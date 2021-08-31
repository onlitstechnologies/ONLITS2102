<?php
$username =  $_POST['txt_username'];
$password =  $_POST['txt_password'];

$sql = "SELECT * FROM user WHERE username='$username' AND password = '$password'";

$con = new mysqli("localhost","vishal","vishal","school_2102");

$result = $con->query($sql);

if($result->num_rows>0)
    echo "<script>window.location.href=Dashboard.php</script>";
else
    echo "<script>alert('Invalid username or password');</script>";