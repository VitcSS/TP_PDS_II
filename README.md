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

###### create_hand:
Pega os doze primeiros cards do vector Deck e os distribui em quatro vectors para servirem de mãos para os players.

Recebe: Vector<card>
  
Retorna: Nada
###### shuffle:
Embaralha o vector de cards em função da distribuição representada por myrandom. Logo após chama a função create_hand.

Recebe: Vector<card>
  
Retorna: Nada
  
###### Deck:
É o construtor do deck que gera um vector de cards em ordem e logo depois utiliza a função shuflle para embaralha-las.

Recebe: Nada

Retorna: Nada

#### Player:
Aramzena os dados do jogador como sua mão e o número de rodadas ganhas
##### Funções:
Não possui métodos implementados.
#### Human:
Classe derivada de player, possui funções para tomada de decisão durante o jogo
##### Funções:
###### Human:
É o contrutor da classe human, armazena o nome esolhido pelo jogador na variável id.
Recebe: String

Retorna: Nada
###### play_card
Joga a carta selecionada pelo jogador retirando-a da mão do mesmo e a levando ao Round.
Recebe: Round, Int

Retorna: Card
###### ask_truco
Permite que o jogador peça truco.

Recebe:Player, Bool

Retorna:Int
###### acept_refuse_truco
Permite que o jogador aceite ou recuse o pedido de truco que foi feito por outro player.

Recebe: Player, Bool

Retorna: Int
###### give_up:
Permite que o jogador desista da partida, encerrando-a.

Recebe: Round

Retorna Nada
######  get_id:
Retorna a id do jogador, O nome escolhido por ele no início do jogo.

Recebe:Nada

Retorna:String
#### Bot:
Classe derivada de player, possui funções que definem o comportamento do bot ao longo do jogo.
##### Funções:
###### Bot:

#### Round:
Armazena todas as informações que definem uma rodada de um jogo de truco e os metódos para permitir que o fluxo de jogo ocorra.
##### Funções:
#### Game:
Armazena todas as informações de uma partida completa e possui métodos para aplicar as regras necessárias.
#### Menu:
Executa o papel de front-end do código contendo todas as funcionalidades de HMC (Human Machine Communication) do programa.
##### Funções:

### Como funciona:
Quando o programa é executado, a tela inicial é exibida contendo  

# User Stories:

- Um jovem com hábito de jogar truco usa o jogo para melhora suas habilidades. 

- Uma pessoa que se encontra esperando a hora de sair usa o jogo para distração.

- Um jogador semi-profissional usa a aplicação para praticar suas habilidades no jogo.

- Um grupo de amigos usa o software para diversão em grupo.

- Uma pessoa em um trajeto demorado usa o truco digital para passar o tempo 

- Um estudante usa o jogo como distração durante uma aula entediante.

