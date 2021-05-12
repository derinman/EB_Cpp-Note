#include <iostream>
using namespace std;

int main(){
    
    class cube{
        private:
            int a;
            int b;
            int c;
        
        public:
            cube(int aa, int bb, int cc){
                a = aa;
                b = bb;
                c = cc;
            };

            void calVolume(){
                cout<<"the volume is "<<a*b*c;
            };
        
    };

    cube myCube(2,4,5);

    myCube.calVolume();

    return 0;
}