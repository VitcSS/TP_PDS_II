# TP_PDS_II: Truco Mineiro
  Jogo de truco programado em C++ para Windows para a matéria de Programação e Desenvolvimento de Software II pelos alunos Giovanni, Guilherme, henrique e Vítor do curso de Engenharia de Sistemas da UFMG. 
## Sobre o jogo:
  O jogo foi programado para ter o prompt de comando, ou o Windows PowerShell como sua HMI(Human Machine Interface. O jogo é construído com base nas regras do truco mineiro, sendo este sempre de 4 jogadores podendo ser:
  - Um humano e três bots
  
  - Dois humanos ,no mesmo time, e dois bots.
  
  - Dois humanos, em times diferentes, e dois bots.
### Regras:
  O jogo possui quatro jogadores, duas duplas, que tem suas vezes de jogar alternadas.o jogo utiliza-se de um baralho sem as cartas 8, 9, e 10 e o coringa. 
  #### Definições importantes:
  - Manilhas - São fixas. Dá mais forte para a mais fraca: 4 de Paus/7 de Copas/Ás de Espadas/7 de Ouros.
  
  - Rodada - Uma sequência de 4 jogadas, onde cada jogador joga uma carta.
  
  - Mão - Composta de duas a três rodadas, e vale inicialmente 2 pontos.
##Sobre o programa:

### Classes criadas
#### Card:
Tad criado para armazenar os dados que compôem uma carta sendo eles seu valor e seu naipe.
##### Funções:
###### card:
É o construtor, recebe um valor e um naipe como parãmetros e cria um card usando-os.

Recebe: Int, String

Retorna: Nada
###### Get_suit:
Retorna o naipe da carta.

Recebe: Nada

Retorna: String
###### Get_valor:
Retorna o valor da carta

Recebe: Nada

Retorna: Int
###### Imprimir:
Imprime no terminal qual a carta em questão no formato:"Valor" de "naipe".

Recebe: Nada

Retorna: Nada
###### operator ==:


Recebe:

Retorna:
##### operator >:

Recebe:

Retorna:
#### Deck:
Armazena um vector de cards que compôem o baralho da partida.
##### Funções:
###### myrandom:
Define a distribuição probabilística para o embaralhamento do vector que contém as cartas.
Recebe: Int;
Retorna: Int;

###### Deck:
É o construtor do eck
#### Player:

#### Humano:

#### Bot:

#### Round:

#### Game:

### Como funciona:


# User Stories:

- Um jovem com hábito de jogar truco usa o jogo para melhora suas habilidades. 

- Uma pessoa que se encontra esperando a hora de sair usa o jogo para distração.

- Um jogador semi-profissional usa a aplicação para praticar suas habilidades no jogo.

- Um grupo de amigos usa o software para diversão em grupo.

- Uma pessoa em um trajeto demorado usa o truco digital para passar o tempo 

- Um estudante usa o jogo como distração durante uma aula entediante.

