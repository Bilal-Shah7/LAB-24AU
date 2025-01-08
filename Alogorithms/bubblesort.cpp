#include <iostream>
using namespace std;
int main(){

int arr[10]= {2,5,3,1,4,6,9,7,10,8};
int temp;
for (int i= 0;i<10;i++){
    cout <<arr[i]<<" ";
}
cout<<endl;
for (int i=0;i<10;i++){
    for (int j=0;j<10-i-1; j++){
        if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
    
        }
    }
}
for (int i= 0;i<10;i++){
    cout <<arr[i]<<" ";
}
}