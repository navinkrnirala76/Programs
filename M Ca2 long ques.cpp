#include <iostream>
using namespace std;
int main() 
{
    int Arr[100],n,i,temp;
    cout<<"Enter number of elemnts you want to insert";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter elemnts"<<i+1<<":";
        cin>>Arr[i];
    }
    if(Arr[0]==0){
        temp=Arr[0];
        Arr[0]=Arr[1];
        Arr[1]=temp;
    }
    else
    for(i=0;i<n;i++){
        if(Arr[i]==0){
            temp=Arr[i];
            Arr[i]=Arr[i-1];
            Arr[i-1]=temp;
            ++i;
        }
    }
    cout<<"\n Array after swapping"<<endl;
    for(i=0;i<n;i++)
    cout<<Arr[i]<<"";
    return 0;
}