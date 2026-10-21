#include<iostream>
#include<string>
using namespace std;
class student {
    private:
    int rollno;
    string name;
    public:
    student(int r, string s){
        rollno=r;
        name=s;
        cout<<"student obj created"<<endl;
    }
    void display(){
        cout<<"roll no:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
    }
    ~student(){
        cout<<"student obj destroyed"<<endl;
    }
};
int main(){
    student s1(105,"varun");
    s1.display();
    return 0;

}