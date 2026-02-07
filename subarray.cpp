#include <iostream>
using namespace std;
// int main()
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int maxSum = INT_MIN;
    
//     for (int st = 0; st < n; st++)
//     { int currSum = 0;
//         for (int end = st; end < n; end++)
//         {      
//             currSum += arr[end];
//             maxSum = max(currSum,maxSum);
//         }
    
//     }
//     cout<< "max sum "<<maxSum<<endl;
//     return 0;
// }

// kadane's algorithm


int main(){
int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n;i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum = 0;
        }
        cout<<maxSum<<endl;
    }
    return 0;

}