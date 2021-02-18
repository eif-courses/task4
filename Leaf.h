//
// Created by Marius on 2/18/2021.
//

#ifndef TASK4_LEAF_H
#define TASK4_LEAF_H


#include <string>
#include "Component.h"

class Leaf : public Component{
public:
  void ShowDetails() override;
  double GetPrice() override;

  Leaf(const std::string &name, double price);

private:
  std::string name;
  double price;
};


#endif //TASK4_LEAF_H
