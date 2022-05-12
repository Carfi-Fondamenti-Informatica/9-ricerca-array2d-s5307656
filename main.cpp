#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int x;
    char lista_nomi [10][20];
    char nome [20];

    init (lista_nomi);
    init (nome);
  for (int i=0;i<10;i++){
      cin >> lista_nomi[i];
  }
  cin >> nome;
  x=ricerca (lista_nomi, nome);
  if (x!=-1)
      cout <<x;
  else cout << "Non presente"<<endl;
    return 0;
}
