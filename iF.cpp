#include <iostream>
using namespace std;

int main () {
  int nilai;
  cout << "nilai = ";
  cin >> nilai;
  cout << "hasil = ";
  if (nilai > 78) {
    cout << " lulus " << endl;
  }
  else if (nilai == 78) {
    cout << "lulus kkm" << endl;
  }
  else {
    cout << " tidak lulus" << endl;
  }
  return 0;
}