#include<iostream>

using namespace std;

void trianglenum(int lig) {
  for(int i = lig; i >= 1; i--) {
    for(int j = 1; j <= i; j++) {
      cout << i;
    }
    cout << endl;
  }
}



int main() {
  int num;
  cout << "Entrer un nombre :" << endl;
  cin >> num;
  trianglenum(num);
  cout << endl;
  return 0;
}
