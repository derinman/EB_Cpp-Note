#include <iostream>
using namespace std;


class student{
    private:
        int number;
        int eng;
        int math;
    public:
        student(){
            cout<<"construct!"<<endl;
        };
        ~student(){
            cout<<"destruct!"<<endl;
        };
        void initData(){
            cout<<"input the number of student: ";
            cin>>number;
            cout<<"input the english score: ";
            cin>>eng;
            cout<<"input the math score: ";
            cin>>math;
        };

        void showData(){
            cout<<"number: "<<number<<"\t"<<"english: "<<eng<<"\t"<<"math: "<<math<<endl;
        }
};

int main(){

    student *ptr_st = new student;

    //(*ptr_st).initData();
    ptr_st->initData();

    ptr_st->showData();

    delete ptr_st;//把這行改註解看看,解構子就不會運作,不會釋放記憶體

    return 0;
}