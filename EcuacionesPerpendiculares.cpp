#include <iostream>
using namespace std;
double e1[10],e2[10];
void Evaluar1(){
    for(int i=-4;i<6;i++){
        e1[i]=(5*i)+19;
        e2[i]=(-4*i)-19;
    }

}
int main() {
    cout<<"Este programa trabaja con las ecuaciones : "<<endl;
    cout<<"\ty=5x+19\ty=-4x-19"<<endl;
    Evaluar1();
    for(int i=0;i<10;i++){
        if(e1[i]==e2[i]){
            cout<<"Las ecuaciones son perpendiculares"<<endl;
            return 0;
        }
        if(e1[i]!=e2[i] && i==9){
            cout<<"Las ecuaciones no son perpendiculares"<<endl;
        }
    }
    return 0;
}
