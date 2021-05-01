#include <iostream>

using namespace std;

int getData(int);
float getData(float);
double getData(double);

int main()
{
    int iVal=2004;    
    float fVal=2.3f;    
    double dVal=2.123;        
    cout<<"執行 int getData(int)       => "<<getData(iVal)<<endl;    
    cout<<"執行 float getData(float)   => "<<getData(fVal)<<endl;        
    cout<<"執行 double getData(double) => "<<getData(dVal)<<endl;
    
    return 0;
}

int getData(int iVal)
{
    return iVal;
}

float getData(float fVal)
{
    return fVal;
}

double getData(double dVal)
{
    return dVal;
}
