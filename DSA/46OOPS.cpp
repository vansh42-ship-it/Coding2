#include <iostream>
using namespace std;
#include <string>

class Hero {
private:
  int health = 100;
  char level = 'A';

public:
  Hero() { cout << "abcd" << endl; };
  Hero(int health) {
    cout << "This is:" << this << endl;
    this->health = health;
  }

  int getHealth() { return health; }
  int getLevel() { return level; }
  void setHealth(int h) { health = h; }
  void setLevel(char ch) { level = ch; }
  void print() {
    cout << "Health is:" << this->health << endl;
    cout << "Level is:" << this->level << endl;
  }
  Hero(int health, char level) {
    this->health = health;
    this->level = level;
  }
  // COPY CONSTRUCTOR(NOT DEFAULT)
  //   Hero(Hero &temp) {
  //     this->health = temp.health;
  //     this->level = temp.level;
  //   }
  ~Hero() { cout << "Destructor called" << endl; }
};
int main() {

  //   Hero ramesh;
  //   ramesh.setHealth(120);
  //   cout << "Health is:" << ramesh.getHealth() << endl;
  //   cout << "Level is:" << ramesh.level << endl;

  // dynamically
  //   Hero *b = new Hero;
  //   b->setHealth(90);
  //   cout << (*b).getHealth() << endl;
  //   cout << b->getHealth() << endl;

  //   Hero ramesh; // constructor hero is called statically by this
  //   Hero ramesh(90);
  //   cout << &ramesh << endl;
  //   cout << ramesh.getHealth();

  // COPY CONSTRUCTOR
  //   Hero R(90, 'B');

  //   Hero S(R);
  //   R.print();
  //   S.print();
  // THERE ARE TWO TYPES OF COPY CONSTRUCTOR DEFAULT AND NON DEFAULT
  // DEFAULT COPY CONSTRUCTOR COPIES ADRESS OF AN OBJECT FOR EXAMPLE
  // HEALTH INTO HERO2 SO IF SOMETHING CHANGES IN HERO1 IT ALSO CHANGES
  // IN HERO2

  //   Hero hero1(75, 'B');
  //   Hero hero2 = hero1;
  //   hero1.print();
  //   hero2.print();
  //   hero1.setHealth(100);
  //   hero1.print();
  //   hero2.print();

  // DESTRUCTOR KA KAAM HOTA HAI MEMORY KO DE ALLOCATE KARWANA
  // STATIC
  Hero a;

  // DYNAMIC
  Hero *b = new Hero();
  // FOR DYNAMIC WE NEED TO CALL DESTRUCTOR MANUALLY
  delete b;

  return 0;
}