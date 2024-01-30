#include<iostream>
using namespace std;
class CollegeCourse
{   float hp ;
    string courseId;
    int gp;
    char grade;
    int credits;    
    public:
        void set_CourseID(string CID){
              CID=courseId;
              cin>>
         }
        void set_Grade(char g){
              g=grade;
        }
        void set_Credit(int cr){
            cr=credits;
        }
        int calculateGradePoints(char g){
             ;
            if(g=='A'){
                return 10 ;
            }
            else if (g=='B'){
                return 9 ;
            }
            else if(g=='C'){
                return 8;
            }
            else if (g=='D'){
                return 7;
            }
            else if (g=='E'){
                return 6;
            }
            else if (g=='F'){
                return 5 ;
            }
            else {
                cout<<"invalid input";
            }
        }
        float calculateHonorPoints(int gp,int cr){
            hp =gp*cr
            return hp ;
        }
        void display(void){
            cout<<gp<<endl<<hp;
        }
};

int main()
{
    {
    CollegeCourse cc;
    
    cin>>courseId>>grade>>credits;
    cc.set_CourseId(courseId);
    cc.set_Grade(grade);
    cc.set_Credit(credits);
    gp=cc.calculateGradePoints(grade);
    cc.calculateHonorPoints(gp,credits);
    cc.display();
    }
    return 0;