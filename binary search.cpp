#include<iostream>

using namespace std;
int MyFun()
{
    
}
int recursive_binary_search(int arr[],int L, int R, int val)
{
    int mid = (L+R)/2;
    if(R>=L)
    {
        if(arr[mid]==val)
        {
            return mid;
        }
        else if(val> arr[mid])
        {
            L = mid++;
            recursive_binary_search(arr,L,R,val);
        }
        else if(val<arr[mid])
        {
            R = mid--;
            recursive_binary_search(arr,L,R,val);
        }
    }
    else
    {
        return -1;
    }

}

int iterative_binary_search(int arr[],int L, int R, int val)
{
    while(R>=L)
    {
        int mid = (L+R)/2;
        if(val==arr[mid])
        {
            return mid;
        }
        else if(val<arr[mid])
        {
            R = mid--;
        }
        else if(val> arr[mid])
        {
            L = mid++;
        }
    }
    return -1;

}

int main()
{
    int arr[] = {22,25,28,32,37,43,55,61,76,83,87,92,102,104};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = recursive_binary_search(arr,0,size-1,104);
    (index ==-1)? cout<<"element not found" : cout<<"element found. index is: "<<index<<endl;
    index = iterative_binary_search(arr,0,size-1,92);
    (index ==-1)? cout<<"element not found" : cout<<"element found. index is: "<<index<<endl;

}
