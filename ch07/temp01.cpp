#include <iostream>
using namespace std;

void drawRec(int,int);

int main(){
    int width, height;

    cout<<"you will draw a rectangle, man"<<endl;
    cout<<"input the width: ";
    cin>>width;
    cout<<"input the height: ";
    cin>>height;

    drawRec(width, height);

    return 0;
}

void drawRec(int w, int h){
    int i, j;
    for (i=0; i<h; i++){
        for(j=0; j<w; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}