#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class student{
    string name;

    public:
    // string name;
    int age;
    char gender;

    student(){
        cout<<"Default cotructor"<<endl;
    }//default constructor

    student(string s, int a, char g){
        name=s;
        age=a;
        gender=g;
    }//parameterised constructor

    student(student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
        // printInf();
    }//copy sonstructor

    ~student(){
        cout<<"Destructor called"<<endl;
    }//called when main function return for ever structure

    bool operator == (student &a){
        cout<<name<<a.name<<endl;
        if(a.name==name && a.age==age && a.gender==gender)
        return true;
        else
        return false;
    }

    void setName(string s){
        name=s;
    }

    void getName(){
        cout<<name;
    }

    void printInf(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
    }
};
int main(){
    student a;
    // a.name="vikas";   // if data member is public
    a.setName("Vikas");
    a.age=19;
    a.gender='M';
    // cout<<a.age<<endl;
    // student stu[2];
    // string s;
    // for (int i = 0; i < 2; i++)
    // {
    //     // cin>>stu[i].name;
    //     cin>>s;
    //     stu[i].setName(s);
    //     cin>>stu[i].age;
    //     cin>>stu[i].gender;
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     stu[i].printInf();
    // }

    student b("Aryan",20,'M');
    b.printInf();
    student c=a;

    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout <<"Different"<<endl;
    }

 return 0;
}
