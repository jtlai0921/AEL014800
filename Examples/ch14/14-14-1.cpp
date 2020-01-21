/* �����O�m��*/
#include <iostream>
#include <string>
using namespace std;
class cat{
    public:
        string name;
        cat();
        cat(string, string, int);
        string getType(){return type;};
        void setType(string s){type = s;};
        int getWeight(){return weight;};
        void setWeight(int w){weight = w;};
        void feed();
        void play();
        void print();
        
    public:
        string type;
        int weight;
};

cat::cat(){
    name = "����";
    type = "����";
    weight = -1;
}

cat::cat(string n, string t, int w){
    name = n;
    type = t;
    weight = w;
}

void cat::feed(){
    cout<<"���� "<<name<<endl; 
    weight++; 
}

void cat::play(){
    if(weight>0){
        cout<<"�P "<<name<<" ���A"<<endl;
        weight--;
    } 
    else cout<<"�p... �ڦn�j..."<<endl;
}

void cat::print(){
    cout<<"�W��: "<<name<<" ���O: "<<type<<" �魫: "<<weight<<endl;  
}

int main(void)
{
    cat kitty;
    kitty.name = "�͸�";
    cat doraemon("�h��A��", "������", 1000);
    cat garfield("�[��", "�괳��", 5);
    
    kitty.print();
    doraemon.print();
    garfield.print();
    
    kitty.setType("�L�L��");
    kitty.setWeight(10);
    garfield.feed();
    doraemon.play();
    

    kitty.print();
    doraemon.print();
    garfield.print();
    
    return 0;
}
