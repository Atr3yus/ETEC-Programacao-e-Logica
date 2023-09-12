2 - O escrit�rio de contabilidade Super Cont�bil est� realizando o reajuste do sal�rio dos
funcion�rios de todos os seus clientes. Para isso, est�o utilizando como refer�ncia o
reajuste acordado com os sindicatos de cada classe trabalhadora, conforme apresentado
na tabela a seguir. Para ajudar o escrit�rio nesta tarefa, fa�a um programa em C que
receba o sal�rio atual, o cargo conforme especificado na tabela a seguir e realize o
c�lculo do reajuste do sal�rio. Ao t�rmino do c�lculo o programa deve imprimir o valor
do reajuste e o novo sal�rio do funcion�rio.

#C�d.   cargo Cargo                % reajuste acordado
1      Auxiliar de escrit�rio       7%
2      Secret�rio(a)                9%
3      Cozinheiro(a) 				5%
4      Entregador(a) 				12%

Para resolver este exerc�cio foi utilizado o c�digo do cargo para determinar a qual
cargo pertence o funcion�rio, no qual o sal�rio est� sendo reajustado, assim,
foi declarada uma vari�vel do tipo inteiro para armazenar o cargo e foram declaradas duas
vari�veis do tipo real para armazenar o sal�rio atual do funcion�rio e o valor do reajuste.
Al�m disso, foi utilizada a estrutura de decis�o if-else para decidir qual fluxo executar de
acordo com o cargo do funcion�rio. Como s�o 4 cargos, ent�o s�o necess�rios 4 fluxos
distintos na estrutura de decis�o. Veja a seguir a resposta do exerc�cio e os coment�rios.
