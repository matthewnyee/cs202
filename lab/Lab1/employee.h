#include "person.h"
#include "node.h"
bool again();



//This file (employee.h) has the classes discussed during the first part
//of this lab. Namely we have classes to manage different types of
//employees at a local department store.

//In particular, an employee IS A person and a person HAS AN address. 
//We need the name functionality much more frequently than we need the
//address information - and in fact we don't want everyone in the world to gain
//access to the address functions.

//An employee is then derived from a person plus more (an hourly rate and
//the number of hours worked)

class employee: public person		//Modify this line to add a derivation list
{
      public:
             employee();
             employee(const employee & source);
             employee(char * name, char * street, char * zip, int id);
             employee(const person & new_employee);
             ~employee();

             bool hire(const person & a_person);
             bool probation(char * review);
             bool performance_review(char * review);
             bool quit();
             bool fired(char * documentation);  
             void display() const;        
             //What else should we be able to do with an employee?

      protected:   
              int employee_id;
              node * root;  //for the personnel records

              void display(node * root) const;
              void copy_tree(node * & dest_root, node * source_root) const;

              // review employee_review;
              
};

//There are many kinds of employees, part-time, full-time salaried, and full-time
//hourly. With OOP we can separate these into different classes. Today we will start
//by working with just hourly employees. Next time we will use this same code and
//add to it!

//The great benefit of inheritance is that the clients of the derived class
//have direct access to all of the base class' public functions!

class hourly_employee: public employee
{
      public:
             hourly_employee();
             hourly_employee(const person & input); //set up hourly emp.
             hourly_employee(int max_hours);   //set max hours 
             bool hours_worked(int num_hours); //how many hours worked?
             void set_pay_rate(float rate);    //set pay rate
             void authorize_overtime();        //is overtime ok?

             int overtime_worked() const;      //how much overtime worked?
             int hours_worked() const;         //how many hours worked?
             void display() const;             //display all info
      protected:
             int hours;
             int max_hours_allowed; //without overtime authorized
             bool overtime_ok;      //has overtime been authorized?
             float pay_rate;
};
