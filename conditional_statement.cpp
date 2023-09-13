//Take an int as input and if number is less than 9 ,print that number in the string or print greater than 9.

//method_1:

#include <iostream>
#include<string>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    if(n == 1) {
        cout << "one";
    }
    else if(n == 2) {
        cout << "two";
    }
    else if(n == 3) {
        cout << "three";
    }
    else if(n == 4) {
        cout << "four";
    }
    else if(n == 5) {
        cout << "five";
    }
    else if(n == 6) {
        cout << "six";
    }
    else if(n == 7) {
        cout << "seven";
    }
    else if(n == 8) {
        cout << "eight";
    }
    else if(n == 9) {
        cout << "nine";
    }
    else {
        cout << "Greater than 9";
    }
    
    return 0;
}

//method-2:

#include<iostream>
using namespace std;
int main() {
int in;
string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
cin >> in;
if(in > 9){
    cout << num[0];
}
else{
    cout << num[in];
}
return 0;
}

//method-3:

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n)
    {
        case 1:
        cout<<"one";
        break;
        case 2:
        cout<<"two";
        break;
        case 3:
        cout<<"three";
        break;
        case 4:
        cout<<"four";
        break;
        case 5:
        cout<<"five";
        break;
        case 6:
        cout<<"six";
        break;
        case 7:
        cout<<"seven";
        break;
        case 8:
        cout<<"eight";
        break;
        case 9:
        cout<<"nine";
        break;
        default:
        cout<<"Greater than 9";
    }
    return 0;
}
