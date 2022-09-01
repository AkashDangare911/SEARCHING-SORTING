/*
*************** MERGE SORT **************
*/
#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int h)
{
    int i=l;
    int j=mid+1;
    int k=l;

    int temp[h+1];              // creating a new array of same size

    while(i<=mid && j<=h)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];         // copying elements to new array in ascending order
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
         k++;
    }

    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }

    while(j<=h)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }

   for(int z=l;z<=h;z++)
   {
    arr[z]=temp[z];             // copying remained elements into newly created array
   }
}

void mergeSort(int arr[],int l,int h)
{
    if(l<h)                 // base condition
    {
        int mid=(h+l)/2;        // dividing array halfway, and recursively calling both sub-arrays
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);

        merge(arr,l,mid,h);
    }
}

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    int arr[size];

    cout<<"Enter array elements :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Before sorting :";
    print(arr,size);
    mergeSort(arr,0,size-1);            // function call
    
    cout<<"After Sorting :";
    print(arr,size);

    return 0;
}