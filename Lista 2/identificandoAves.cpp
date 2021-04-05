#include <iostream>

using namespace std;

string identificarAnimal(string);

int main(void) {

   std::string resposta;
   std::string dadosDoAnimal = "";

    for(int i = 0; i < 5; i++) {
        cin >> resposta;
        dadosDoAnimal += resposta;
    }

    cout << identificarAnimal(dadosDoAnimal) << endl;

    return 0;
}

string identificarAnimal(string dados) {
    int animal = stoi(dados, 0, 2);
    switch(animal) {
        case 11: return "coruja";
        case 2: return "pardal";
        case 6: return "galinha";
        case 8: return "ema";
        case 10: return "falcão";
        case 18: return "pato";
        case 24: return "pinguim";
        case 26: return "gaivota";
        case 27: return "garça";
        case 0: return "avestruz";
    }
    return "";
}