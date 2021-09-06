#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int choice;

void print_list();
Void order();
float payment(float);

 void cust_menu(int *opp);

 void main_menu();
struct product
{
    int product_number;
    char product_name[50];
    float product_price,product_quantity,tax,product_discount;
    float discount_price;
    float total_price;

    void create_product()
    {
        cout<<endl<<"Please Enter The Product Number: ";
        cin>>product_number;
        int getPro=getProduct(product_number);
        cout<<endl<<"Please Enter The Name of The Product: ";
        cin.ignore();
        cin.getline(product_name,50);

        cout<<endl<<"Please Enter The Price of The Product: ";
        cin>>product_price;
        float getPri= getPrice(product_price);
        cout<<endl<<"Please Enter The Discount (%): "<<endl;
        cin>>product_discount;
        float getdisc=getDiscount(product_discount);
        cout<<endl<<"you have successfully created new product....."<<endl<<endl;

    }

    int getProduct(int product_number)
    {
        return product_number;
    }

    float getPrice(int product_number)
    {
        return product_price;
    }

    char* getName()
    {
        return product_name;
    }

    float getDiscount(int product_number)
    {
        return product_discount;
    }

    void show_product()
    {
        /*  int getPro=getProduct(product_number);
          float getPri= getPrice(product_price);
        float getdisc=getDiscount(product_discount);*/
        cout<<endl<<"Product Number: \tProduct Name: \tProduct Price: \tDiscount : "<<endl;
        cout<<endl<<product_number<<"\t"<<product_name<<"\t"<<product_price<<"\t"<<product_discount<<endl;
    }
    void show_specific_product()
    {
        int product_number1;
        cout<<"enter product Number: "<<endl;
        cin>>product_number;
        int getPro=getProduct(product_number);
        float getPri= getPrice(product_number);
        float getdisc=getDiscount(product_number);
        cout<<endl<<"Product Number: \tProduct Name: \tProduct Price: \tDiscount : "<<endl;
        cout<<endl<<product_number<<"\t"<<product_name<<"\t"<<product_price<<"\t"<<product_discount;
    }
    void modify_product()
    {
        cout<<"enter the details about the products you want to modify"<<endl;
        show_specific_product();
        cout<<"how do you want to modify: "<<endl;
        create_product();

    }
} p,add_pro;






struct Administrator
{
    string fullName,phoneNo,email,password1,password2;
    char gender;
    int age;

    void* Registration()
    {

        int admin_id;
        cout<<"please enter the admin's ID number: "<<endl;
        int admin_ID=12345678;
        cin>> admin_id;
        while (admin_ID!=admin_id)
        {
            int count=0;
            cout<<"you are not approved to use this service!!! \nplease try again"<<endl;
            cin>> admin_id;
            if( count==2)
                cout<<"failed";
            exit;
            count++;
        }

        cout<<"enter your full Name:"<<endl;
        cin>>fullName;
        cout<<"age:"<<endl;
        cin>>age;
        cout<<"gender:\n If female,'F'and male,'M'"<<endl;
        cin>>gender;
        cout<<"email:"<<endl;
        cin>>email;
        cout<<"phone number:"<<endl;
        cin>>phoneNo;
        cout<<"enter your password:"<<endl;
        cin>>password1;
        cout<<"re-enter your password:"<<endl;
        cin>>password2;
        while(password1!=password2)
        {
            cout<<"wrong password!!\nplease write your password again"<<endl;
        }
        cout<<"you have successfully Registered...."<<endl;
        cout<<"what do you want to do\n1.Goto main menu\n2.exit"<<endl;
b:
        cin>>choice;
        switch(choice)
        {
        case 1:
            login();
            break;
        case 2:
            exit;
        default:
        {   cout<<"enter correct value"<<endl;
            goto b;
        }
        }

    }
    void* login()
    {
        string password,fullname1;
cout<<"****Login****"<<endl;
        cout<<"enter your username:"<<endl;
        cin>>fullname1;
        cout<<"password: "<<endl;
        cin>>password;

        while(fullname1!=fullName)
        {
            int count=0;
            cout<<"wrong comcination!!\nplease enter your full Name"<<endl;
            cin>>fullname1;

            if( count==2)
            {   cout<<"failed";
                exit;
            }
            count++;

        }
        while(password!=password2)
        {
            int count=0;
            cout<<"wrong password!!\nplease try again"<<endl;
            cin>>password;

            if( count==2)
            {   cout<<"1.forgot password\n2.retry";
                int n;
                cin>>n;
            }

            if( count==3)
            {   cout<<"failed";
                exit;
            }
            count++;

        }
        menu();
    }

    void menu()
    {
        cout <<"what would you like to do..."<<endl;
        cout<<"\n1.add new product\n2.see the details about a specific product\n3.delete expired product\n4.modify product\n5.display all products\n6.return\n7.Go back to main menu"<<endl;
c:
        cin>>choice;
        switch(choice)
        {
        case 1:
            p.create_product();
            break;
        case 2:
            p.show_specific_product();
            break;
        case 3:
        case 4:
            p.modify_product();
            break;
        case 5:
            p.show_product();
            break;
        case 6:
            Register();
            break;
        case 7:
            main_menu();
            break;
        default:
        {   cout<<"you entered wrong number!!!\n try again.."<<endl;
            goto c;
        }
        }


    }
    void Register()
    {

        cout<<"enter your choice: "<<endl;
a:
        cout<<"1.register\n2.login"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            Registration();
            break;

        case 2:
            login();
            break;
        default:
        {   cout<<"enter correct value"<<endl;
            goto a;
        }
        }
    }

} ADMIN;





int main()
{
    main_menu();
    ADMIN.menu();


    return 0;
}





void main_menu()
{
    cout<<"welcome to our supermarket ...... there is nothing you could berefit finding here....\n ";
d:
    cout<<"1.Customer\n2.Administrator"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        cust_menu(&opp);
    case 2:
        ADMIN.Register();
    default:
    {   cout<<"enter correct value"<<endl;
        goto d;
    }
    }
}

void cust_menu(int *opp) {
    cout<<"##############################################################################################\n";
    cout<<"########################Welcom To ONLINE SHOPING###############################################\n";
cout<<"what would you like to do..."<<endl;
cout<<"1.order product\t2.remove ordered product\t3.view total sale"<<endl;
cin>>choice;
switch(choice)
case 1:
{
    cout<<"Press the options below to buy things you want."<<endl;
    cout<<"1)Cloth"<<endl;
    cout<<"2)Shoe"<<endl;
    cout<<"3)Bag"<<endl;
    cout<<"4)To Return to the menu"<<endl;

    cin>>choice;

    switch(choice)
    {

      case 1:
    {   print_list(1,"Adidas Shoes",4,3450.00,0.5);
        print_list(2,"Adidas Shoes",4,3450.00,0.5);
        print_list(3,"Adidas Shoes",4,3450.00,0.5);
        print_list(4,"Adidas Shoes",4,3450.00,0.5);
        order();
    
    }
    break;

    case 2:

        {print_list(1,"Adidas Shoes",4,3450.00,0.5);
         
        order();
        }break;

      case 3:
       {print_list(1,"Adidas Shoes",4,3450.00,0.5);
           order();
        }
        break;

    case 4:
        main_menu();

    default:
          cout<<"INVALID";

    }
case 2:

}
    void print_list(product pro_list[].product_number, product pro_list[].product_name, product pro_list[].quantity,product pro_list[].price,product pro_list[].discount)
    {
         
          cout<<pro_list[].product_number<<setw(28)<<pro_list[].product_name<<setw(26)<<pro_list[].quantity<<setw(23)<<pro_list[].price<<setw(23)<<pro_list[].discount<<endl;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    }


    void order()
    {
        cout<<"Enter the number of the product you want to buy"<<endl;

                cin.ignore();

                cin>>clothnum;

             

              if(clothnum==pro_list[0].product_number) {

                          cout<<"How many quantities do you want?";

                   cin>>quant;

                        if(quant<=pro_list[0].quantity) {

                              pro_list[0].price = quant*pro_list[0].price;

                              cout<<"The price is  "<< pro_list[0].price;

                              cout<<"\nYour Discount  price is :";

                                  pro_list[0].discount_price= quant*pro_list[0].discount;

                    cout<<pro_list[0].discount_price<<endl;

                                            cout<<"Your total price is :";

                              pro_list[0].total_price=pro_list[0].discount_price * pro_list[0].price;

                                             cout<<              pro_list[0].total_price;

                             
            }

                           
        }

           

            else if(clothnum==pro_list[1].product_number) {

                          cout<<"How many quantities do you want?";

                   cin>>quant;

                   if(quant<=pro_list[1].quantity) {

                              pro_list[1].price = quant*pro_list[1].price;

                              cout<<"The price is  "<<              pro_list[1].price;

                              cout<<"\nYour Discount  price is :";

                                  pro_list[1].discount_price= quant*pro_list[1].discount;

                    cout<<pro_list[1].discount_price<<endl;

                                            cout<<"Your total price is :";

                              pro_list[1].total_price=pro_list[1].discount_price * pro_list[1].price;

                             cout<<pro_list[1].total_price;

                             
            }

        }

                      else if(clothnum==pro_list[2].product_number) {

                                        cout<<"How many quantities do you want?";

                   cin>>quant;

                                if(quant<=pro_list[2].quantity) {

                              pro_list[2].price = quant*pro_list[2].price;

                              cout<<"The price is  "<<              pro_list[2].price;

                              cout<<"\nYour Discount  price is :";

                                  pro_list[2].discount_price= quant*pro_list[2].discount;

                    cout<<pro_list[2].discount_price<<endl;

                              cout<<"Your total price is :";

                    pro_list[2].total_price=pro_list[2].discount_price * pro_list[2].price;

                              cout<<  pro_list[2].total_price;

                             
            }

        }

                      else if(clothnum==pro_list[3].product_number) {

                                        cout<<"How many quantities do you want?";

                   cin>>quant;

                                if(quant<=pro_list[3].quantity) {

                              pro_list[3].price = quant*pro_list[3].price;

                              cout<<"The price is  "<<              pro_list[3].price;

                              cout<<"\nYour Discount  price is :";

                                  pro_list[3].discount_price= quant*pro_list[3].discount;

                    cout<<pro_list[3].discount_price<<endl;

                               cout<<"Your total price is :";

                              pro_list[3].total_price=pro_list[3].discount_price * pro_list[3].price;

                              cout<<              pro_list[3].total_price;

                             
            }

        }

                      else if(clothnum==pro_list[4].product_number) {

                                        cout<<"How many quantities do you want?";

                   cin>>quant;

                                if(quant<=pro_list[4].quantity) {

                              pro_list[4].price = quant*pro_list[4].price;

                              cout<<"The price is  "<<              pro_list[4].price;

                              cout<<"\nYour Discount  price is :";

                                  pro_list[4].discount_price= quant*pro_list[4].discount;

                    cout<<pro_list[4].discount_price<<endl;

                    cout<<"Your total price is :";

                    pro_list[4].total_price=pro_list[4].discount_price * pro_list[4].price;

                             cout<<pro_list[4].total_price;

                    
            }

                         
        }            

                      else {

                                                      cout<<"How many quantities do you want?";

                   cin>>quant;

                                if(quant<=pro_list[5].quantity) {

                              pro_list[5].price = quant*pro_list[5].price;

                              cout<<"The price is  "<<              pro_list[5].price;

                              cout<<"\nYour Discount  price is :";

                                  pro_list[5].discount_price= quant*pro_list[5].discount;

                    cout<<pro_list[5].discount_price<<endl;

                              cout<<"Your total price is :";

                              pro_list[5].total_price=pro_list[5].discount_price * pro_list[5].price;

                              cout<<              pro_list[5].total_price;

                             
            }            

                           

             
        }

                     

                     

                     

                       

         

    }


}
