# Constructors-and-Destructors-in-cpp
## AIM
Show how default, parameterized, and copy constructors work, demonstrate defining member functions inside and outside the class, and illustrate destructor behavior when objects go out of scope.

Software used: MinGW compiler, Visual Studio Code, online C++ compiler.

## Program 1 Default constructor (defaultconstructors.cpp)
Explanation and theory: A class named construct defines two integer members and initializes them using a no-argument constructor. When an object is created, this constructor runs automatically, assigning preset values to a and b; main then prints these values to confirm initialization.

Algorithm:
- Start.
- Define a class with members a and b.
- Implement a default constructor that sets a = 10 and b = 20.
- In main: create an instance of the class.
- Output a and b to verify constructor initialization.
- End.

## Program 2 Copy constructor (copyconstructor.cpp)
Explanation and theory: The student class stores roll number, name, and fee. One constructor initializes fields from provided parameters. A second constructor takes a reference to another student and duplicates its members, demonstrating a user-defined copy constructor. A display function prints the object’s data.

Algorithm:
- Start.
- Declare class student with rno, name, fee.
- Implement a parameterized constructor to set these members.
- Implement a copy constructor student(student& t) that copies rno, name, fee from t.
- Provide display() to print all fields.
- In main: create a student with parameters; create another using the copy constructor; call display() on both.
- End.

## Program 3 Define inside class (defininginside.cpp)
Explanation and theory: The student class reads data in its default constructor using standard input and defines display() inside the class body. This shows collecting state at construction time and printing it via an in-class member function, which directly accesses private data.

Algorithm:
- Start.
- Define class student with rollno, name, fee.
- Implement a default constructor that prompts and reads these values.
- Implement display() inside the class to print roll number, name, and fee.
- In main: instantiate student s1 and call display().
- End.

## Program 4 Define outside class (definingoutside.cpp)
Explanation and theory: The class student declares the constructor and display() in the class but defines both outside using the scope resolution operator. The constructor gathers input; display() prints the stored values. This separates interface (declarations) from implementation (definitions).

Algorithm:
- Start.
- Declare class student with data members and public prototypes for constructor and display().
- Define student::student() outside to read roll number, name, and fee.
- Define void student::display() outside to print the fields.
- In main: create a student object and call display().
- End.

## Program 5 Parameterized constructor (parametrisedconstructor.cpp)
Explanation and theory: The Product class initializes ProID, Name, Category, and Price through a constructor with parameters. A display() function prints a formatted summary of the product, showing how objects can be set up with specific data at creation time.

Algorithm:
- Start.
- Define class Product with ProID, Name, Category, Price.
- Implement a parameterized constructor to initialize all members.
- Implement display() to print product details.
- In main: construct Product with sample values and call display().
- End.

## Program 6 Destructor demonstration (destructor.cpp)
Explanation and theory: A global counter tracks live objects. Each time an instance is constructed, the counter increments and prints the current count; when an instance is destroyed, the destructor decrements and reports the remaining count. As scope ends, destructors run automatically in reverse order of construction.

Algorithm:
- Start.
- Set a global integer count = 0.
- Define a class with a constructor that increments count and prints it.
- Define a destructor that decrements count and prints it.
- In main: create several objects to observe creation messages.
- Let scope end to observe destruction messages in reverse order.
- End.

## Conclusion
These programs demonstrate the object lifecycle: initializing members via default and parameterized constructors, duplicating state with a copy constructor, separating declarations from definitions for clarity, and automatic cleanup via destructors. Together, they provide a concise tour of constructor and destructor usage in class designing-destructors)
