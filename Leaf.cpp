//
// Created by Marius on 2/18/2021.
//

#include <iostream>
#include "Leaf.h"

void Leaf::ShowDetails() {
  std::cout << name << " " << price << " eur" << std::endl;
}

double Leaf::GetPrice() {
  return price;
}

Leaf::Leaf(const std::string &name, double price) : name(name), price(price) {}
