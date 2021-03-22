#include <iostream>
#include "Data.h"

using namespace std;

int main(void) {

    Data data;

    cin >> data.dia;
    cin >> data.mes;
    cin >> data.ano;

    cout << data.dia << '/' << data.mes << '/' << data.ano << endl;

    return 0;
}
