#include<iostream>
using namespace std;

class Shop
{
    public:
        int itemId[100];
        int itemPrice[100];
        int counter;
        void initCounter(void){counter=0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop::setPrice(void){
    cout<<"Enter id of item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price if item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
