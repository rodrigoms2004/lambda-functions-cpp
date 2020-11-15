#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void printVector(vector<int> v) {
  for_each(v.begin(), v.end(), [](int i){ cout << i << endl;});
  cout << endl;
}

int main() {
  vector <int> v{4,1,4,3,4,1,5,7};

  sort(v.begin(), v.end(), [](const int& a, const int& b){ return a > b;});

  vector<int>::iterator last_value = unique(v.begin(), v.end(), [](int a, int b){ return a == b; });
  v.erase(last_value, v.end());

  // cout << "Last value of" << *last_value << endl;

  printVector(v);
}
