#include<iostream>
using namespace std;

void print_array(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout << endl;
}

void swapAlternate(int arr[], int size){
     for(int i =0; i< size ; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
     }
}

int main(){
int even[5] = {4 , 5 , 6, 7 ,8};
swapAlternate(even,5);
print_array(even,5);
return 0;

}