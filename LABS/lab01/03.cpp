#include <iostream>
using namespace std;
int main(){
    int n;
    int target;
    cout << "Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout <<"Enter target: ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int answer = arr[i]+arr[j];
            if(answer == target){
                cout << "["<<i<<","<<j<<"]"; 
            }
        }
    }

}
