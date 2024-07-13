#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int C[n];
    int temp=0;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int B[n];
     for(int i=0;i<n;i++){
        cin>>B[i];
    }
    for(int i=0;i<n;i++){
        if(A[i]>B[i]){
            C[i]=A[i]-B[i];    
        }
        else if(A[i]<B[i]){
            C[i]=B[i]-A[i];
        }
    }
    for(int i=0;i<n;i++){
        if(C[i]>temp){
            temp=C[i];
            if(temp==A[i]-B[i]){
              cout<<"1"<<endl;
            }
            else{
              cout<<"2"<<endl;
            }
        }
    }
    cout<<temp<<endl;
	return 0;
}
