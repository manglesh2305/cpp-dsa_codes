#include<iostream>
using namespace std;
class student{
    protected :
        int roll_number ;
    public :;
        void set_number(int a){
            roll_number = a;
        }
        void print_number(){
            cout<<"your roll number is "<<roll_number<<endl;
        }
};
class test : virtual public student{
    protected :
        float maths , physics ;
    public :
        void set_marks(float m1, float m2){
            maths=m1;
            physics=m2;
        }
        void print_marks(){
            cout<<"your result is here "<<endl<<"maths : "<<maths<<endl<<"physics : "<<physics<<endl;
        }
};
class sports : virtual public student {
    protected :
    float score ;
    public :
    void set_score(float sc){
        score = sc;
    }
    void print_score(){
        cout<<"your pt score is "<<score<<endl;
    }
};
class result : public test , public sports{
    private :
    float total ;
    public :
    void display(){
        total= maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is "<<total<<endl;
    }
};
int main(){
    result harry;
    harry.set_number(4200);
    harry.set_marks(78.6,85.3);
    harry.set_score(9);
    harry.display();
    return 0 ;
}