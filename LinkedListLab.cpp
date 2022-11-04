#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;


struct List {
    string value;
    List* next;  //❓ Lab Question 2
};

//This function prints out all the values in a
//List, one on each line.
void printList( List* l ){
    cout << endl << "== The List ==" << endl;
    if ( l == NULL ){
        //If ths list is NULL, just print out empty
        cout << "[empty]" << endl;
    } else {
        //The list is not null, so...
        while ( l != NULL ){
            //As long as l is not null....
            cout << l->value << endl; //Print out it's value
            l = l->next; //Move on to the next value
        }
    }
}

//This function adds a new value to the
//start of the list.
//❓ Lab Question 3
void prepend(List* &list, string val){
    //❓ Lab Question 4
    //❓ Lab Question 5
    list = new List{val, list};
}

//This function removes the first item from the list
void removeFirst(List* &list){
    //❓ Lab Question 9
    //YOUR CODE HERE
}

//This function returns true if the list haystck
//contains the value needle, and false otherwise.
bool contains(List* haystack, string needle){
    //❓ Lab Question 10
    //YOUR CODE HERE
    return false;
}

void insertAt(List* &list, int pos, string value){
    if ( list == NULL || pos == 0 ){
        list = new List{value, list};
    } else {
        insertAt(list->next, pos-1, value);
    }
}

void deleteAt(List* &list, int pos){
    if ( list == NULL ){
        //We've gone off the end, there is nothing to do
    } else if ( pos == 0 ){
        list = list->next;
    } else {
        deleteAt(list->next, pos-1);
    }
}

void main(){
    //Create an empty list and print it
    List* dinner = NULL;
    printList(dinner);

    //Add food one item at a time using the
    //prepend function, and print it
    prepend(dinner, "Pie");
    prepend(dinner, "Turkey");
    prepend(dinner, "Stuffing");
    prepend(dinner, "Mashed Potatoes");
    prepend(dinner, "Turnips"); //❓ Lab Question 7
    printList(dinner);

    //❓ Lab Question 6
    // YOUR CODE TO REMOVE TURNIPS HERE:
    printList(dinner);

    //❓ Lab Question 10
    cout << endl;
    cout << "Is there Turkey? " << contains(dinner, "Turkey") << endl;
    cout << "Is there Spam? " << contains(dinner, "Spam") << endl;

}