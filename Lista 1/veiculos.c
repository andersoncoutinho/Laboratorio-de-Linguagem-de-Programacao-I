/* Defina um tipo estruturado para representar um veículo, descrito pelos seguintes dados:

        Modelo;
        Marca;
        Ano de Fabricação;
        Preço;

   Escreva um programa no qual o usuário informa os dados de dois veículos,
   sendo impresso ao final o modelo e marca do veículo mais antigo.
   Caso ambos os veículos tenham sido fabricados no mesmo ano,
   informe a marca e o modelo do veículo mais barato. */

#include <stdio.h>

typedef struct {
    char modelo[20];
    char marca[20];
    int ano;
    double preco;
} tCarro;

int main(void) {

    tCarro carro1, carro2, carroEscolhido;

    scanf("%s", carro1.modelo);
    scanf("%s", carro1.marca);
    scanf("%d", &carro1.ano);
    scanf("%lf", &carro1.preco);

    scanf("%s", carro2.modelo);
    scanf("%s", carro2.marca);
    scanf("%d", &carro2.ano);
    scanf("%lf", &carro2.preco);

    if(carro1.ano == carro2.ano) {
        carroEscolhido = carro1.preco < carro2.preco ? carro1 : carro2;
    } else {
        carroEscolhido = carro1.ano < carro2.ano ? carro1 : carro2;
    }

    printf("%s %s\n", carroEscolhido.marca, carroEscolhido.modelo);

    return 0;

}