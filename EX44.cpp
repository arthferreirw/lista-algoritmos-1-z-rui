#include <iostream>
using namespace std;
void ConjuntoCrescente(int i, float a, float b, float c){

    if(a<b && a<c && b<c){

    cout<<"---"<<a<<"---"<<b<<"---"<<c<<endl;


    }else if(a<c && a<b && c>b){

    cout<<"---"<<a<<"---"<<c<<"---"<<b<<endl;

    }else if(b<a && b<c && b<c){
    
    cout<<"---"<<b<<"---"<<a<<"---"<<c<<endl;




    }else if(b<c && b<a && c<a){

    cout<<"---"<<b<<"---"<<c<<"---"<<a<<endl;

    }else if(c<a && c<b && a<b){

    cout<<"---"<<c<<"---"<<a<<"---"<<b<<endl;


    }else if(c<b && c<a && b<a){

    cout<<"---"<<c<<"---"<<b<<"---"<<a<<endl;



    }



}
void ConjuntoDecrescente(int i, float a, float b, float c){
    if(a>b && a>c && b>c){

    cout<<"---"<<a<<"---"<<b<<"---"<<c<<endl;
   


    }else if(a>c && a>b && c>b){
    cout<<"---"<<a<<"---"<<c<<"---"<<b<<endl;


    }else if(b>a && b>c && a>c){

    cout<<"---"<<b<<"---"<<a<<"---"<<c<<endl;



    }else if(b>c && b>a && c>a){

    cout<<"---"<<b<<"---"<<c<<"---"<<a<<endl;    



    }else if(c>a && c>b && a>b){

    cout<<"---"<<c<<"---"<<a<<"---"<<b<<endl;    



    }else if(c>b && c>a && b>a){

    cout<<"---"<<c<<"---"<<b<<"---"<<a<<endl;


    }


}
void MaiorNoMeio(int i, float a, float b, float c){
    if(a<b && b>c){

   cout<<"---"<<a<<"---"<<b<<"---"<<c<<endl;

    }else if(a<c && c>b){

    cout<<"---"<<a<<"---"<<c<<"---"<<b<<endl;    

    }else if(b<a && a>b){
    
    cout<<"---"<<b<<"---"<<a<<"---"<<c<<endl;    


    }else if(c<a && a<b){

    cout<<"---"<<c<<"---"<<a<<"---"<<b<<endl;   

    }else if(c>b && b>a){

    cout<<"---"<<c<<"---"<<b<<"---"<<a<<endl;   


    }






}
int main(){

int i=0;
cout<<"i (1-3): ";
cin>>i;

float a=0;
cout<<"a: ";
cin>>a;

float b=0;
cout<<"b: ";
cin>>b;

float c=0;
cout<<"c: ";
cin>>c;



if(i==1){

cout<<" crescente "<<endl;

ConjuntoCrescente( i,  a,  b,  c);

}else if(i == 2){

cout<<" decrescente "<<endl;
ConjuntoDecrescente(i,a,b,c);

}else if( i == 3){

cout<<" O maior fica entre os dois menores "<<endl;

MaiorNoMeio(i,a,b,c);

}





    return 0;
}