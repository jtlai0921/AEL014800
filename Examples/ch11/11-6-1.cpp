/* typedef */
#include <iostream>
#include<string>
using namespace std;
struct people {
     string name;
     int age;
};
typedef struct people STUDENT;

int main(){
    STUDENT stu1;
    STUDENT stu2;
    stu1.name="Max";
    stu1.age=8;
    stu2.name="Marry";
    stu2.age=6;
    cout<<"Student1 "<<stu1.name<<" age: "<<stu1.age<<endl;
    cout<<"Student2 "<<stu2.name<<" age: "<<stu2.age<<endl;
    return 0;
}
