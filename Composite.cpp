//
// Created by Marius on 2/18/2021.
//

#include <iostream>
#include "Composite.h"
#include "Color.h"
Composite::Composite(const std::string &name) : name(name) {}

void Composite::Add(Component * component) {
  Composite::list.emplace_back(component);
}

void Composite::ShowDetails() {

  Color::setConsoleColor(2);
  std::cout << "====================" << std::endl;
  std::cout << name << std::endl;
  std::cout << "====================" << std::endl;
  Color::setConsoleColor(8);
  for(Component *component: list){
    component->ShowDetails();
  }


}

double Composite::GetPrice() {
  double total = 0;
  for(Component *component: list){
    total += component->GetPrice();
  }
  return total;
}
