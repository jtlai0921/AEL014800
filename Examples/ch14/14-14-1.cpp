/* 貓類別練習*/
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
    name = "未知";
    type = "未知";
    weight = -1;
}

cat::cat(string n, string t, int w){
    name = n;
    type = t;
    weight = w;
}

void cat::feed(){
    cout<<"餵食 "<<name<<endl; 
    weight++; 
}

void cat::play(){
    if(weight>0){
        cout<<"與 "<<name<<" 玩耍"<<endl;
        weight--;
    } 
    else cout<<"喵... 我好餓..."<<endl;
}

void cat::print(){
    cout<<"名稱: "<<name<<" 類別: "<<type<<" 體重: "<<weight<<endl;  
}

int main(void)
{
    cat kitty;
    kitty.name = "凱蒂";
    cat doraemon("多啦A夢", "機器貓", 1000);
    cat garfield("加菲", "虎斑貓", 5);
    
    kitty.print();
    doraemon.print();
    garfield.print();
    
    kitty.setType("無嘴貓");
    kitty.setWeight(10);
    garfield.feed();
    doraemon.play();
    

    kitty.print();
    doraemon.print();
    garfield.print();
    
    return 0;
}
