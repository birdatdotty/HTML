<?php
require "tpl.php";
class Admin extends tpl
{
  function openSQL()
  {
    // Create connection
    $conn = new mysqli($this->servername, $this->username, $this->password, $this->dbname);
    // Check connection
    if ($conn->connect_error) {
      die("Connection failed: " . $conn->connect_error);
    }

    mysqli_set_charset($conn, 'utf8');
    return $conn;
  }

  function sql($page)
  {
    $table = "posts";
    $conn = $this->openSQL();
    $arr = [];
    $sql = "SELECT id, type, page, data FROM $table where page='".$page."'";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
      // output data of each row
      while($row = $result->fetch_assoc()) {
          array_push($arr, $this->mkDiv($row["type"], $row["data"], $table, $row["id"]));
      }
    }
    $conn->close();

    return $arr;
  }

  function sqlForEditor($page)
  {
    $conn = $this->openSQL();
    $arr = [];
    $sql = "SELECT id, type, page, data FROM posts where page='".$page."'";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
      // output data of each row
      while($row = $result->fetch_assoc()) {
          array_push($arr, $row["id"], $row["type"], $this->mkDiv($row["type"], $row["data"]));
      }
    }

    $conn->close();
    return $arr;
  }

  function updateSql($page,$id,$data)
  {
    $conn = $this->openSQL();
    $sql = "UPDATE posts SET data='$data' WHERE id=$id";

    if ($conn->query($sql) === TRUE) {
      echo "Record updated successfully";
    } else {
      echo "Error updating record: " . $conn->error;
    }

    $conn->close();
  }

  function __construct($servername, $username, $password, $dbname)
  {
    $this->servername = $servername;
    $this->username = $username;
    $this->password = $password;
    $this->dbname = $dbname;
  }

  function get($page)
  {
    $block = "";
    $arr = $this->sql($page);

    foreach($arr as $line)
    {
      $block .= $line;
    }

    return $block;
  }

}

$db = new Admin("localhost", "root", "", "dotty");
?>