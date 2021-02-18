//
// Created by Marius on 2/18/2021.
//

#ifndef TASK4_COMPOSITE_H
#define TASK4_COMPOSITE_H


#include <string>
#include <vector>
#include "Component.h"

class Composite : public Component{
private:
  std::string name;
  std::vector<Component*> list;
public:
  Composite(const std::string &name);

  void ShowDetails() override;
  double GetPrice() override;
  void Add(Component *component);
};


#endif //TASK4_COMPOSITE_H
