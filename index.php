<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>WEB DESIGN EM FOCO</title>
    <link rel="stylesheet" href="css//style.css">
    <?php 
        include 'compara.inc';
    ?>
</head>
<body> 
    <?php 
            if(ISSET($_COOKIE["idioma"])){
                $arquivo = ("versao.txt");
                $conteudo = file_get_contents($arquivo);

                echo $conteudo;
                echo '<br><a href="idioma.php?apagar">Escolher outro idioma</a>';
            }
            else{
                echo '
                <div class="titulo">
                    <h3>BEM VINDO AO SITE WEBDESIGN EM FOCO</h3>
                </div> 
                <div class="conteudo">
                    <h4>Escolha o idioma para entrar:</h4>
                    <ul>
                        <li><a href="idioma.php?id=ingles"><img src="img\ingles.jpg" alt=""></a></li>
                        <li><a href="idioma.php?id=portugues"><img src="img\portugues.jpg" alt=""></a></li>
                        <li><a href="idioma.php?id=espanhol"><img src="img\espanhol.jpg" alt=""></a></li>
                    </ul>
                </div>
                ';
            }
    ?>
</body>
</html>