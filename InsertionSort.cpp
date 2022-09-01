/*
************** INSERTION SORT **************
- Array get sorted in sub arrays in each step
- Steps get ruduced as array get sorted(lesser than bubble sort)
- used in hybrid sorting algorithms (mixing more sorts together)
-Worst Case = O(n2)
-Best Case  = O(n)
*/

#include<iostream>
using namespace std;

void insertion(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[]={5,4,3,2,1};
    int s=sizeof(arr)/sizeof(arr[0]); 
    cout<<"Before : ";  
    printArray(arr,s);
    insertion(arr,s);

    cout<<"After :  ";  
    printArray(arr,s);
    return 0;
}