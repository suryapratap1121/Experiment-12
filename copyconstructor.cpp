#include<iostream>
using namespace std;

class student{
    int rno;
    string name;
    int fee;
    
    public: 
    student(int rn, string nm, int fe){
        rno=rn;
        name=nm;
        fee=fe;
    }
    student(student &t){
        rno=t.rno;
        name=t.name;
        fee=t.fee;
    }
    void display(){
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
};

int main(){
    student s(15,"Student1",10000);
    s.display();
    student Student1(s);//copy constructor called
    Student1.display();
    
    return 0;
}
// Output
// 15	Student1	10000
// 15	Student1	10000
