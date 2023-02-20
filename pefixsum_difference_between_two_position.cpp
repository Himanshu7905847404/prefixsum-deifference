 #include <iostream>
#include<vector>
using namespace std;

void prefixsum(vector<int>&v){
    int n = v.size() - 1;
    for(int i = 1;i<=n;i++){
        v[i]=v[i]+v[i-1];
    }
    int q;
    cout<<"\n\tEnter how many quiery\n";
    cin>>q;
    while(q--){
    int r,l;
    cout<<"\n\tEnter the position value r ,l to find prefixsum difference between them\n";
    cin>>r>>l;
    
    
        int presum = v[l] - v[r];
        cout<<"diference between "<<r<<" and "<<l<<" is:\t"<<presum<<endl;
    }
    return ;
}

int main()
{
   int n1;
   cout<<"\n\t\tHow many times user wants to run the code\n";
   cin>>n1;
   while(n1--){
    int n;
    cout<<"\n\tEnter the size of array\n";
    cin>>n;
    vector<int>v(n+1,0);
    cout<<"\n\tEnter the elements of array\n"<<endl;
    for(int i = 1 ; i <= n ; i++){
        cin>>v[i];
    }
    cout<<"\n\tEntered array is\n";
    for(int i = 1 ; i<= n ; i++){
        cout<<v[i]<<" ";
    }
    prefixsum(v);
    cout<<"\n\tpresum array\n";
    for(int i = 1 ; i<= n ; i++){
        cout<<v[i]<<" ";
    }}
    return 0;
}
