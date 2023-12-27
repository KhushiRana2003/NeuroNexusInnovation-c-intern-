#include <iostream>
#include <string>
#include <list>
#include <ctime>
using namespace std;

class TodoItem{
    private:
    int id;
    string description;
    bool completed;

    public:
    TodoItem(): id(0), description(""), completed(false){}
    ~TodoItem() = default;

    bool create(string new_description){
        // generates a random integer between 0 and 100
        id = rand()%100+1;
        description = new_description;
        return true;
    }
    int getId(){
        return id;
    }
    string getdescription(){
        return description;
    }
    bool isCompleted(){
        return completed;
    }
    void setCompleted(bool val){
        completed = val;
    }
};

int main(){
    char input_option;
    int input_id;
    string input_description;

    string version = "v0.2.0";
    list<TodoItem> todoItems;
    list<TodoItem>:: iterator it;

    srand(time(NULL));
    todoItems.clear();

    // TodoItem test;
    // test.create("This is a test");
    // todoItems.push_back(test);

    // first we need to create a way to show the list. so that i am able to add an item and able to mark an item
    // so we need a infinte loop 
    while(1){
        system("cls"); //clear screen in b/w each loop.
        cout<<"Todo List Maker - " <<version<<endl;
        cout<<endl;
        cout<<endl;


        // loop through existing items.
        for(it = todoItems.begin(); it != todoItems.end(); it++){

            auto completed = it->isCompleted() ? "Done" : "NotDone";
            cout<<it->getId() <<"  |  "<< it->getdescription()<<"  |  " << completed <<endl;

            
        }

        if(todoItems.empty()){
            cout<<"Add your first todo!" <<endl;
        }
        cout<<endl;
        cout<<"[A]dd  a new Todo" <<endl;
        cout<<"[C]omplete a Todo" <<endl;

        cout<<"[Q]uit" <<endl;
        cout<<"Choice : ";
        cin>>input_option;

        if(input_option == 'q'){
            cout<<"Have a great day now!"  << endl;
            break;
        }

        else if(input_option == 'a'){
            cout<<"Add a new description : ";
            cin.clear();
            cin.ignore();
            getline(cin,input_description);

            TodoItem newItem;
            newItem.create(input_description);

            todoItems.push_back(newItem);
        }

        else if(input_option == 'c'){
            cout<<"Enter id to mark completed: "<<endl;
            cin>>input_id;

            for(it = todoItems.begin(); it != todoItems.end(); it++){
                if(input_id == it->getId()){
                    it->setCompleted(true);
                    break;
                }
            }    

        }
    }

    return 0;
    
}