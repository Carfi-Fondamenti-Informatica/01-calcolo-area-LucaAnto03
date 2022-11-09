#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
float a=0, b=0, c=0, Atrg=0, Aquad=0, Arett=0, Atrap=0;
cin >> a >> b >> c;
//Qui va scritto il codice per eseguire i calcoli richiesti
Atrg = (a*b)/2;
Aquad = a*a;
Arett = a*b;
Atrap = ((a+b)*c)/2;
//Stampa dei risultati ottenuti dai calcoli  
  cout << Atrg << endl;  
  cout << Aquad << endl;
  cout << Arett << endl;
  cout << Atrap << endl;
  return 0
}
