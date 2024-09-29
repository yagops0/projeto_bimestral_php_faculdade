<?php 
    if(ISSET($_COOKIE["idioma"])){
        $arquivo = ("C:\\xampp\\htdocs\\aulasFaculdade\\projetos\\projeto_bimestral_php_faculdade\\versao.txt");
        $ponteiro = fopen($arquivo, "w+");
        $conteudo = file_get_contents($arquivo);
        $idioma = $_COOKIE["idioma"].".jpg";

        if($conteudo == ""){
            if(str_contains($idioma, "ingles")){
                $textoI = "<h2>OUR PLANT</h2> 
                <p>The XXX INDÚSTRIA DE MÁQUINAS LTDA, was founded on 1970, and became the most important and traditional supplyer of BAGGING MACHINES in Brazil.</p>";

                fwrite($ponteiro, $textoI);   
            }
            else if(str_contains($idioma, "portugues")){
                $textoP = "<h2>EMPRESA</h2> 
                <p>A XXX INDÚSTRIA DE MÁQUINAS LTDA, foi fundada em 1970, e tornou-se o mais importante e tradicional fabricante de máquinas ensacadeiras no Brasil.</p>";

                fwrite($ponteiro, $textoP);      
            }
            else if(str_contains($idioma, "espanhol")){
                $textoE = "<h2>EMPRESA</h2> 
                <p>La XXX INDÚSTRIA DE MÁQUINAS LTDA, fue fundada en 1970, y sé a convertido en la más importante y tradicional fabrica de MÁQUINAS ENSACADORAS em Brasil.</p>";

                fwrite($ponteiro, $textoE);
            }
            else{
                setcookie("idioma", "$idiomaPg", time()-259200);
            }
        }
        echo $conteudo;
        fclose($ponteiro);
    }
    
?>