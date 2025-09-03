#include<iostream>
using namespace std;

int main(){
    int t,n;
    int a[10];

    cout<<"\nEnter size:";
    cin>>n;

    cout<<"\nEnter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"\nenter the max task time";
    cin>>t;


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(sum<=t)
        {
            count++;
            sum=sum+a[i];
            cout<<"sum:"<<sum;
        }
    }

    cout<<"\nMaximum task done:"<<count-1;
}