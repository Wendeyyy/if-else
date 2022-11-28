#include <iostream>
using namespace std;

int main () {
  int nilai;
  cout << "nilai = ";
  cin >> nilai;
  cout << "hasil = ";
  if (nilai > 90) {
    cout << "A"<< endl;
  }
  else if (nilai > 80) {
    cout << "B"<< endl;
  }
  else  if (nilai > 70) {
    cout << "C"<< endl;
  }
  else {
    cout << "D"<< endl;
  }
}