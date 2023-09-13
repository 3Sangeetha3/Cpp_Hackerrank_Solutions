#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<fixed<<setprecision(3)<<d<<endl;
    cin.ignore();
    cout<<fixed<<setprecision(9)<<e;
    return 0;
}
