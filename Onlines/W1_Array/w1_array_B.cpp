#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int flag=1;
        for (int j = i+1; j < n; j++)
        {
            if(a[i]<a[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout << a[i] << " ";
        }
        
    }
    cout << a[n-1] << endl;
    return 0;
}