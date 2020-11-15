// https://www.dobitaobyte.com.br/desafio-maker-04-soma/

// receber 1 número na serial;
// somente de 0 à 5;
// 0 zera a soma;
// < 5 soma e imprime na serial;
// > 5 só exibe a mensagem: “Resultado maior que o limite”;
// Não pode criar uma variável para guardar os valores vindos da serial.

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// void printVector(vector<int> v) {
//   for_each(v.begin(), v.end(), [](int i){ cout << i << endl;});
//   cout << endl;
// }

int main() {
  int value;

  vector <int> v{};

  while(true) {
    cout << "Entre o valor: ";
    cin >> value;

    if (value == 0) {
      v.erase(v.begin(), v.end());
    } else if (value > 5) {
      cout << "Resultado maior que o limite" << endl;
    } else {
      v.push_back(value);
    }

    // inicio, fim, valor inicial, operação
    int sum = accumulate(v.begin(), v.end(), 0, [](int a, int b) { return a + b; });

    cout << "Total: " << sum << endl;
    // printVector(v);
  }
}