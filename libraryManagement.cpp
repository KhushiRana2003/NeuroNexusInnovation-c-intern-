#include <string> 
#include <iostream>

using namespace std;

void addbook();
void bookInfo();
void authorName();
void total();
void title();
void id();
struct library{
    int idNo;
    string bookname;
    string authorname;
    int price;
    string flag;
}l[100];
int cont;

int main(){
    cout<<"Library Management System" <<endl;
    while(true){
        cout<<"========================================================="<<endl;
        cout<<"Press 1 for Add Book information: \n";
        cout<<"Press 2 for Display book information: \n";
        cout<<"Press 3 for list all books of given author: \n";
        cout<<"Press 4 for ilst the count of books in the libraray: \n";
        cout<<"Press 5 for list the title of specified book: \n";
        cout<<"press 6 for list books for books id's : \n";
        cout<<"Press 7 for Exit: \n";

        int a;
        cin>>a;
        switch(a){
            case 1:
                addbook();
                break;
            case 2:
                bookInfo();
                break;

            case 3:
                authorName();
                break;

            case 4:
                total();
                break;

            case 5:
                title();
                break;

            case 6:
                id();
                break;

            case 7:
                exit(0);
                break;
            default:
                cout<<"Invalid Entry.";
        }
    }
    return 0;
}


void addbook(){
    
    cout<<"Enter book Name"<<endl;
    cin>>l[cont].bookname;

    cout<<"Enter Author Name: "<<endl;
    cin>>l[cont].authorname;

    cout<<"Enter book id number:"<<endl;
    cin>>l[cont].idNo;

    cout<<"Enter the price of that particular book"<<endl;
    cin>>l[cont].price;

    cout<<"Book issued (yes or no):"<<endl;
    cin>>l[cont].flag;
    cin.ignore();
    cont++;
}

void bookInfo(){
    cout<<"Display book information"<<endl;
    for(int i = 0; i <= cont; i++){
        cout<<"\n Id number of book is:"<<l[i].idNo;
        cout<<"\n Title of book is: "<<l[i].bookname;
        cout<<"\n Name of Author is: "<<l[i].authorname;
        cout<<"\n Price of Book is: "<<l[i].price;
        cout<<"\n Book issued (yes or no): "<<l[i].flag;
    }
}

void authorName(){

    string a;
    cout<<"Enter Author name: "<<endl;
    cin>>a;
    for(int i = 0; i <= cont; i++){
        if(a==l[i].authorname){
            cout<<"\n Id number of book is:"<<l[i].idNo;
            cout<<"\n Title of book is: "<<l[i].bookname;
            cout<<"\n Name of Author is: "<<l[i].authorname;
            cout<<"\n Price of Book is: "<<l[i].price;
            cout<<"\n Book issued (yes or no): "<<l[i].flag;
        }
    }
}

void total(){
    cont;
}

void title(){

    string a;
    cout<<"Enter Book name: "<<endl;
    cin>>a;
    for(int i = 0; i <= cont; i++){
        if(a==l[i].bookname){
            cout<<"\n Id number of book is:"<<l[i].idNo;
            cout<<"\n Title of book is: "<<l[i].bookname;
            cout<<"\n Name of Author is: "<<l[i].authorname;
            cout<<"\n Price of Book is: "<<l[i].price;
            cout<<"\n Book issued (yes or no): "<<l[i].flag;
        }
    }
}


void id(){

    int a;
    cout<<"Enter idNo: "<<endl;
    cin>>a;
    for(int i = 0; i <= cont; i++){
        if(a==l[i].idNo){
            cout<<"\n Id number of book is:"<<l[i].idNo;
            cout<<"\n Title of book is: "<<l[i].bookname;
            cout<<"\n Name of Author is: "<<l[i].authorname;
            cout<<"\n Price of Book is: "<<l[i].price;
            cout<<"\n Book issued (yes or no): "<<l[i].flag;
        }
    }
}
