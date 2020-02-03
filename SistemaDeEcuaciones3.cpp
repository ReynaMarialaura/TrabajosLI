#include <iostream>
using namespace std;
int main()
{
    float x,y,z,p,s2,s1,a1=0,a2=0,a3=0,a4=0;float n[3][4]{3,-5,-2,-5,-5,2,3,-12,2,1,0,-5};
    cout<<"El programa resuelve las escuaciones"<<endl;
    for(int i=0;i<3;i++){
        cout<<"\t";
        for(int j=0;j<4;j++){
            if(j==0)
                cout<<n[i][j]<<"x ";
            if(j==1)
                cout<<n[i][j]<<"y ";
            if(j==2)
                cout<<n[i][j]<<"z ";
            if(j==3)
                cout<<n[i][j]<<" "<<endl;
        }
    }
    ///Determinante normal
     p=n[0][0]*n[1][1]*n[2][2];
     s1=n[0][1]*n[1][2]*n[2][0];
     s2=n[0][2]*n[1][0]*n[2][1]; a1=p+s1+s2;
    p=n[0][2]*n[1][1]*n[2][0];
    s1=n[0][1]*n[1][0]*n[2][2];
    s2=n[0][0]*n[1][2]*n[2][1]; a1=a1-(p+s1+s2);
    ///DEterminante X
    p=n[0][3]*n[1][1]*n[2][2];
    s1=n[0][1]*n[1][2]*n[2][3];
    s2=n[0][2]*n[1][3]*n[2][1]; a2=p+s1+s2;
    p=n[0][2]*n[1][1]*n[2][3];
    s1=n[0][1]*n[1][3]*n[2][2];
    s2=n[0][3]*n[1][2]*n[2][1]; a2=a2-(p+s1+s2);
    ///Determinante Y
    p=n[0][0]*n[1][3]*n[2][2];
    s1=n[0][3]*n[1][2]*n[2][0];
    s2=n[0][2]*n[1][0]*n[2][3]; a3=p+s1+s2;
    p=n[0][2]*n[1][3]*n[2][0];
    s1=n[0][3]*n[1][0]*n[2][2];
    s2=n[0][0]*n[1][2]*n[2][3]; a3=a3-(p+s1+s2);
    ///Determinante Z
    p=n[0][0]*n[1][1]*n[2][3];
    s1=n[0][1]*n[1][3]*n[2][0];
    s2=n[0][3]*n[1][0]*n[2][1]; a4=p+s1+s2;
    p=n[0][3]*n[1][1]*n[2][0];
    s1=n[0][1]*n[1][0]*n[2][3];
    s2=n[0][0]*n[1][3]*n[2][1]; a4=a4-(p+s1+s2);
    x=a2/a1;y=a3/a1;z=a4/a1;

    cout<<"\n\tSolucion del problema"<<endl;
    cout<<"\tEl valor de X: "<<x<<endl;
    cout<<"\tEl valor de Y: "<<y<<endl;
    cout<<"\tEl valor de Z: "<<z<<endl;
    return 0;
}
