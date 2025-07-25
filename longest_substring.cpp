/* Find the longest substring where every letter appears in both cases using divide and conquer*/

#include<iostream>
#include<string>
using namespace std;

string divAndConquer(string s,int low,int high)
{
    if(high - low +1  < 2)
    {
        cout<<"no substring";
    }

    bool lower[26] = {false};
    bool upper[26] = {false};

    for(int i=low ; i<= high ;i++)
    {
        char ch = s[i];

        if(ch >= 'a' && ch <= 'z'){
            lower[ch -'a'] = true;    //scan the lower char
        }

        if(ch >= 'A' && ch <= 'Z'){
            upper[ch -'A'] = true;  //scan the upper char
        }
    }

    for(int i=low;i<=high;i++)
    {
        char ch=s[i];
        int index;

        if(ch>='a' && ch <='z')
        {
            index = ch-'a';
        }
        else{
            index = ch-'A';
        }

        bool islower = lower[index];
        bool isupper = upper[index];

        if(islower && isupper)
        {
            continue;
        }

        string left = divAndConquer(s,low,i-1);
        string right = divAndConquer(s,i+1,high);

        if(left.length() >= right.length())
        {
            return left;
        }
        else{
            return right;
        }
    }

    return s.substr(low,high-low+1);
}
int main()
{
    string s;
    cout <<"Enter a string:";
    cin>>s;

    string res = divAndConquer(s,0,s.length()-1);
    cout<<"Output: "<<res;
    return 0;

}