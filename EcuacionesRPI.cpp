#include <iostream>
using namespace std;
double e1[3],e2[3],a1[7],a2[7];
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
            e2[i]=-b/a;
        if(i==2)
            e2[i]=c/a;
    }
}
void Evaluar(){
    for(int i=-3;i<4;i++){
        a1[i]=(-5*i)+12;
        a2[i]=((-10/2)*i)+(24/2);
    }
}
int main() {
    cout<<"Este programa trabaja con las ecuaciones : "<<endl;
    cout<<"\t5x+y=12\t2y=-10x+24"<<endl;
    cout<<"Es la misma recta?"<<endl;
    DesY2(2,-10,24);DesY1(1,5,12);int w=0,w1=0,w2=0;
    for(int i=0;i<3;i++) {
        if (e1[i] == e2[i])
            w=1;
        else {
            cout<<"Las Ecuaciones no tienen la misma grafica";
            w=0;
        }
    }
    if(w ==1)
        cout<<"Las Ecuaciones tienen la misma grafica";
    cout<<"\nSon paralelas?"<<endl; Evaluar();
    for(int i=0;i<7;i++) {
        if (a1[i] != a2[i])
            w1=0;
        else {
            w1=1;
        }
    }
    if(w1 !=0)
        cout<<"Las Ecuaciones son paralelas";
    else
        cout<<"Las Ecuaciones no son paralelas";
    cout<<"\nSe intersectan?"<<endl;
    if(w1 ==0)
        cout<<"Las Ecuaciones no se intersectan";
    else
        cout<<"Las Ecuaciones se intersectan";

    return 0;
}
