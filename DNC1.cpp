/*Implement a program of number of zeroes
Given an array of 1's and 0's which has all 1's first followed by all 0's. Find the number of 0's*/

#include<iostream>
using namespace std;

//using divide and conquer technique
class DNC{
    int n; //size
    int arr[20];

    public:
    void accept();
    void no_of_zeros();
};

void DNC::accept()
{
    cout<<"\nEnter the size of array:";
    cin>>n;

    cout<<"\nEnter the array elements of 1's and 0's:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] !=1 && arr[i] != 0)
        {
            cout<<"\nPlease enter only 1 or 0:";
            cin>>arr[i];
        }
    }

   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }*/
    cout<<"\nArray elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

void DNC::no_of_zeros() {
    int low = 0, high = n - 1, count = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == 0) 
        {
            count = mid;
            high = mid - 1; // continue searching on left side
        } else {
            low = mid + 1;
        }
    }

    if (count == -1) {
        cout << "Number of 0s = 0";
    } else {
        cout << "Number of 0s = " << n - count;
    }
}

int main()
{
    DNC d;
    int choice;
    do{
    cout<<"\n1.Accept\n2.Count of number of zeros\n";
    cout<<"\nEnter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        d.accept();
        break;

        case 2:
        d.no_of_zeros();
        break;

    }
    }while(choice !=0);
    return 0;
}