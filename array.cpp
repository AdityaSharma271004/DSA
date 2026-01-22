#include<iostream>
using namespace std;

    // find smallest
    
    // int nums[]= {5,15,22,1,-15,24};
    // int size= 6;
    // int smallest = INT_MAX;
    
    // for(int i=0; i<size; i++){
    //     if(nums[i]< smallest){
    //         smallest = nums[i];
    //     }
    // }
    // cout<< "smallest ="<< smallest << endl;
    // return 0;

    //smallest = min(nums[i],smallest) replace the logic





    // find maximum

    // int nums[]= {2,6,4,9,1,7};
    // int size=6;
    // int max = INT_MIN;

    // for(int i=0; i<size; i++){
    //     if(nums[i]>max){
    //         max = nums[i];
            
    //     }
    // }
    // cout<<"maximum = "<< max<< endl;
    
    // return 0;

    


    // function creation

    // void change(int arr[], int size){
    //     for(int i =0; i<size; i++){
    //         arr[i]= 2*arr[i];
    //         cout<<arr[i]<<endl;
    //     }
    // }

    // int main(){
    //     int arr[]= {1,2,3,4,5,6};
        
    //     change(arr, 6);

        
            
    //         return 0;
    //     }
    

//  Linear search

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int size = 8;
//     int target = 5;
//     for(int i=0; i<size; i++){
//         if(arr[i]==target){
//             cout<<i<<endl;


            
//         }
        
//     }
    
    
// }


// reverse an array

void reverse(int arr[], int size){
    int start = 0, end = size-1;
    while(start< end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
   
    reverse(arr,6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;
    return 0;
}



