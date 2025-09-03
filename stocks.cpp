#include<iostream>
using namespace std;

int main(){
    int n; //size
    int arr[20];

    cout<<"\nEnter the size(days):";
    cin>>n;

    cout<<"\nEnter the stock price:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=arr[0],profit=0;
    for(int i=0;i<n;i++)
    {
        if(min > arr[i]){
            min = arr[i];
        }
        else{
            profit = arr[i] - min;
        }
    }

    cout<<"\nTotal profit:"<<profit;
}