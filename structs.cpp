#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

struct student
{
    int age;
    string firstname;
    string lastname;
    int standard;
};
int main()
{
    student st;
    cin>>st.age>>st.firstname>>st.lastname>>st.standard;
    cout<<st.age<<" "<<st.firstname<<" "<<st.lastname<<" "<<st.standard;

    return 0;
}
