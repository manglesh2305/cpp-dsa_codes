#include<iostream>
#include<string.h>
using namespace std;
class student{
    private:
    int roll_no;
    char name[20];
    int marks[3];
    int total();
    public:
    void set_data(int r, char *n, int m1, int m2, int m3);
    void display(){
        cout<<endl<<roll_no<<endl<<name<<endl<<total();
    }
};
inline void student :: set_data(int r, char *n, int m1, int m2, int m3){
    roll_no=r;
    strcpy(n,name);
    marks[0]=m1; marks[1]=m2; marks[2]=m3;
}
int student :: total(){
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=marks[i];
        return sum;
    }
}
int main(){
    student s1;
    
}