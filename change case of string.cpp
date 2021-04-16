#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{  /*
    string str="abcD";
    cout<<'a'-'A'<<endl;
    //to convert to uppper case
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }  
    }
    cout<<str<<endl;
    //to lower case
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }  
    }
    cout<<str;
     */
    //direct function
    string s="khjknn",s2="ABDS";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<s2;
    return 0;
}