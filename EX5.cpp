#include <iostream>
using namespace std;
class Test{
public:
 static int tableau[] ;
public :
 static int division(int indice, int diviseur){
 return tableau[indice]/diviseur;
 throw tableau[indice]/diviseur;
 }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
 int x, y;
 try{
 cout << "Entrez l’indice de l’entier à diviser: " << endl;
 cin >> x ;
 cout << "Entrez le diviseur: " << endl;
 cin >> y ;
 cout << "Le résultat de la division est: "<< endl;
 cout <<Test::division(x,y) << endl;
 catch(int z){
     cerr << impossible!<<endl;
 }
 return 0; }