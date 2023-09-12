2 - O escritorio de contabilidade Super Contabil esta realizando o reajuste do salario dos
funcionarios de todos os seus clientes. Para isso, estão utilizando como referencia o
reajuste acordado com os sindicatos de cada classe trabalhadora, conforme apresentado
na tabela a seguir. Para ajudar o escritorio nesta tarefa, faça um programa em C que
receba o salario atual, o cargo conforme especificado na tabela a seguir e realize o
calculo do reajuste do salario. Ao termino do calculo o programa deve imprimir o valor
do reajuste e o novo salario do funcionario.

## Cod.   cargo Cargo                % reajuste acordado
- 1      Auxiliar de escritorio           7%
- 2      Secretario(a)                    9%
- 3      Cozinheiro(a) 				            5%
- 4      Entregador(a) 				           12%

Para resolver este exercicio foi utilizado o codigo do cargo para determinar a qual
cargo pertence o funcionario, no qual o salario esta sendo reajustado, assim,
foi declarada uma variavel do tipo inteiro para armazenar o cargo e foram declaradas duas
variaveis do tipo real para armazenar o salario atual do funcionario e o valor do reajuste.
Alem disso, foi utilizada a estrutura de decisao if-else para decidir qual fluxo executar de
acordo com o cargo do funcionario. Como são 4 cargos, então são necessarios 4 fluxos
distintos na estrutura de decisão. Veja a seguir a resposta do exercicio e os comentarios.
