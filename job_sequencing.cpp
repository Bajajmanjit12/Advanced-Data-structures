//job sequencing problem- greedy 4

#include<iostream>
using namespace std;

int main()
{
    int n,id[10],dead[10],profit[10];
    cout<<"\nEnter number of jobs:";
    cin>>n;

    cout<<"\nEnter the id:";
    for(int i=0;i<n;i++)
    {
        cin>>id[i];
    }

    cout<<"\nEnter the deadline:";
    for(int i=0;i<n;i++)
    {
        cin>>dead[i];
    }

    cout<<"\nEnter the profit:";
    for(int i=0;i<n;i++)
    {
        cin>>profit[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(profit[i] > profit[j])
            {
                int temp = dead[i];
                dead[i] =  dead[j];
                dead[j] = temp;

                temp = profit[i];
                profit[i] =  profit[j];
                profit[j] = temp;

                temp = id[i];
                id[i] =  id[j];
                id[j] = temp;

            }
        }
    }

    cout<<"\nid\tdeadline\tprofit:\n";
    for(int i=0;i<n;i++)
    {
        cout<<id[i]<<"\t"<<dead[i]<<"\t"<<profit[i]<<"\n";
    }

    int max_slot = dead[0],sum=0;

    for(int i=0;i<max_slot;i++)
    {
        sum = sum + profit[i];
    }
    cout<<"\nTotal sum:"<<sum;
}