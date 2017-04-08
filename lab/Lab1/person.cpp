#include "person.h"

//Place the implementation of the constructors here for the person.h
//Step 6a
 address::address():street(NULL), zip(NULL)
 {  
       //Place your code here
 }

 
 address::address(const address & to_copy):street(NULL), zip(NULL)
 {
     if (to_copy.street != NULL && to_copy.zip != NULL)
     {
        street = new char[strlen(to_copy.street) + 1];
        strcpy(street, to_copy.street);
        zip = new char[strlen(to_copy.zip + 1)];
        strcpy(zip, to_copy.zip);
     }

    change_address(to_copy.street, to_copy.zip);

       //Place the code to copy the argument into the data members
       //Avoid a shallow copy
 }

 name::name(const name & to_copy):a_name(NULL)
 {
        if (to_copy.a_name != NULL)
        {
            a_name = new char[strlen(to_copy.a_name) + 1];
            strcpy(a_name, to_copy.a_name);
        }

        change_name(to_copy.a_name);
       //Place the code to copy the argument into the data members
       //Avoid a shallow copy
 }

// Provide an initialization list for the name's constructor
// Syntax: after the header put a colon and a comma separated
// list of everything that needs to get initialized
 person::person(char * initial_name, char * street, char * zip):name(initial_name), my_address(street, zip)
 {
 }

// Step 6b
 person::person()  //already finished
 {  
       //This is the default person constructor. NO CODE is needed
       //Think about why this is all that is needed.
 }

// Step 6c
//Implement the wrapper function that you designed in the person class
//to allow the address to be changeed without using friends or public
//data members!
//
//
int person::change_address(char * street, char * zip)
{
    my_address.change_address(street, zip);
    return 1;
}
