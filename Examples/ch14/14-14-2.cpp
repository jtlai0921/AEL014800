/* �~�ӽm��*/
#include <iostream>
#include <string>
using namespace std;
class Animal{
    public:
        string name;
        Animal ();
        string getType(){return type;};
        void setType(string s){type = s;};
        int getWeight(){return weight;};
        void setWeight(int w){weight = w;};
        void print();
        
    private:
        string type;
        int weight;
};

class Cat:public Animal{
    public:
        Cat(){Animal();body_length=-1;tail_length=-1;};
        Cat(string,string,int,int,int);
        void print_length();
        
    private:
        int body_length;
        int tail_length;
};

class Human:public Animal{
    public:
        Human(){Animal();height=-1;};
        Human(string,string,int,int);
        void setPet(Animal);
        Animal getPet();
        void print();
        
    private:
        int height;
        Animal pet;
};

Animal::Animal(){
    name = "����";
    type = "����";
    weight = -1;
}

void Animal::print(){
    cout<<"�W��: "<<name<<" ���O: "<<type<<" �魫: "<<weight<<endl;  
}

Cat::Cat(string n,string t,int w,int bl,int tl){
    name = n;
    setType(t);
    setWeight(w);
    body_length=bl;
    tail_length=tl;
}

void Cat::print_length(){
    cout<<"����: "<<body_length<<" ����: "<<tail_length<<endl;
}

Human::Human(string n,string t,int w,int l){
    name = n;
    setType(t);
    setWeight(w);
    height=l;
}

void Human::setPet(Animal a){
    pet=a;
}

Animal Human::getPet(){
    return pet;
}

void Human::print(){
    cout<<"�W��: "<<name<<" ���O: "<<getType()<<" �魫: "<<getWeight()<<" ����: "<<height<<" �d��: "<<pet.name<<endl;
}

int main(void)
{
    Human myself("�p��", "�Ȭw�H", 64, 172);
    Cat mypet("�p�J", "���޿�", 7, 30, 20);
    myself.setPet(mypet);

    myself.print();

    cout<<"�L���d���O: ";
    myself.getPet().print();
    mypet.print_length();

    return 0;
}
