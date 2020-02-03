#include <iostream>
using namespace std;
double e1[3],e2[3];
void DesX1(int a,int b,int c){
    for(int i=0;i<3;i++){
        if(i==0)
            e1[i]=1;
        if(i==1)
            e1[i]=b/a;
        if(i==2)
            e1[i]=-c/a;
    }
}
void DesX2(int a,int b,int c){
    for(int i=0;i<3;i++){
        if(i==0)
            e2[i]=1;
        if(i==1)
            e2[i]=b/a;
        if(i==2)
            e2[i]=-c/a;
    }
}
void DesY1(int a,int b,int c){
    for(int i=0;i<3;i++){
        if(i==0)
            e1[i]=1;
        if(i==1)
            e1[i]=b/a;
        if(i==2)
            e1[i]=c/a;
    }
}
void DesY2(int a,int b,int c){
    for(int i=0;i<3;i++){
        if(i==0)
            e2[i]=1;
        if(i==1)
            e2[i]=b/a;
        if(i==2)
            e2[i]=-c/a;
    }
}
int main() {
    int a, w=0;
    cout<<"Ecuaciones que trabaja el sistema son: "<<endl;
    cout<<"\ty=7x+9\t3y-21x=12"<<endl;
    cout<<"Cual despejo X[1] o Y[2]"<<endl;
    cin>>a;
    switch(a){
        case 1:
            DesX1(7,1,9);DesX2(-21,3,12);
            cout<<"Ecuacion 1"<<endl;
            cout<<"X = "<<e1[1]<<" Y + "<<e1[2]<<endl;
            cout<<"Ecuacion 2"<<endl;
            cout<<"X = "<<e2[1]<<" Y + "<<e2[2]<<endl;

            break;
        case 2:
            DesY1(7,1,9);DesY2(-21,3,12);
            cout<<"Ecuacion 1"<<endl;
            cout<<"Y = "<<e1[1]<<" X + "<<e1[2]<<endl;
            cout<<"Ecuacion 2"<<endl;
            cout<<"Y = "<<e2[1]<<" X + "<<e2[2]<<endl;
            break;
        default:
            cout<<"Opccion incorrecta"<<endl;
            break;
    }

    for(int i=0;i<3;i++) {
        if (e1[i] == e2[i])
            w=1;
        else {
            cout<<"Las Ecuaciones no tienen la misma grafica";
            return w=0;
        }
    }
    if(w ==1)
        cout<<"Las Ecuaciones tienen la misma grafica";
    return 0;
}

