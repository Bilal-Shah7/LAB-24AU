#include <iostream>
using namespace std;
int main(){
int arr[10]= {1,2,3,4,5,6,7,8,9,10};
int target = 7;
int low=0;
int high = 10-1;
int mid;
while(low <= high){
mid = (low + high)/2;
int value = mid;

if (value<target) low = mid+1;
else if (value>target) high = mid-1;
else return mid;
}  


}