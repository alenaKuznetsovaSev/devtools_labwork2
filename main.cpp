#include <iostream>
#include <string>

class Duck {
 public:
  std::string my_name = "Tom";
  int age = 0;

  void say_name() {
    std::cout << "My name is " << my_name << "!\n";
  }

  void swim(){
    std::cout << "I'm swimming!! Yachuuu!";
  }
  
  void fly(){
    std::cout << "I belive, I can fly!";
  }

  void how_old_are_you(){
    std::cout << "I'm " << age << " years old.\n";
  }
};

int main() {
  Duck my_duck;

  my_duck.say_name();
  my_duck.how_old_are_you();

  my_duck.my_name = "John";
  my_duck.say_name();

  my_duck.swim();

  return 0;
}

