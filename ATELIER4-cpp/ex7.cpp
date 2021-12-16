#include<iostream>
#include<list>
using namespace std;
class animal;
class chat;
class chien;
class race;
class entraineur;
class elments;
class compitition;
class repas;

class animal
{
    protected :
    string nom;
    int age;
    string genre;
};
class chat : public animal
{
    private :
    string type;
    public :
    void sauter();
    friend class repas;
};
class race
{
    protected :
    string specificite;
    void israceHybrid();
};
class chien : public animal
{
    private :
    string taille;
    list<entraineur> listentraineur ;
    public :
    void ischass3();
    void setlistB(list<entraineur> listentraineur ){
    this->listentraineur = listentraineur ;
    }
    list<entraineur> getlistentraineur(){
    return this->listentraineur ;
    }
};
class chien : public race{};
class entraineur
{
    private :
    string nom;
    string description;
    list<chien> listchien ;
    void setlistchien(list<chien> listchien){
    this->listchien = listchien ;
    }
    list<chien> getlistchien(){
    return this->listchien ;
}
};
class compitition
{
    private :
    string date;
    string nom;
    chien chienobj;
    entraineur entraineurobj;
    public :
    int ordre;
    void setA(chien chienobj){
    this->chienobj = chienobj ;
    }
    chien getchien(){
    return this->chienobj ;
    }
    void setentraineur(entraineur entraineurobj){
    this->entraineurobj = entraineurobj ;
    }
    entraineur getentraineur(){
    return this->entraineurobj ;
    }
};
class repas
{
    private :
    string nom;
    int heure;
    string description;
    list<elments> *listelments ;
    public :
    friend class chat;
    repas()
    {
        // une instance de elments dans repas car c'est une relation de composition 
        listelments = new list<elments>();
    }
    void setlistelments(list<elments> *listelments)
    {
        this->listelments = listelments;
    }
    list<elments> * getlistelments()
    {
        return this->listelments ;
    }
    ~repas()
    {
        // detruire la liste listelments en meme temps de la destruction de repas
        delete this->listelments ;
        cout<<"call dist of repas"<<endl;
    };
};
class elments
{
    private :
    string nom;
    string type;
    repas repasobj;
    void setrepas(repas repasobj)
    {
    this->repasobj = repasobj ;
    }
    repas getrepas()
    {
    return this->repasobj ;
    }
    ~elments(){
    cout << "call dist of elments" << endl ;
    }
};


int main()
{

}