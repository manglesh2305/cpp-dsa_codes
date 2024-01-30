#include<iostream>
using namespace std;
int c=78;
/*typedef struct employee 
{      int eid;
       char favchar;
       float salary;}my;*/
/*union money{
    int rice;
    float car;
    char pounds ;
    };*/
 int swap(int a , int b){
        int temp=a;
        a=b;
        b=temp;
        cout<<a<<endl<<b<<endl;
        }
int sum(int a , int b){
    int c =a+b;
    int d =a*b;
    return c;
}
int main(){
    int a=5,b=7;
    cout<<"value of a is:"<<a<<endl<<"value of b is:"<<b<<endl;
    cout<<sum(a,b);
    /*union money m1;
    m1.car=56.00;
     m1.pounds='C';
    m1.rice=89;
    cout<<m1.pounds<<endl;*/
    /*cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b";
    cin>>b;
    int c=a+b;
    cout<<"value of c is:"<<c<<endl<<"value of global c:"<<::c;*/
   /* float d =34.4;
    double f=56.654;
    cout<<sizeof(d);*/
    /*int age;
    cout<<"enter value of age:";
    cin>>age;*/
    /*if (age<18) {
        cout<<"you are kid";
    }
    else if (age==18){
        cout<<"you r just born";}
    else if (age>18) {
        cout<<"you can join us";
    }*/
    /*switch(age)
    {case 18 :
    cout<<"you are 18";
    break;
    case 23:
    cout<<"you are eligible";
    break;
    default :
    cout<<"no special cases";
    break;
    }*/
   /* int i =0;
    do{
        cout<<i<<endl;
        i++;
    }
    while(true);*/
   /* for (int i =1;i<10;i++){
        
        if(i==5){
            break;
        }
        cout<<i<<endl;

    }*/
   /* int a =3;
    int* b=&a;
    cout<<"address of a is:"<<&a<<endl;
    cout<<"address of a is:"<<b<<endl;
    cout<<"value at address b is:"<<*b<<endl;*/
    /*int marks[4]={456,785,154,589};
    //cout<<marks[0]<<endl<<marks[1]<<endl<<marks[3];
    int* p=marks;
    cout<<*p<<endl;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    int* b=&marks[0];
    cout<<b<<endl;
    int* c=&marks[1];
    cout<<c;*/
    /*my golu;
    golu.eid=23;
    golu.favchar='M';
    golu.salary=100000;
    cout<<"id of employee is:"<<golu.eid<<endl<<"fav character of employee is:"<<golu.favchar<<endl<<"salary of employee is:"<<golu.salary<<endl;*/
    /*enum meal {breakfast,lunch ,dinner};
    meal m1=lunch;
    cout<<m1<<endl;
    meal m2=dinner;
    cout<<m2;*/
   
    

    
    


    

    return 0;
}