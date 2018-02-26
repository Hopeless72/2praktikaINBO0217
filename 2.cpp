#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
    float a,b,y,t;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;

    if (a<=b){
        y= (a-b)/(a+b)*(a+b)/(a*a-a*b+b*b);
        cout<<"y = "<<y<<endl;
    }
    else {
        y=a+log(b*b);
         cout<<"y = "<<y<<endl;
    }

    if(y=b) {
       t= (2*y+sqrt(y*y-a))/(2*b-sqrt(a*a-y));
       cout<<"t = "<<t;
    }
    else if (y<b){
        t=pow(sin(y),2)+1/tan(a-b);
        cout<<"t = "<<t;
    }
     else if (y>b){
        t=sqrt(y*sin(a))+1/sqrt(y*cos(b));
        cout<<"t = "<<t;
     }
    return 0;
}
