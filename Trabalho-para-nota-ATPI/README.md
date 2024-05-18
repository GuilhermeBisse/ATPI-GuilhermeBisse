# Exercício 1: Monte o seu poke!

Crie um código funcional que mostre para o usuário um menu interativo de um restaurante de
comida Havaiana. A seguir, há um exemplo de um programa similar, que funciona para a franquia de
restaurantes havaianos Demac Poke!
1) Crie diversos itens de escolha. Na Demac Poke, os itens são: bases, toppings, crunches,
proteínas, nuts, molho.
2) Para cada item, crie um menu de escolha de ingredientes. Pesquise opções comuns em
restaurantes de comida havaiana. Alguns ingredientes devem ser mais caros, e o valor aditivo
deve ser indicado.
3) O pedido pode ser confeccionado em 3 tamanhos diferentes, a serem definidos num menu
próprio.
4) (Requisito opcional no Trabalho) O usuário pode solicitar, no início do processo, acessar um
menu de combinações previamente diferente.
Sobre a navegação:
1) A navegação básica é seguir sempre em frente, menu a menu.
2) Em cada menu, informações parciais podem ser mostradas, como valor total intermediário.
3) Opcionalmente, o usuário pode solicitar para navegar para menus já encerrados, para rever
ou refazer escolhas.
4) O aplicativo deve permitir a realização de mais de um prato.
5) Faça uma apresentação tabulada dos valores finais.
6) O menu não deve fechar enquanto o usuário não tiver finalizado o pedido! Até lá, mostre, a
cada alteração no pedido do usuário:
Sobre a programação:
1) É popular usar a estrutura switch...case na elaboração de menus, inseridas em um laço
principal
2) Pesquise sobre formatação de texto em C++ para tabular valores.
!!
Exemplo de como o menu pode ficar em ASCII:
(ASCII é a representação de alfanuméricos por computadores, é como o terminal printa para o user).


# Exercício 2: Passagem de ônibus.

Crie um programa que mostre para o usuário um menu interativo de uma empresa de transporte
rodoviário.
O desafio deste código vai ser encontrar as posições/cadeiras do ônibus que estarão com sombra ao
longo da viagem. 

Para isso, você deve considerar, para um destino já definido, se o usuário está indo
de Norte a Sul ou o contrário disso.

Exemplo: O usuário seleciona se vai da CidadeAoNorte para a CidadeAoSul ou o contrário disso. 
Em seguida, seleciona pelo menu o horário que deseja viajar (8:00, 10:00, 12:00, 14:00 ou 16:00).

A depender do horário escolhido, o sol baterá de um dos lados da fileira, ou de nenhum.
O menu mostrará, para o horário selecionado, um jogo de cadeiras ocupadas e desocupadas,
indicando em quais o sol baterá durante a viagem.
Por fim, é perguntado quantas passagens o usuário comprará e o seu valor final.
