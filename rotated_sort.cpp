#include<iostream>
using namespace std;

int n;  //size
int arr[30];
class sort_arr
{
    
    public:
    void accept()
    {
        cout<<"\nEnter the size of array";
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void find_min(int arr[],int n)
    {
        int low=0,high=n-1;
        while(low<high)
        {
        int mid=(low+high)/2;
        if(arr[mid] > arr[high])
        {
            low = mid+1;
        }
        else{
            high = mid ;
        }
    }

    cout<<"min num:"<<arr[low];
    }
};
int main()
{
    sort_arr s;
    s.accept();
    s.find_min(arr,n);
}