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
void Shop::displayPrice(void){
    for(int i=0;i<counter;i++)
    {
        cout<<"The price of "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop s;
