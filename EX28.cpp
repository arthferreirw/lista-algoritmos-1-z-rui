#include <iostream>
using namespace std;
int MediaPonderadaNotas(int n1,int n2,int n3){
    int media=0;
     media=n1*2+n3*3+n3*5/10;


    return media;
}

int main (){


 int n1=0;
cout<<" informe n1: ";
cin>>n1;

int n2=0;
cout<<" informe n2: ";
cin>>n2;


int n3=0;
cout<<" informe n3: ";
cin>>n3;




int mediaponderada=0;
mediaponderada=MediaPonderadaNotas(n1,n2,n3);
if(mediaponderada>=6){
cout<<" voce esta aprovado "<<endl;

}else{
cout<<" voce nao esta aprovado "<<endl;

}




    return 0;
}