#include<bits/stdc++.h>
using namespace std;

class Animal{
    private:
        int weight;
        friend void change(Animal &x);
    public:
        int legs;
        Animal(int x, int y){
            weight = x;
            legs = y;
        }

        
        void display(){
            cout<<"Animal weight is "<<weight<<" and legs is "<<legs<<endl;
        }
};

void change (Animal &x){
    x.weight = 50;
    x.legs = 8;
}

int main(){
    Animal dog(20,4);
    dog.display();
    change(dog);
    dog.display();
    return 0;
}
