#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<string> mylist;   //creation de la liste
    string m;
    int i;
    //demander a l'utilisateur d'entrer une liste de personnes avec une condition d'arrete : insertion du mot arreter
    cout<<"inserez le nom, le prenom et l'age de chaque personne sous form de nom,prenom,age. inserez arreter quand vous terminez :"<<endl;
    for (i = 0;; i++)  // une boucle pour enregistrer plusieurs nombres saisis par l'utilisateur
    {
    cin>>m;
    if(m=="arreter")
    {
        break;   // arreter de prendre les noms,prenoms et ages quand l'utilisateur insere arreter
    }
    mylist.push_back(m); //chanque nobre saisi par l'utilisateur est ajoutee a la liste
    }
    list<string>::iterator it;  // declarer l'iterator it
    mylist.sort();     // trier la liste par la fonction sort()
    it=mylist.begin();
    cout<<"votre liste triee est : ";
    for (it;it!=mylist.end();it++)  //affichage des elements de la liste qui sont deja tries
    {
            cout<<*it<<"  ";
    }
}