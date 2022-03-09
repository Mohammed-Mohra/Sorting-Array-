#include "Person.h"
#include <iostream>
#include <fstream>
using namespace std;

  // Implementation of ISerializable::Save
  void Person::Save(std::ostream& os)
  {
    os << (int)age << ';' << height << ';' << weight << endl;
  }

  // Implementation of ISerializable::Load 
  void Person::Load(std::istream& is)
  {
    double height; double weight; int age; char c;
    is >> age;
    is >> c;
    if (c != ';') is.clear(ios::failbit);
    is >> height;
    is >> c;
    if (c != ';') is.clear(ios::failbit);
    is >> weight;
    if(is)
    {
      this->age = age;
      this->height = height;
      this->weight = weight;
    }
    else
    {
      cerr << "Error in input format." << endl;
    }


	// Write implementation for other member functions

  }
  double Person::GetHeight() {
      return height;
  }
  double Person::GetWeight() {
      return weight;
  }
  void Person::SetHeight(double weight) {
      this->height = height;
  }
  void Person::SetWeight(double weight) {
      this->weight = weight;

  }

  bool Person::operator ==(const IComparable& theOther) {
      Person& Other = (Person&)theOther;
      if (Other.age == age && Other.height == height && Other.weight == weight)
          return true;
      else
        return false;
  }

  bool Person::operator >(const IComparable& theOther) {
      Person& Other = (Person&)theOther;
      return age > Other.age;
  }

