//To run this code take an example of 5!
#include<bits/stdc++.h>
using namespace std;
void multiply(int a[], int i, int &n){
    int carry = 0; //always initialize carry with 0 
    for(int j = 0; j<n; j++){ //loop will run upto last element only
        int product = a[j]*i + carry;
        a[j] = product%10;
        carry = product/10;
    }
    while(carry){
        a[n] = carry%10;
        carry = carry/10;
        n++;
    }

}
void factorial(int num){
    int a[1000]; //makes an array to store the answer's single digit in one box
    a[0] = 1; //first element should be 1
    int n = 1; //number of digit in the factorial
    for(int i = 2; i<=num; i++){ //start from 2 as multiply 1 with 1 gives 1 only
        multiply(a,i,n); //call this function each time you get a new number and n should be pass as refernce as it will be at the last position of array
    }
    for(int i = n-1; i>=0; i--){ //nummber will be printed in reverse fashion
        cout<<a[i];
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n; //takes a number of which factorial you wish to find
    factorial(n);
    return 0;
}
