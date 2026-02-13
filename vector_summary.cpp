#include<iostream>
#include<vector> //vector header file
using namespace std;


/*
int main(){

    // vector<int> vec={1,2,3};
    vector<int> vec = {12,34,45,67}; //first (3) is the size of the array and second(0) is the initialiaze value in array.
   
   // VECTOR FUNCTIONS

    vec.push_back(4); // to add elements to the end.
    
    
    cout<<"size = "<<vec.size()<<endl; //it gives the size of array.
    vec.pop_back(); //remove element to the end.
    int j =vec.front(); //it gives the first element.
    int k = vec.back(); //it gives the last element.
    cout<<vec.at(1)<<endl; //for indexed access.
    cout<<j<<endl;
    cout<<k<<endl;
    for(int i: vec){ //for each loop
        cout<< i <<endl;
    }


    return 0;

}       */



int main(){
    vector<int> vec;
     
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    cout<<vec.size()<<endl; //3
    cout<<vec.capacity()<<endl; //4
}


