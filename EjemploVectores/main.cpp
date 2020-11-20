#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Clase Member
class Member{
    public:
    // Constructor parametrizado
        Member(string name, int age, string psd){
            this->_name = name;
            this->_age = age;
            this->_psd = psd;
        }
    // Método get Name
        string getName(){
            return _name;
        }

    private:
        string _name;
        string _psd;
        int _age;
};

// Clase Application
class Application{
    public:
        void create_member(string name, int age, string psd){
            _members.push_back(new Member(name, age, psd));
        }
        void show_members(){
            for(unsigned int i=0;i<_members.size();i++){
                cout << "Member: " << _members[i]->getName() << endl;
            }
        }

    private:
        vector <Member *> _members;

};

int main()
{
    //Creamos un objeto Application
    Application *Manager = new Application;
    // Datos miembro 1
    string name = "Marcos";
    int age = 27;
    string psd = "afadsf78a9fa8fd";

    //Creamos el miembro mediate el método create member
    Manager->create_member(name, age, psd);

    //Datos miembro 2
    name = "Ana";
    age = 34;
    psd = "kdsfjl434jlkasa";

    //Creamos el miembro mediate el método create member
    Manager->create_member(name, age, psd);
    // Datos miembro N....


    // Vemos los miembros
    Manager->show_members();
    return 0;
}

