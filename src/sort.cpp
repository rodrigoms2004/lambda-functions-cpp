#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector <int> v {4,1,4,3,4,1,5,7};

  sort(v.begin(), v.end(), [](const int& a, const int& b){ return a > b;});

  for_each(v.begin(), v.end(), [](int i){ cout << i << endl;});
}
