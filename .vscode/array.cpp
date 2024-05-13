#include<iostream>
using namespace std;

int main(){
    int number[5]={1,2,3,4,5};//declare
    cout<<number[4]<<endl; //value at 5th index will be 5
    cout<<number[20]<<endl;//array is not even that big bcs 21 shud be size for this
    cout<<"everything is fine"<<endl;

    int second[10];
    cout<<second[4]<<endl;//values not given so again garbage
    
    int third[15]={2,7};//so only if two values are given then all other become 0
    cout<<third[3]<<endl;
    int n=15;//size
    //print the array
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }


}