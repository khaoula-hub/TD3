// par bulle
#include <iosteam>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> l;
    list<int>::iterator it1;
    list<int>::iterator it2
    int taille;
    for(it1=l.begin();it1!=l.end();++it1)
    cout<<' '<<*it;
    cout<<'';
    for(it1=l.begin();it1!=l.end();++it1){
        for(it2=l.begin();it2!=l.end()-1;++it2){
            if(*it2>*it1){
                temp=*it2;
                *it2=*it1;
                *it1=*temp;
            }
        }
    }
    for(it1=l.begin();it1!=l.end();++it1)
    cout<<' '<<*it;
    return 0;}
    
    //par selection
    #include <iosteam>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> l;
    list<int>::iterator it1;
    list<int>::iterator it2;
    for(it1=l.begin();it1!=l.end();++it1)
    cout<<' '<<*it1;
    cout<<'';
    for(it1=l.begin();it1!=l.end()-1;++it1){
        {
            int min=*it;
            for(*it2=*it1+1){

            }
        
            
        }
    }
    for(it1=l.begin();it1!=l.end();++it1)
    cout<<' '<<*it;
    return 0;}

    