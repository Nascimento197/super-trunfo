Super Trunfo - Cadastro de Cartas (Nível Novato)

Este projeto é o primeiro passo do jogo Super Trunfo de Países/Cidades, desenvolvido em C.  
Neste nível, o objetivo é cadastrar e exibir duas cartas, praticando entrada e saída de dados.

---

Funcionalidades
- Cadastro de **2 cartas** contendo:
  - Estado (A–H)
  - Código da carta (ex.: A01, B02)
  - Nome da cidade
  - População
  - Área em km²
  - PIB em bilhões de reais
  - Número de pontos turísticos
- Exibição organizada das informações cadastradas.

---

Tecnologias
- Linguagem C
- Compilador GCC (via MinGW no Windows ou GCC em Linux)

---

Como compilar e executar

No Windows
Instale o compilador [MinGW](https://www.mingw-w64.org/downloads/).
Adicione o caminho `bin` do MinGW ao **PATH** do Windows.
Verifique a instalação:
   gcc --version
Compile
  gcc super_trunfo.c -o super_trunfo.exe
Execute
  super_trunfo.exe

No Linux (ou WSL)
Instale o GCC:
  sudo apt update && sudo apt install build-essential -y
Execute
  ./super_trunfo

Exemplo De Uso
Entrada
=== Cadastro da Carta 1 ===
Estado (A-H): A
Código da carta (ex: A01): A01
Nome da cidade: São Paulo
População: 12325000
Área: 1521.11
PIB: 699.28
Número de pontos turísticos: 50

=== Cadastro da Carta 2 ===
Estado (A-H): B
Código da carta (ex: B02): B02
Nome da cidade: Rio de Janeiro
População: 6748000
Área: 1200.25
PIB: 300.50
Número de pontos turísticos: 30

Saida
----- Resultado: Cartas cadastradas -----

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
