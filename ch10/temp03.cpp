#include <iostream>
using namespace std;

    struct book {
        char name[10];
        int price;
        int amount; 
    };

void calcPrice (struct book*);

int main(){

    struct book mybook;

    cout<<"input the name: ";
    cin>>mybook.name;
    cout<<"input the price: ";
    cin>>mybook.price;
    cout<<"input the amout: ";
    cin>>mybook.amount;
    
    calcPrice(&mybook);

    return 0;
}

void calcPrice(struct book *ptr){
    int totalPrice;
    totalPrice =  ((*ptr).price) * ((*ptr).amount);
    cout<<((*ptr).name)<<" is total "<<totalPrice<<". "; 
}
