#include<iostream>
using namespace std; 
int main(){
    int x; 
    cin>>x; 
    if(x<18){
        cout<<"not eligible"<<endl; 
    }
    else if (x<=54){
        cout<<"eligble for job"<<endl;
    
    }
     else if (x<=57){
        cout<<"eligble for job but soon retirement "<<endl;
    
    }
     else{
        cout<<"retirement time "<<endl;
    
    }
}
