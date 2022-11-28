#include <iostream>
using namespace std;

int main () {
  int angka;
  cout << "masukan angka = ";
  cin >> angka;
  if (angka < 0) {
    cout << "angka negatif/0";
  }
  else if (angka > 0 and angka <= 10) {
    cout << "1 sampai 10";
  }
  else {
    cout << "angka lebih dari 10";
  }
}