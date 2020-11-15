#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
  int values[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

  int accumulated = accumulate(values, values + 10, 1, [](int i, int j){ return i * j; });
  cout << "accumulated: " << accumulated << endl; // result: 3628800
}