#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int len, bre;
    int area(){
        return len*bre;
    }
    
} ;
int main(){
    Rectangle rectObj;

    cin>>rectObj.len;
    cin>>rectObj.bre;
    // cout<<rectObj.len;
    //  cout<<rectObj.bre;
    // cout<<"area"<<rectObj.len*rectObj.bre<<endl;
    cout<<"Area"<<rectObj.area()<<endl;

}

