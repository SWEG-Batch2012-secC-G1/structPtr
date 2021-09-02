#include<iostream>
 
 
using namespace std;
 
struct product
{
int product_number;
char product_name[50];
float product_price,product_quantity,tax,product_discount;
 
void create_product()
{
cout<<endl<<"Please Enter The Product Number: ";
cin>>product_number;
cout<<endl<<"Please Enter The Name of The Product: ";
cin.ignore();
cin.getline(product_name ,50);
cout<<endl<<"Please Enter The Price of The Product: ";
cin>>product_price;
cout<<endl<<"Please Enter The Discount (%): ";
cin>>product_discount;
}

void show_product()
{
cout<<endl<<"Product number:  \tProduct Name: \tProduct Price: \tProduct discount : ";
cout<<endl<<product_number<<"\t"<<product_name<<"\t"<<product_price<<"\t"<<product_discount;

}

int getProduct()
{
return product_number;
}

float getPrice()
{
return product_price;
}

char* getName()
{
return product_name;
}

float getDiscount()
{
return product_discount;
}
}; 
int main()
{
    product p;
    p.create_product();
 return 0;   
}