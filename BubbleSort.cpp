/*
***************** BUBBLE SORT ***************
After every iteration - largest element is sent to the end of array
- WORST CASE TIME COMPLEXITY - O(n^2)
*/
#include <iostream>
using namespace std;

void bubble(int arr[],int s)
{
    int count=0;                    // to count no of iterations
    int swaps=0;
    for(int i=0;i<s-1;i++)          
    {
        for(int j=0;j<s-i-1;j++)        
        {
            count++;
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaps++;
            }
        }
    }
    cout<<endl<<"Iterations :"<<count<<endl<<"No of swaps : "<<swaps<<endl;
}
void print(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[]={5,4,0,2,34,5,-33,23,424,2334,53,1};
    int size=sizeof(a)/sizeof(a[0]);

    cout<<"Before :";
    print(a,size);
    bubble(a,size);

    cout<<"\nAfter :";
    print(a,size);

    return 0;
}
