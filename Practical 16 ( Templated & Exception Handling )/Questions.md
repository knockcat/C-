16.1 WAP in C++ to create a genetic add function for given tasks:

  a. Perform add over two integers and return integer
  b. Perform add over one int and one float and return double
  
16.2 WAP in C++ to perform these tasks:
  a. Catch a Divide by zero exception in z = x/y using "throw runtime_error"
  b. What will be the output of this program and why?
  
  #include <iostream>
  using namespace std;
  int main()
  {
    try {
      throw 'a';
    }
    catch (int x) {
      cout << "Caught " << x;
    }
    catch (...) {
      cout << "Default Exception\n";
    }
  return 0;
  }
  
  c. What will be the output of this program and why?
  
  #include <iostream>
  using namespace std;
  int main()
  {
    try {
      throw 'a';
    } 
    catch (int x) {
      cout << "Caught";
    }
  return 0;
  }
  
  d. Rethrow and catch an exception by creating a separate user defined divide function for condition divide by zero.
