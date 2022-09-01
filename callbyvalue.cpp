#include<iostream>
using namespace std;
void swap(int*a, int*b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2, b=3;
    cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;
    swap(&a,&b);
        cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;


}