#include <iosteam>
#include <list>
#include <iterator>
using namespace std;
int main(){
    char nom;
    char prenom;
    char age;
    cout<<" veuillez entrer les 3 champs"<<endl;
    cin>>nom;
    cin>>prenom;
    cin>>age;
    list<int> l={nom, prenom, age};
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();++it){
        if(*it>*it+1){
            char temp=*it;
            *it=*it+1;
            *it+1=temp;
        }
    }

}
return 0;