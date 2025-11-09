#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout << "Enter three sides: ";
cin >> a >> b >> c;
if (a==b && b==c){
    cout << "Equilateral Triangle" << endl;
}
else if (a==b && b!=c){
    cout << "Isosceles Triangle" << endl;
}
else if (a==c && b!=a){
    cout << "Isosceles Triangle" << endl;
}
else if (b==c && b!=a){
    cout << "Isosceles Triangle" << endl;
}
    else {
        cout << "Scalene Triangle" << endl;
    }
    return 0;
}
