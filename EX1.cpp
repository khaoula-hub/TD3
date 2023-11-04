#include<iostream>
using namespace std;
class complexe{
    private:
    float re;
    float im;
    public:
    complexe(float re, float im);
    void egalite(const complexe& autre);
    float addition(const NombreComplexe& autre);
    float soustraction(const NombreComplexe& autre);
    float multiplication(re,im);
    float division(re,im);
}
float complexe::complexe(re,im){
    this->re=re;
    this->im=im;
}
float complexe::addition(const complexe& autre){
    return(reel + autre.reel, imaginaire + autre.imaginaire);
}
float complexe::soustraction(const complexe& autre){
    return(reel - autre.reel, imaginaire - autre.imaginaire);
}
float complexe::multiplication(const complexe& autre){
    double denominateur = autre.re * autre.re + autre.im * autre.im;
        double re = (re * autre.re + im * autre.im) / denominateur;
        double im = (im * autre.re - re * autre.im) / denominateur;
        return complexe(re, im);
}
float complexe::division(const complexe& autre){
    double denominateur = autre.re * autre.re + autre.im * autre.im;
        double re = (re * autre.re + im * autre.im) / denominateur;
        double im = (im * autre.re - re * autre.im) / denominateur;
        return complexe(re, im);
}
void complexe::egalite(const complexe& autre){
    if(re=autre.re && im=autre.im){
        cout<<"les deux nombres complexes sont égaux"<<endl;
    }
}
int main() {
    double re1, im1, re2, im2;
    std::cout << "Entrez la partie réelle et imaginaire du premier nombre complexe : ";
    std::cin >> re1 >> im1;

    std::cout << "Entrez la partie réelle et imaginaire du deuxième nombre complexe : ";
    std::cin >> re2 >> im2;

    NombreComplexe complexe1(re1, im1);
    NombreComplexe complexe2(re2, im2);

    int choix;
    std::cout << "Choisissez une opération :"
              << "\n1. Égalité"
              << "\n2. Addition"
              << "\n3. Soustraction"
              << "\n4. Multiplication"
              << "\n5. Division"
              << "\n";
    std::cin >> choix;

    NombreComplexe resultat;

    switch (choix) {
        case 1:
            if (complexe1.egalite(complexe2)) {
                cout << "Les deux nombres complexes sont égaux." << endl;
            } else {
                cout << "Les deux nombres complexes ne sont pas égaux." << endl;
            }
            break;
        case 2:
            resultat = complexe1.addition(complexe2);
            cout << "Résultat de l'addition : ";
            resultat.afficher();
            break;
        case 3:
            resultat = complexe1.soustraction(complexe2);
            cout << "Résultat de la soustraction : ";
            resultat.afficher();
            break;
        case 4:
            resultat = complexe1.multiplication(complexe2);
            cout << "Résultat de la multiplication : ";
            resultat.afficher();
            break;
        case 5:
            resultat = complexe1.division(complexe2);
            cout << "Résultat de la division : ";
            resultat.afficher();
            break;
        default:
            cout << "Choix invalide." <<endl;
    }