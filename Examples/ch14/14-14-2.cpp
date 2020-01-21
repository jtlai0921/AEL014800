/* 繼承練習*/
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
    name = "未知";
    type = "未知";
    weight = -1;
}

void Animal::print(){
    cout<<"名稱: "<<name<<" 類別: "<<type<<" 體重: "<<weight<<endl;  
}

Cat::Cat(string n,string t,int w,int bl,int tl){
    name = n;
    setType(t);
    setWeight(w);
    body_length=bl;
    tail_length=tl;
}

void Cat::print_length(){
    cout<<"身長: "<<body_length<<" 尾長: "<<tail_length<<endl;
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
    cout<<"名稱: "<<name<<" 類別: "<<getType()<<" 體重: "<<getWeight()<<" 身高: "<<height<<" 寵物: "<<pet.name<<endl;
}

int main(void)
{
    Human myself("小李", "亞洲人", 64, 172);
    Cat mypet("喵仔", "暹邏貓", 7, 30, 20);
    myself.setPet(mypet);

    myself.print();

    cout<<"他的寵物是: ";
    myself.getPet().print();
    mypet.print_length();

    return 0;
}
