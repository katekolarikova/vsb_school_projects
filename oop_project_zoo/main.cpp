
#include <iostream>
#include "VisitorCentre.h"
#include "Pavilion.h"
#include "Paddock.h"
#include "Staff.h"
#include "Animal.h"
#include "Ticket.h"
/* ZOO - project
 *
 * author: Katerina Kolarikova
 * date: 10.5.2021
 *
 * Main task of this project is demonstrated techniques typical for Object Oriented Programming.
 *
 * Goal of this project is to design an examples of the classes which might be used for ZOO.
 * The project includes eight classes, which have different parametrs and methods.
 * Each class represents different stuff, so there is for example class for animals, staff or buildings,
 * Also there is an example of virtual class and the inheritance structure was used too.
 * Detail description of each class is written in appropriate *.h file.
 *
 * In the main file is demo of functionalities, which classes have.
 * There are examples of creating object for each class and also there are examples majority of methods.
 */

int main() {

    //Creating Objects
    VisitorCentre * visitor_centre1= new VisitorCentre(0,200,"Priroda na dosah"," Cesta do praveku", 10, "12:15" );
    VisitorCentre * visitor_centre2= new VisitorCentre(1,100,"Amazonie","Kouzlo pralesu ", 16, "10:30" );

    Animal* tiger= new Animal("Azor", 3, "tygr", "Asie", "Tiger is one of the biggest predator on the world");
    Animal* penguin= new Animal("Pepa", 2, "penguin", "Antarctica", "Dad takes care about babies");
    Animal* parrot= new Animal("Susenka", 1, "parrot", "Africa", "They have amaying colors");
    Animal* horse= new Animal("Jarek", 1, "horse", "Europa", "Horse is the biggest animal in our farm");

    Staff* keeper1=new Staff(0,"Filip Novy", 25000,"zoo keeper");
    Staff* keeper2=new Staff(1,"Honza Safarcik", 25000,"zoo keeper");
    Staff* charlady=new Staff(2,"Jana Hezka", 20000,"charlady");

    Paddock* paddock1=new Paddock("farm", 300);

    Pavilion* pavilion1=new Pavilion(3,120,"Little animals", keeper1,20);
    Pavilion* pavilion2=new Pavilion(4,120,"Big animals", keeper2,40);

    Ticket* tic1=new Ticket("Wow, you look like a bear!", "12.4.21");
    Ticket* tic2=new Ticket();

    //Pavilion's methods
    pavilion1->AddAnimal(penguin);
    pavilion1->AddAnimal(parrot);
    pavilion2->AddAnimal(tiger);

    pavilion1->PrintListOfAnimals();
    pavilion1->RemoveAnimal(parrot);
    pavilion1->PrintListOfAnimals();
    pavilion1->SetCapacity(700);

    cout<<"----------------------------------"<<endl;

    //Paddock's methods
    paddock1->AddAnimal(horse);
    paddock1->PrintDescriptionOfAnimals();

    cout<<"----------------------------------"<<endl;

    //Methods for visitor centre
    visitor_centre1->PrintPosters();
    visitor_centre1->ChangeTime("10:20");
    visitor_centre1->PrintPosters();
    cout<<"----------------------------------"<<endl;

    //Animal's method
    tiger->PrintPosters();
    cout<<"----------------------------------"<<endl;

    //Ticket's methods
    tic1->ChangePrice(100);
    tic1->PrintTicket();

    tic2->CreateDiscount(20);
    tic2->PrintTicket();


    return 0;
}

//NEOTESTOVANY METODY PRO STAFF
