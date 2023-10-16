#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int number,newnumber;
    cout<<"Enter a number";
    cin>>number;
    newnumber=bitset<8><<(number);
}
