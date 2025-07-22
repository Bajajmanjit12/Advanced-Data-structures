#include<iostream>
using namespace std;

class BS{
    int n; //size
    int keys[30];

    public:
    void accept();
    void search();
};

void BS::accept()
{
    cout<<"\nEnter the size of array:";
    cin>>n;

    cout<<"\nEnter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>keys[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(keys[i]<keys[j])
            {
                int temp = keys[i];
                keys[i] = keys[j];
                keys[j] = temp;
            }
        }
    }
    cout<<"\nArray elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<keys[i]<<"\t";
    }

}

void BS::search()
{
    int low=0,high=n-1,flag=0;
    int target;
    cout<<"\nEnter the target to search:";
    cin>>target;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(target < keys[mid])
        {
            high=mid-1;
        }
        else if(target > keys[mid])
        {
            low = mid+1;
        }
        else if(target == keys[mid]){
            flag =1;
            cout<<"\nTarget found at "<<mid;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"\n"<<target<<" not found\n";
    }
}

int main()
{
    BS s;
    int choice;
    do{
    cout<<"\n1.Accept\n2.Search the element\n";
    cout<<"\nEnter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        s.accept();
        break;

        case 2:
        s.search();
        break;

    }
    }while(choice !=0);
    return 0;
}