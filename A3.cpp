/*Implement a problem of smallest number with at least n trailing zeroes in factorial*/
#include<iostream>
using namespace std;

int count_zeroes(int n)
{
    int count =0;
    while(n>0)
    {
        n=n/5;
        count = count+n;
    }
    return count;
}
int main()
{
    int n;
    cout<<"\nEnter the number:";
    cin>>n;

    int low=0,high=5*n,min=-1;
    while(low <= high)
    {
        int mid=(low+high)/2;
    
            int temp_count = count_zeroes(mid);

            if(temp_count >= n)
            {
                min = mid;
                high = mid-1;
            }
            else
            {
                low= mid +1;
            }
    }
    cout<<"Smallest number with "<<n<<" trailing zeroes:"<<min<<endl;
    return 0;
}