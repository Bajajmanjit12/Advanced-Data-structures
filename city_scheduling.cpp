//two-city scheduling greedy - 8

#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int a[10][10];

    cout<<"\nenter:";
    cin>>m>>n;

    cout<<"\nenter elements:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\nelements:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    int  min=0;
    for(int i=0;i<m;i++)
    {
        int j=0;
            if(a[i][j] < a[i][j+1])
            {
                min = min + a[i][j];
                cout<<"\nmin1:"<<min;
            }
            else{
                min+=a[i][j+1];
                cout<<"\nmin2:"<<min;
            }
    
    }
cout<<"\nminimum cost:"<<min;

}