#include<iostream>
using namespace std;
class thispointer{
    public: 
    void dislay(){
        cout<<"This pointer holds:"<<this<<endl;

    }
};
int main(){
    thispointer obj;
    obj.display();
    return 0;
}