#include <iostream>
#include <set>
#include <list>
#include <vector>


template<typename T> void print_container(T temp)
{
   for (auto elem : temp)
   {
      std::cout << elem << " ";
   }

   std::cout << std::endl;
}

int main()
{
   std::set<std::string> test_set = { "one", "two", "three", "four" };
   std::list<std::string> test_list = { "one", "two", "three", "four" };
   std::vector<std::string> test_vector = { "one", "two", "three", "four" };

   print_container(test_set);
   print_container(test_list);
   print_container(test_vector);
}
