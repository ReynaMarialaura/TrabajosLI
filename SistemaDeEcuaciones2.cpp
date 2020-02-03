#include <iostream>
using namespace std;
int main()
{
    float x,y;float n[2][3]{109,1,-260,-89,29,18};
    float p,s,d,p1,p2,s1,s2,d1,d2;
    cout<<"El programa resuelve las escuaciones"<<endl;
    for(int i=0;i<2;i++){
        cout<<"\t";
        for(int j=0;j<3;j++){
            if(j==0)
                cout<<n[i][j]<<"x +";
            if(j==1)
                cout<<n[i][j]<<"y +";
            if(j==2)
                cout<<n[i][j]<<" "<<endl;
        }
    }
    p=n[0][0]*n[1][1];s=n[0][1]*n[1][0];d=p-s;
    p1=n[0][2]*n[1][1];s1=n[1][2]*n[0][1];d1=p1-s1;
    p2=n[0][0]*n[1][2];s2=n[1][0]*n[0][2];d2=p2-s2;
    x=d1/d;y=d2/d;
    cout<<"\nSolucion del problema"<<endl;
    cout<<"El valor de X: "<<x<<endl;
    cout<<"El valor de Y: "<<y<<endl;

    return 0;
}
