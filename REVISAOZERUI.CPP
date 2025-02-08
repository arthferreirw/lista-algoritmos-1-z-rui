#include <iostream>

using namespace std;

int main (){
    double h=0.0;
    float n=0.0;
    
    cout<<" n: ";
    cin>>n;
    
    for(int i=1; i<=n; i=i+1){
        
        h=h+(1.0/i);
       
      
        cout<<h<<endl;
        
    }
    
    
    
    
    
    return 0;
}