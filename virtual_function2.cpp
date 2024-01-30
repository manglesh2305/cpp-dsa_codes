#include<iostream>
#include<cstring>
using namespace std;
class CWH{
    protected :
    string title;
    float rating ;
public :
    CWH(string s, float r){
        title=s;
        rating =r;
    }
    virtual void display()=0;////----->>>>>>>pure virtual function . abstract base class.                             
      /*RULES OF VIRTUAL FUNCTIONS------>>>>>(1).They can not be static.
                                             (2).They are accessed by object pointers.
                                             (3).virtual function can be friend of an another class.
                                             (4).A virtual function in base class might not used .
                                             (5).If a virtual function is defined in a base class , there is no necessity of redefining it in the derived class*/
};
class cwhvideo : public CWH{
    float videolength;
    public :
        cwhvideo(string s, float r, float vl):CWH(s, r){
            videolength=vl;
        }
        void display(){
            cout<<"title "<<title<<endl;
            cout<<"rating "<<rating<<endl;
            cout<<"length of vdo "<<videolength<<endl;
        }
};
class cwhtext : public CWH {
    int words;
    public :
    cwhtext(string s, float r, int wc):CWH(s, r){
        words=wc;
    }
    void display(){
        cout<<"title "<<title<<endl;
        cout<<"rating "<<rating<<endl;
        cout<<"number of words"<<words<<endl;
    }
};
int main(){
    string title;
    float rating, vlen;
    int words;
    title = "django tute";
    vlen= 4.56;
    rating= 4.23;
    cwhvideo djvideo(title, rating, vlen);
    djvideo.display();
    title ="django text";
    words =452;
    rating=4.10;
    cwhtext djtext(title, rating, words);
    djtext.display();
    CWH* tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;
    tuts[0]->display();
    tuts[1]->display();
}