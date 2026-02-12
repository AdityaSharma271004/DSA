// Array

#include <iostream>
using namespace std;

/*
int main()
{
    int grade[5] = {1, 2, 3, 4, 5}; // declaration of array

        // cout<<grade[0]<<endl;
        int size = 5;

// loop
    for (int i = 0; i < size; i++)
    {
        cout << grade[i] << endl;
    }

    return 0;
}*/

// find smallest number in the given array

/*
int main(){
    int arr[]={5,15,22,1,-15,24};
    int size= 6;
    int smallest = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<smallest<<endl;
    return 0;
}*/

// find greatest number in the given array

/*
int main(){
    int num[]={2,67,34,23,90,65,92};
    int size = 7;
    int maximum = INT_MIN;
    for(int i = 0; i< size; i++){
        if(num[i]> maximum){
            maximum = num[i];
        }
    }
    cout<<maximum <<endl;
    return 0;

}*/

// function (pass by reference)

/*
void change(int arr[], int size){
    cout<<"In functin"<<endl;
    for(int i=0; i<size; i++){
        arr[i]= 2*arr[i];

    }
}


int main(){
    int arr[]={1,2,3,4};
    change(arr, 4);
    cout<<"In main"<<endl;
    for(int i=0; i<4; i++){
        cout<<arr[i]<<endl;

    }


    return 0;
}*/

// linear search

/*
int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    int target = 4;
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] == target)
        {

            cout << "target found at: " << i << endl;
        }
        
    }
    return -1;
}*/

int main(){
    int arr[]={1,2,3,4,5};
    int size = 5;
    int start = 0;
    int end=size-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}