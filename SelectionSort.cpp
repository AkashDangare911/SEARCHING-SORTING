/*
**************** SELECTION SORT **************
- e.g. playing cards set
- inserting elements at their correct indices in each iteration
- similar like bubble sort
- It never makes more than O(n) swaps and can be useful when memory write is a costly operation
- unstable, performs well on short arrays
- Worst Case - O(n2)
*/
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selection(int arr[],int n)
{
    int i,j,min,c=0;

    for( i=0;i<n-1;i++)
    {
        min=i;
        for( j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        if(min!=i)                  // if condition to avoid unneccessary swap of mimimum element with itself
        {
            swap(arr[min],arr[i]);
            c++;
        }
            //printArray(arr,n);      // display array after each iteration of i
    }
    cout<<"Total Swaps are : "<<c<<endl;
}

 int main()
 {
    int arr[]={65,25,333,7,12};
    int s=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before : "<<endl;
    printArray(arr,s);
    selection(arr,s);

    cout<<"After :  ";
    printArray(arr,s);
    return 0;
 }