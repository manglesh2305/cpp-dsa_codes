#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x,y;
    public:
    point(int a , int b){
        x=a;
        y=b;
    }
    friend void distance(point , point);
    void displaypoint(){
        cout<<"your point is ("<<x<<","<<y<<")"<<endl;
    }
};   
void distance(point p1, point p2){
    float d1,d2,d;
    d1=(p1.x)-(p2.x);
    d2=(p1.y)-(p2.y);
    d=sqrt((d1*d1)+(d2*d2));
    cout<<"distance between two points is "<<d<<endl;
    }

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    point p(a,b);
    p.displaypoint();
    point q(c,d);
    q.displaypoint();
    distance(p,q);
    return 0;
}