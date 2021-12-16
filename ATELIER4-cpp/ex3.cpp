#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> mylist;   //creation de la liste
    int m;
    int i;
    //demander a l'utilisateur d'entrer une liste de nombres avec une condition d'arrete : insertion de 0
    cout<<"inserez les nombres que vous voulez trier dans une liste (vous inserez un caractere au lieu d'un nombre quand vous terminez !)"<<endl;
    for (i = 0;; i++)  // une boucle pour enregistrer plusieurs nombres saisis par l'utilisateur
    {
    cin>>m;
    if(m==0)
    {
        break;   // arreter de prendre les nombres quand l'utilisateur insere 0
    }
    mylist.push_back(m); //chanque nombre saisi par l'utilisateur est ajoutee a la liste
    }
    list<int>::iterator it;  // declarer l'iterator it
    mylist.sort();     // trier la liste par la fonction sort()
    it=mylist.begin();
    cout<<"votre liste de nombre triee est : ";
    for (it;it!=mylist.end();it++)  //affichage des elements de la liste qui sont deja tries
    {
            cout<<*it<<"  ";
    }
}