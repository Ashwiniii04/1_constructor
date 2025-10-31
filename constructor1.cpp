#include <iostream>
using namespace std;

class character{
    public:
    character(){
        cout<<"fantasy journey has started:"<<endl;
        cin>>name;
        cin>>age;
        cin>>race;
        cin>>height;
    }
    string name;
    int age;
    string race;
    int height;
    int attackpower;
    
    void PrintName(){
        cout<<name<<endl;
        
    }
    
    void PrintAge(){
        cout<<age<<endl;
    }
    
    void PrintRace(){
        cout<<race<<endl;
    }
    
    void PrintHeight(){
        cout<<height<<endl;
    }
    
    void PrintAttackpower(){
        cout<<height*10<<endl;
    }
};

int main(){
     character c1;
     character c2;
    
    // c1.name = "SKYLER";
    // c1.age = 200;
    // c1.race = "Bugbear";
    // c1.height = 16;

    c1.PrintName();
    c1.PrintAge();
    c1.PrintRace();
    c1.PrintHeight();
    c1.PrintAttackpower();

    // c2.name = "ilay";
    // c2.age = 1001;
    // c2.race = "elf";
    // c2.height = 4;
    
    c2.PrintName();
    c2.PrintAge();
    c2.PrintRace();
    c2.PrintHeight();
    c2.PrintAttackpower();
}
