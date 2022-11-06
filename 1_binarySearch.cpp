#include <iostream>
using namespace std;

int binarySearch(int arr[],int key,int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            
            return mid;
        }
        else
        {
            if(arr[mid]<key)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        mid=start+(end-start)/2;
    }
    
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    int key=4;

    int ans=binarySearch(arr,key,s);

    if(ans==-1){
        cout<<"Element is not present in the array . ";
    }
    else{
        cout<<key<<" is Found at index : "<<ans;
    }
    return 0;
}
