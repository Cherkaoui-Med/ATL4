#include<iostream>
#include<set>
#include<list>
#include<vector>
using namespace std;
//declaration des conteneurs list,set et vecteur , et ses iterateurs
    set<int> myset;
    list<int> mylist;
    vector<string>myvector{"a","b","c","d","e"};
    vector<string>::iterator itrvector;
    vector<float> mytable{3,25.0,7.8,9.6};
    list<int>::iterator itrlist;
    vector<float>::iterator itrtable;
    set<int>::iterator itrset;
    // question 2 :
    bool recherche(int a)    //fonction booléenne 
    {
        for (itrset = myset.begin(); itrset != myset.end(); itrset++) //parcourir le set
        {   
            if(a==*itrset){return true;}; // si on trouve l'element cherché on retourne true
        }
        return false; //retourner false car dans ce cas on a pas trouvé l'element cherché
    };
    //question 3 :
    bool recherche_modee(int debut,int fin,int a) // fonction booléenne qui prend trois paramètres : le début et la fin de l'intervalle de recherche , et la valeur à rechercher
    {
        for (itrset = myset.find(debut); itrset != myset.find(fin); itrset++) // parcourir le set à partir du valeur donnée pour debut jusqu'à fin 
        {   
            if(a==*itrset){return true;}; // si on trouve l'element cherché on retourne true
        }
        return false;  //retourner false car dans ce cas on a pas trouvé l'element cherché
    };
    template<typename t,typename c,typename i>  // declaration d'unr template
    bool recherche_modee2(c cont,i itr,t a)  //fonction booléenne de trois paramètres : un pour le conteneur , un autre pour l'itérateur et le dernier pour la valaeur à rechercher
    {
        for (itr = cont.begin(); itr != cont.end(); itr++)
        {   
            if(a==*itr){return true;}; 
        }
        return false;
    };
int main()
{
    //question 1 :
    int i;
    for ( i = 1; i < 101; i++)
    {
        myset.insert(i);
    }
    // remplir la liste par des entiers de 200 jusqu'à 300:
    for ( i = 200; i < 301; i++) 
    {
        mylist.push_back(i);
    }
    //affichage du set
    cout << "Le set est : \n";
    for (itrset = myset.begin(); itrset != myset.end(); itrset++)
    {
    cout << *itrset<<" " ;
    }
    //affichage de la liste
    cout << "\nLa list est : \n";
    for (itrlist=mylist.begin(); itrlist != mylist.end(); itrlist++)
    {
    cout << *itrlist<<" " ;
    }
    cout<<endl;
    cout<<"............................................................................."<<endl;
    // test de la fonction recherche pour différents nombres :
    cout<<recherche(1)<<endl;
    cout<<recherche(27)<<endl;
    cout<<recherche(100)<<endl;
    cout<<recherche(500)<<endl;
    cout<<"............................................................................."<<endl;
    // test de la fonction recherche_modee pour une valeur existante dans l'intervalle donnée et autre non existante : 
    cout<<recherche_modee(10,25,20)<<endl;
    cout<<recherche_modee(10,18,20)<<endl;
    cout<<"............................................................................."<<endl;
    // test de la fonction recherche_modee2 pour les différents conteneurs avec des valeurs existants et autres non dans ces dernières
    cout<<recherche_modee2(myset,itrset,20)<<endl;
    cout<<recherche_modee2(myset,itrset,230)<<endl;
    cout<<recherche_modee2(mylist,itrlist,230)<<endl;
    cout<<recherche_modee2(mylist,itrlist,20)<<endl;
    cout<<recherche_modee2(myvector,itrvector,"e")<<endl;
    cout<<recherche_modee2(myvector,itrvector,"j")<<endl;
    cout<<recherche_modee2(mytable,itrtable,3)<<endl;
    cout<<recherche_modee2(mytable,itrtable,8.8)<<endl;
};