<?php 
        $idiomaPg = $_GET["id"]; // recebe o idioma escolhido
        setcookie("idioma", "$idiomaPg", time()+259200);
        header("Location:index.php");
?>