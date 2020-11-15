#include <iostream>

using namespace std;

int main() {
  auto square = [](int i){ return i*i; };
  cout << "The square of 9: " << square(9) << endl;
}