#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a,b;
    char temp;
    cin>>a;
    cin>>b;
    int len1 =a.size();
    int len2 =b.size();
    cout<<len1<<" "<<len2<<endl;
    //conc
    string c;
    c = a + b;
    cout<<c<<endl;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b;
    return 0;
}
