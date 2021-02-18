#include <iostream>
#include "Composite.h"
#include "Leaf.h"

int main() {

  auto * computer = new Composite("COMPUTER");
  auto * cabinet = new Composite("CABINET");
  auto * peripherals = new Composite("PERIPHERALS");
  auto * motherboard = new Composite("MOTHERBOARD");

  auto * hdd = new Leaf("HDD", 120);
  auto * ram = new Leaf("RAM", 230.50);
  auto * cpu = new Leaf("CPU", 145.22);

  auto * mouse = new Leaf("MOUSE", 120);
  auto * keyboard = new Leaf("KEYBOARD", 230.50);
  auto * monitor = new Leaf("MONITOR", 145.22);

  cabinet->Add(hdd);
  cabinet->Add(motherboard);

  motherboard->Add(ram);
  motherboard->Add(cpu);

  peripherals->Add(mouse);
  peripherals->Add(keyboard);
  peripherals->Add(monitor);

  computer->Add(cabinet);
  computer->Add(peripherals);
  computer->Add(motherboard);


  computer->ShowDetails();
  std:: cout <<"Computer total price: " << computer->GetPrice() << "eur " <<std::endl;



  return 0;
}
