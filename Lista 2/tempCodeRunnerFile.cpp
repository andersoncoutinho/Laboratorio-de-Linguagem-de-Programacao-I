#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    int n, valor;

    cin >> n;
    vector<int> valores;

    for(int i = 0; i < n; i++) {
        cin >> valor;
        if(i == 0) {
            valores.push_back(valor);
        } else {
            for(int j = 0; j < valores.size(); j++) {
                if(valores[j] == valor) {
                    valores.push_back(0);
                    break;
                }
                if(j == valores.size()-1) {
                    valores.push_back(valor);
                }
            }
        }
    }

    for(int i = 0; i < n-1; i++) {
        if(valores[i] != 0) {
            cout << valores[i] << ' ';
        }
    }
    if(valores[valores.size()-1] != 0) {
        cout << valores[valores.size()-1] << endl;
    }

    return 0;
}