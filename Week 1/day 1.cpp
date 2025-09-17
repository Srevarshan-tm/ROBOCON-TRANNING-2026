#include<iostream>
using namespace std;
char sub(){
    cout<<"bye";
}
int array_some(){
    int arr[5];
    arr[5]={1,2,3,4,5};
    cout<<"the size of the array is"<<s;
    cout<<sizeof(arr);
}
sum_check(){
    int random[5];
    cout<<"enter the array of elements";
    cin>>random;
    int target;
    cout<<"enter the value";
    cin>>target;
    for(int i=0;i>=random.size();i++){
        if (random[i]+random[i+1]==target){
        cout<<"matched";
        }
        else{
            cout<<"not matched";
        }

    }
}
int main() {
    int year;
    cout<<"enter the current year";
    cin>>year;
    if(year%4==0){
        cout<<"the given year is leap year\n"<<"thank you\n";

    }
    else{
        cout<<"the given yaer is not a leap year\n"<<"thank you\n";
    }
    array_some();
    

}

