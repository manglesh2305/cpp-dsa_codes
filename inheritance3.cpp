#include<iostream>
using namespace std;
class student{
    protected :
         int roll_number;
    public :
         void set_roll_number(int);
         void get_roll_number(void);
};
void student :: set_roll_number(int r){
    roll_number=r;
}
void student :: get_roll_number(){
    cout<<"the roll number is "<<roll_number<<endl ;
}
class exam :  public student{
    protected :
       float maths , physics ;
    public :
       void set_marks(float,float);
       void get_marks(void);
};
void exam :: set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
}
void exam :: get_marks(){
    cout<<"marks obtained in maths "<<maths<<endl;
    cout<<"marks obtained in physics "<<physics<<endl;
}
class result : public exam {
    float percentage ;
    public :
    void display_results(){
        get_roll_number();
        get_marks();
        cout<<"your percentage is "<<(maths/2)+(physics/2)<<endl;
    }
};
int main(){
    result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0,90.0);
    harry.display_results();
    return 0;
}