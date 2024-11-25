#include <iostream>
using namespace std;

//use of arrays
// printing 10-100 using for and while loops.
int main (){
int a[10] = {10,20,30,40,50,60,70,80,90,100};

for (int i=0; i<=9 ; i++){
    cout << a[i]<< "\n";

} 
int b = 0;
while (b<10){
    cout <<a[b]<<endl;
    b++;
}
}
