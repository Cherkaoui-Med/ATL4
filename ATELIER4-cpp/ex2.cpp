#include<iostream>
using namespace std;
int main(){
char chaine_de_caracteres[13]="101220211410";
int i;
cout<<"la date est : le jour ";
for( i = 0; i < 2; i++)
{
    cout<<chaine_de_caracteres[i];
};
cout<<" du mois ";
for( i = 2; i < 4; i++)
{
    cout<<chaine_de_caracteres[i];
};
cout<<" de l'annee ";
for( i = 4; i < 8; i++)
{
    cout<<chaine_de_caracteres[i];
};
cout<<" à l'heure ";
for( i = 8; i < 10; i++)
{
    cout<<chaine_de_caracteres[i];
};
cout<<" : ";
for( i = 10; i < 12; i++)
{
    cout<<chaine_de_caracteres[i];
}; 
}

