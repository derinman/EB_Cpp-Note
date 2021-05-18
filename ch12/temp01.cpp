#include <iostream>
using namespace std;

class  square{
    private:
        int width;
        int volSum;
    public:
        square(int w){
            width = w;
        }

        int calVolSum(square a){
            volSum = width * width + a.width * a.width;
            return volSum;   
        }

        void showSum(){
            cout<<volSum;
        }
};

int main(){

    square aS(3);
    square bS(4);

    aS.calVolSum(bS);
    aS.showSum();

    return 0;
}