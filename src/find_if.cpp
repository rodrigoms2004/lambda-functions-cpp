#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void printVector(vector<int> v) {
  for_each(v.begin(), v.end(), [](int i){ cout << i << endl;});
  cout << endl;
}

int main() {
  vector <int> v {4,1,4,3,4,1,5,7};

  cout << "Original:" << endl;
  printVector(v);

  cout << " greater than 3: " << endl;
  vector<int>::iterator result = find_if(v.begin(), v.end(), [](int i){ return i > 3; });
  cout << "first greater than 3: " << *result << endl;
}
