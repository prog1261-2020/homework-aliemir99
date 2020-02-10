#include "gtest/gtest.h"
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Duck.h"
#include "Flamingo.h"
#include"Fox.h"
#include <iostream>
#include <vector>
#include <memory>



TEST(TestCaseName, TestName) {

    std::vector<std::unique_ptr<Animal>> zoo;


    zoo.push_back(std::make_unique<Cat>("Fluffy"));
    zoo.push_back(std::make_unique<Dog>("Fido"));
    zoo.push_back(std::make_unique<Duck>("Daffy"));
    zoo.push_back(std::make_unique<Fox>("Foxy"));
    zoo.push_back(std::make_unique<Flamingo>("Arnold"));
    
    for (auto& a : zoo) {
        a->speak();
        a->move();
       // ((Duck*)a.get())->swim();
    }
   
   // Duck* d= new Duck("Daffy-2");
   // d->swim();

   /* Cat cat("Sabrina ");
    Dog dog("Fido" );
    Duck duck("Donald J Duck ");

    Animal* c =new Cat("Fluffy");
    
    Animal* d = new Dog("Butch");
   
    std::cout << "\n\n";

     c->speak();
     d->speak();
    //cat.speak();
    //dog.speak();
    //duck.speak();

    std::cout << "\n\n";
    */

}