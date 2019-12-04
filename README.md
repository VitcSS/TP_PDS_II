# TP PDS II: Truco Mineiro
  Jogo de truco programado em C++ para Windows para a matéria de Programação e Desenvolvimento de Software II pelos alunos Giovanni, Guilherme, Henrique e Vítor do curso de Engenharia de Sistemas da UFMG. 
## Sobre o jogo:
  O jogo foi programado para ter o prompt de comando, ou o Windows PowerShell como sua HMI(Human Machine Interface. O jogo é construído com base nas regras do truco mineiro, sendo este sempre de 4 jogadores podendo ser:
  
  - Um humano e três bots
  
  - Dois humanos ,no mesmo time, e dois bots.
  
  - Dois humanos, em times diferentes, e dois bots.
### Regras:
  O truco mineiro utiliza um baralho para jogo sem as cartas oito, nove, dez e coringa, o que totaliza 40 cartas para o jogo. As quatro cartas de maior valor no truco mineiro se chamam manilhas e são, nessa ordem:
  - Quatro de paus, conhecida como zap 
  - Sete de copas
  - Ás de Espadas, conhecida como espadilha.
  - Sete de Ouros 
  
  Para as outras cartas a relação de valor é a seguinte:
  
  - 3 todos os naipes
  - 2 todos os naipes
  - ÁS todos os naipes, exceto espada que é manilha
  - K todos os naipes
  - J todos os naipes
  - Q todos os naipes
  - 7 somente paus e espada
  - 6 todos os naipes
  - 5 todos os naipes
  - 4 todos os naipes, exceto paus que é o zap
  #### Príncipios básicos:
  
  ##### Partida:
   No início da partida as cartas são embaralhadas e logo após isso cada jogador recebe  três cartas que compôem sua mão. Em seguida alguém joga uma carta. Depois que um jogador deposita uma carta na mes seu adversário deve faze-lo até que todos tenham feito, após isso a rodada é finalizada. O jogador ou dupla que jogou a carta de maior valor ganha a rodada. A dupla ou jogador que ganhar duas rodadas leva a partida e recebe dois pontos.
  ##### Jogo
   Após o fim de uma partida uma nova é iniciada e esse processo se repete até que alguém junto um total de 12 pontos. Quando alguém soma 12 pontos este jogador vence o jogo e todos tem os pontos zerados.
  ##### Queda
  A cada dois jogos ganhos por alguém, marca-se uma cada. Isso faz cm que zere-se todos os pontos do jogo.
  ##### Empate
   Quanto duas cartas são de mesmo valor ocorre empate, caso aconteça na primeira rodada cada jogador deve mostrar a primeira carta que possui, a de maior valor ganha. Caso as duas tenham o mesmo valor os jogadores devem mostrar a terceira carta que tem em mãos.Quando o empate ocorre após a primeira rodada ganha quem ganhou a primeira rodada.
  ##### Truco, Seis, Nove e Doze
  Ao pedir truco o jogador está pedindo para que o valor de pontos da partida suba de dois para quatro. O oponente tem as seguintes opções aceitar ou correr. Caso aceite a partida começa a valer 4 pontos, caso decida correr perde a partida automaticamente. O oponente têm a opção ainda de pedir para subir mais ainda o valor da partida pedindo seis, o que aumenta o valor da partida para oito pontos. Quando o jogador corre no seis ele perde a partida que estava valendo 4 pontos. Ele tem como opção oedir o nove que sobe o valor da partida para dez.A lógica se repete com o doze que sobe o valor do jogo para doze pontos.
## Sobre o código:
  De forma a garantir um código mais limpo e versátil criamos nosso jogo com Orientação a Objetos, utilizando tanto classes da Standart Library do C++ (STL), quanto classes criadas por nós. As classes criadas por nós foram implementadas em arquivos diferentes do main sendo cada classe implementada em seu própio .h. 
### Como compilar:
  É necessário baixar todos os arquivos presentes nesse repositório em uma mesma pasta e fazer o seguinte comando no cmd ou terminal utilizado (ex Powershell):
  > g++ truco.cpp
### Classes criadas:
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

###### get_nome_completro:
Retorna qual a carta em questão no formato:"nome" de "naipe".

Recebe: Nada

Retorna: String

###### get_nome:
Retorna o conteúdo da variável nome

Recebe: Nada

Retorna: String 

###### get_numero:
Retorna o valor guardado na variável número.

Recebe: Nada

Retorna: Char
######  get_naipe:
Retorna o valor na variável naipe:

Recebe: Nada

Retorna: Char
###### operator ==:
Retorna true se as cartas forem de pontuação equivalente. Utiliza o operator>.

Recebe: Const Card&

Retorna: bool

##### operator >:
Retorna verdadeiro se a carta em questão for maior em pontuação que a carta passada como parâmetro, leva em consideração manilhas.

Recebe: Const Card&

Retorna: bool

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
###### add_pontos:
Soma mais um inteiro i a variavel pontos do player.

Recebe: Int

Retorna: Nada
###### get_pontos:
Retorna  o número de pontos do player.

Recebe: Nada

Retorna: Int
###### ganha_queda:
Soma um ao número de quedas ganhas pelo jogador.

Recebe: Nada

Retorna: Nada
###### get_quedas:
Retorna o número de quedas ganhas pelo player.

Recebe: Nada

Retorna: Nada 
###### get_name:
Método virtual, restorna um espaço em branco

Recebe: Nada

Retorna: String
###### get_card:
Retorna o card referente a posição i escolhida do vetor.

Recebe: Int

Retorna: Card
###### atualizar_jogador:
Método virual. Não retorna nada.

Recebe: Nada

Retorna Nada
###### play_card:
Retorna o card na posição zero do vetor da mão do jogador

Recebe: Int

Retorna: Nada
###### is_a_bot:
Retorna o valor da variável is_bot.

Recebe: Nada

Retorna: Bool
###### acept_refuse_truco:
Método virtual, retorna 0.

Recebe: Nada

Retorna: Int
###### ask_truco:
Método virtual, retorna 0.

Recebe: Nada

Retorna: Int
#### Human:
Classe derivada de player, possui funções para tomada de decisão durante o jogo
##### Funções:
###### Human:
É o contrutor da classe human, armazena o nome esolhido pelo jogador na variável id e armazena a mão do jogador no vector de cards que compôem a mão do jogador.

Recebe: String, Deck

Retorna: Nada
###### play_card
Joga a carta selecionada pelo jogador retirando-a da mão do mesmo.

Recebe: Int

Retorna: Card
###### ask_truco
Permite que o jogador peça truco.

Recebe: Bool

Retorna:Int
###### acept_refuse_truco
Permite que o jogador aceite ou recuse o pedido de truco que foi feito por outro player.

Recebe: Bool

Retorna: Int
###### give_up:
Permite que o jogador desista da partida, encerrando-a.

Recebe: Bool

Retorna Nada
######  get_id:
Retorna a id do jogador, O nome escolhido por ele no início do jogo.

Recebe:Nada

Retorna:String
###### atualiza_jogador:
Atualize a mão do jogador, com suas novas cartas.

Recebe: Deck

Retorna: Nada
#### Bot:
Classe derivada de player, possui funções que definem o comportamento do bot, que jogará contra ou com o player humano, ao longo do jogo.
##### Funções:
###### Bot:
É o contrutor da classe bot, armazena o número referente ao bot na variável id e armazena a mão no vector de cards que compôem a mão do jogador.

Recebe: Deck

Retorna: Nada
###### play_card
Seleciona randômicamente a carta a ser jogada pelo bot retirando-a da mão do mesmo e a levando ao Round.
Recebe:Nada

Retorna: Card
###### ask_truco
Decide randômicamente se o bot pedirá troco.

Recebe:Nada

Retorna:Int
###### acept_refuse_truco
Decide randômicamente se o bot aceita ou não o pedido de truco.
Recebe: Nada

Retorna: Int
###### give_up:
Permite que o jogador desista da partida, encerrando-a.

Recebe: Round

Retorna Nada
######  get_id:
Retorna a id do jogador, O nome escolhido por ele no início do jogo.

Recebe:Nada

Retorna:StringÉ o contrutor da classe human, armazena o nome esolhido pelo jogador na variável id e armazena a mão do jogador no vector de cards que compôem a mão do jogador.

Recebe: String, Deck

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
Retorna a id do bot, O seu número de crição.

Recebe:Nada

Retorna: Int
###### get_size:
Retorna o tamanho da mão do jogador.

Recebe: Retorna

Retorna: Int
#### Round:
Armazena todas as informações que definem uma rodada de um jogo de truco e os metódos para permitir que o fluxo de jogo ocorra.
##### Funções:

###### Round:
###### Jogar:
###### Limpar:
###### get_mesa:

#### Menu:
Executa o papel de front-end do código contendo todas as funcionalidades de HMC (Human Machine Communication) do programa.
##### Funções:

### Como funciona:
Quando o programa é executado, a tela inicial é exibida contendo o título do jogo e o nome de seus desenvolvedores.

# User Stories:

- Um jovem com hábito de jogar truco usa o jogo para melhorar suas habilidades. 

- Uma pessoa que se encontra esperando a hora de sair usa o jogo para sua distração.

- Um jogador semi-profissional usa a aplicação para praticar suas habilidades no jogo.

- Um grupo de amigos usa o software para diversão em grupo.

- Uma pessoa em um trajeto demorado usa o truco digital para passar o tempo 

- Um estudante usa o jogo como distração durante uma aula entediante.

