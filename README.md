# Inheritance

## Aim

To understand and implement various types of inheritance in C++ .

## Theory

Inheritance is a key feature of object-oriented programming (OOP) that allows a new class (derived class) to inherit properties and behaviors (methods) from an existing class (base class). This promotes code reusability and establishes a natural hierarchy between classes.

### Key Concepts

1. **Base Class**: The class whose properties and methods are inherited.
2. **Derived Class**: The class that inherits from the base class.
3. **Access Specifiers**: Control the access level of the base class members in the derived class. These include:
   - **public**: Members are accessible from outside the class.
   - **protected**: Members are accessible within the class and by derived classes.
   - **private**: Members are accessible only within the class.

### Types of Inheritance

1. **Single Inheritance**: A derived class inherits from a single base class. This simplifies the class hierarchy and promotes reusability by allowing the derived class to access and override members of the single base class.
2. **Multiple Inheritance**: A derived class inherits from more than one base class. This allows a derived class to combine functionalities from multiple base classes, but it can lead to complexities like the diamond problem, where ambiguity arises from shared base classes.
3. **Multilevel Inheritance**: A class is derived from another derived class. This creates a chain of inheritance, allowing derived classes to extend the behavior of their ancestors, which is useful for creating a clear hierarchy.
4. **Hierarchical Inheritance**: Multiple classes are derived from a single base class. This allows multiple classes to share common features from a single base class, promoting code reusability and organization within related classes.
5. **Hybrid Inheritance**: A combination of two or more types of inheritance. This allows for a more flexible design by combining different inheritance types, but it requires careful management of ambiguities and complexities that may arise.
