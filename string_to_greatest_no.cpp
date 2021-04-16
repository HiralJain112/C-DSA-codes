#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="63109";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
    return 0;
}