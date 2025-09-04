//minimum no. of platforms - greedy 5

#include<iostream>
using namespace std;

int main()
{
    int n;
    int start[10];
    int end[10];

    cout<<"\nenter the no. of platforms:";
    cin>>n;

    cout<<"\nenter arrival:";
    for(int i=0;i<n;i++)
    {
        cin>>start[i];
    }

    cout<<"\nenter departure:";
    for(int i=0;i<n;i++)
    {
        cin>>end[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(end[i]< end[j])
            {
                int temp=end[i];
                end[i]=end[j];
                end[j]=temp;

                 temp=start[i];
                start[i]=start[j];
                start[j]=temp;

            }
        }
    }

    cout<<"\nsorted array:";
    for(int i=0;i<n;i++)
    {
        cout<<start[i]<<"-"<<end[i]<<endl;
    }
    
    int count=1;
    cout<<0<<"\t";
    int last_end = end[0];
    
    for(int i=0;i<n;i++)
    {
        
        if(start[i] > last_end)
            {
                cout<<i<<"\t";
                count++;
                last_end = end[i];
            }
        
    }

    cout<<"count:"<<count;
}