#include<iostream>
using namespace std;

int main(){
    int coins[10];
    int n;
    int v,sum=0,psum;
  

    cout<<"\nenter no. of coins:";
    cin>>n;

    int temp[n];
    cout<<"\nenter coins:";
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(coins[i]>coins[j])
            {
                int temp = coins[i];
                coins[i]=coins[j];
                coins[j]=temp;
            }
        }
    }

    cout<<"\nenter total sum:";
    cin>>v;

    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i;j<=n;j++)
        {
            count++;
            psum = sum;
            sum=sum+coins[i];
           
            if(sum > v){
                break;
            }
        }

        for(int k=0;k<count-1;k++)
        {
            temp[k]=coins[i];
            cout<<temp[k]<<"\t";
        }
        sum=psum;
    }


    
    cout<<"\nresult:"<<sum;


    return 0;
}