#include<iostream>
using namespace std;

int main()
{
    int score[10],candy[10];
    int count=0,n;

    cout<<"\nenter no. of student:";
    cin>>n;

    cout<<"\nenter score of students:";
    for(int i=0;i<n;i++)
    {
        cin>>score[i];
    }

    for(int i=0;i<n;i++)
    {
        candy[i]=1;
    }

    for(int i=0;i<n;i++)
    {
        if(score[i] < score[i+1])
        {
            candy[i+1]=candy[i]+1;
        }
        else if(score[i] >  score[i+1])
        {
            if(candy[i]==candy[i+1]){
                candy[i]++;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        count=count+candy[i];
    }

    cout<<"total candies:"<<count;
}