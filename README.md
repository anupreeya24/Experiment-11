# Experiment-11


### Theory

**Object-Oriented Programming (OOP)** is a programming paradigm that uses "objects" to represent data and methods to operate on that data. The core principles of OOP include encapsulation, inheritance, polymorphism, and abstraction.

1. **Classes**: A class is a blueprint for creating objects. It defines a type of object according to the properties (attributes) and behaviors (methods) that the objects of this class will have. Classes provide a way to bundle data and methods that work on that data into a single unit.

   - **Encapsulation**: This principle is about bundling the data (attributes) and the methods (functions) that manipulate the data into a single unit, or class. It helps in restricting direct access to some of the object's components, which can prevent accidental interference and misuse of the data.
   - **Abstraction**: Classes allow for abstraction by providing a simplified model of a complex system. By focusing on the essential characteristics and ignoring irrelevant details, classes enable a higher level of interaction with objects.

2. **Objects**: An object is an instance of a class. It is a self-contained unit that contains both data and methods. Objects interact with each other and with their environment through these methods.

   - **Instantiation**: Creating an object from a class is known as instantiation. Each object can hold its own data, and methods operate on this data. Instantiation allows for the creation of multiple instances of a class, each with potentially different attribute values.
   - **State and Behavior**: Objects have a state, represented by their attributes, and behavior, represented by their methods. The state of an object can change over time through its methods.

3. **Inheritance**: This principle allows a new class (subclass or derived class) to inherit attributes and methods from an existing class (base class or parent class). It promotes code reusability and establishes a natural hierarchy between classes.

4. **Polymorphism**: Polymorphism allows methods to do different things based on the object it is acting upon, even if they share the same name. It is a way to perform a single action in different forms.

### Conclusion

The study and implementation of classes and objects are foundational to object-oriented programming, which is a powerful paradigm widely used in software development. By understanding the core principles—encapsulation, abstraction, inheritance, and polymorphism—developers can design and implement systems that are modular, reusable, and easier to maintain.

**Implementation of Classes and Objects** involves:

1. **Designing Classes**: Developing classes with well-defined attributes and methods that encapsulate related data and functionality. This requires careful planning to ensure that classes are coherent and serve a specific purpose.

2. **Creating Objects**: Instantiating objects from classes and ensuring that they interact correctly through their methods. This involves managing object states and behaviors to achieve desired functionality.

3. **Leveraging Inheritance**: Using inheritance to create a hierarchy of classes that promotes reuse and extension of code. Properly designed inheritance can simplify code maintenance and enhance readability.

4. **Applying Polymorphism**: Implementing polymorphism to handle different types of objects through a common interface, enhancing flexibility and scalability.



### Algorithm to Define and Use a Student Class

1. **Define the Student Class**:
   - Create a class named `student` with the following public attributes:
     - `string name`: to store the student's name.
     - `float age`: to store the student's age.
     - `string branch`: to store the student's branch of study.
     - `float result`: to store the student's result (GPA or equivalent).
     - `int year`: to store the year of study.

2. **Main Function**:
   - **Create the First Student Instance**:
     - Declare an instance of the `student` class named `s1`.
     - Assign values to the attributes of `s1`:
       - `s1.name = "Anupreeya"`
       - `s1.age = 19`
       - `s1.branch = "ENTC"`
       - `s1.result = 8.13`
       - `s1.year = 2023`
     - Print the attributes of `s1`.

   - **Create the Second Student Instance**:
     - Declare another instance of the `student` class named `s2`.
     - Assign values to the attributes of `s2`:
       - `s2.name = "Aditya"`
       - `s2.age = 19`
       - `s2.branch = "ENTC"`
       - `s2.result = 7.8`
       - `s2.year = 2023`
     - Print the attributes of `s2`.

### Algorithm to Define a Student Class with a Method

1. **Define the Student Class**:
   - Create a class named `student`.
   - Inside the class, define a public method named `mystudentyear()`:
     - This method, when called, prints the message: `"hello!, I am in 2nd year"`.

2. **Main Function**:
   - Create an instance of the `student` class named `myobj`.
   - Call the `mystudentyear()` method on `myobj`.


### Algorithm to Define a Student Class with an External Method

1. **Define the Student Class**:
   - Create a class named `student`.
   - Inside the class, declare a public method named `mystudentyear()`.

2. **Implement the Method**:
   - Outside the class, define the `mystudentyear()` method:
     - This method prints the message: `"hello, I m in 2nd year."`.

3. **Main Function**:
   - Create an instance of the `student` class named `myobj`.
   - Call the `mystudentyear()` method on `myobj`.


### Algorithm to Calculate the Volume of a Cuboid

1. **Define the Cube Class**:
   - Create a class named `cube`.
   - Declare public methods and member variables:
     - **Member Variables**:
       - `int a, b, c`: to store the dimensions of the cube (length, breadth, height).
       - `int cal`: to store the calculated volume.
     - **Methods**:
       - `void input()`: to prompt the user for the dimensions of the cube and store them in `a`, `b`, and `c`.
       - `void calculation()`: to calculate the volume of the cube using the formula `cal = a * b * c`.
       - `void output()`: to display the calculated volume.

2. **Main Function**:
   - Create an instance of the `cube` class named `myCube`.
   - Call the `input()` method to get the dimensions from the user.
   - Call the `calculation()` method to compute the volume.
   - Call the `output()` method to display the volume.

