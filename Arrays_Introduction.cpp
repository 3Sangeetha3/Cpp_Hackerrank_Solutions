#include <iostream>
using namespace std;


int main() {
    int n,a[1000];
    cin>>n;   
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
    return 0;
}

/*  using class object method
#include <iostream>
using namespace std;
class Array
{
    private:
    int n, a[10];
    public:
    void readarr();
    void getarr();
};
void Array::readarr()
{
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
}
void Array::getarr()
{
    for(int i=n-1;i>=0;i--)
    cout<<a[i]<<" ";
}
int main()
{
    Array a1;
    a1.readarr();
    a1.getarr();
    return 0;
}
*/
