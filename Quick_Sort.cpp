/*
One of the Fastest sorting technique
choose any element as 'pivot'
after each pass- 
    1. elements less than pivot are to LHS of pivot
    2. elements grater than pivot are to RHS of pivot
    3. Pivot is at the correct position in given array
Best Case - O(nlogn)
Average Case - O(nlogn)
Worst Case - O(n2)
Merge sort takes O(n) more space for mixed array
Merge sort is better for linked list not in continuous memory allocation such as array.
*/

#include<iostream>
using namespace std;

void quick(int arr[],int start, int end)
{
    if(start>=end)
        return;

    int s=start;
    int e=end;
    int m=s+(e-s)/2;
    int pivot=arr[m];

    while(s<=e)
    {
        while(arr[s]<pivot)
        {
            s++;                    // increment start untill we find element greater than pivot
        }
        while(arr[e]>pivot)
        {
            e--;                    // decrement end untill we find element lesser than pivot
        }

        if(s<=e)
        {
            int temp=arr[s];
            arr[s]=arr[e];          // swapping start and end
            arr[e]=temp;

            s++;
            e--;
        }
        //recursively calling the function again for two half arrays
        quick(arr,start,e);         
        quick(arr,s,end);
    }
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
    quick(a,0,size-1);      // passing start and end to sort function

    cout<<"\nAfter :";
    print(a,size);
    return 0;
}