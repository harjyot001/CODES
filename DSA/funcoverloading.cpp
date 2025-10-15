#include<iostream>
using namespace std;
class area{
    public:
    void shape(int a){
        cout<<"Area of square:"<<a*a<<endl;
    }
    void shape(int a , int b){
        cout<<"Area of recangle:"<<a*b<<endl;
    }
    void shape(int a, int b, int c){
        cout<<"Area of circle:"<<a*b*c<<endl;
    }
     void shape(float a ){
        cout<<"Area of circle:"<<3.14*a*a<<endl;    
    }
};
int main(){
    area a;
    a.shape(10,1);
    a.shape(10,2);
    a.shape(10,2,4);
    a.shape(10.4f);
    
}