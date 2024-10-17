# Inheritance in C++

## Aim

To understand and implement various types of inheritance in C++.

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

#### 1. Single Inheritance
- **Definition:** In single inheritance, a derived class inherits from one base class.<br>
- **Characteristics:**
   - Simplest form of inheritance.
   - Establishes a direct relationship between the base and derived class.
   - Promotes code reusability by allowing the derived class to access and extend the functionality of the base class.
- **Use Case:** When a clear "is-a" relationship exists (e.g., Dog is an Animal).
#### 2. Multiple Inheritance
- **Definition:** A derived class inherits from more than one base class.
- **Characteristics:**
   - Combines features and functionality from multiple base classes into a single derived class.
   - Can lead to complexity due to conflicting members or methods with the same name in multiple base classes.
   - The "diamond problem" occurs if two base classes share a common base class, causing ambiguity.
- **Use Case:** When a class needs to exhibit behaviors from multiple classes (e.g., a Bat inherits from both Animal and Bird).
#### 3. Multilevel Inheritance
- **Definition:** A class is derived from another derived class, creating a chain of inheritance.
- **Characteristics:**
   - Establishes a hierarchy, where each level extends the functionality of the previous one.
   - The derived class at each level inherits all the properties of the classes above it in the chain.
   - Changes in the base class can propagate through the entire hierarchy.
- **Use Case:** Useful for creating a hierarchy where each class adds more specific functionality (e.g., Animal → Mammal → Dog).
#### 4. Hierarchical Inheritance
- **Definition:** Multiple classes are derived from a single base class.
- **Characteristics:**
   - Allows different derived classes to share common characteristics from the base class.
   - Promotes code reusability as common functionality is defined once in the base class and used by multiple derived classes.
   - Derived classes can have different implementations of their specific features.
- **Use Case:** When different classes share some common functionality but have their own unique features (e.g., Bird, Dog, and Fish all inherit from Animal).
#### 5. Hybrid Inheritance
- **Definition:** A combination of two or more types of inheritance.
- **Characteristics:**
   - Can mix multiple inheritance, multilevel inheritance, and hierarchical inheritance.
   - Provides flexibility in the design of class relationships but can lead to increased complexity.
   - Requires careful handling to avoid ambiguity, especially with multiple inheritance.
- **Use Case:** When a combination of inheritance types is needed to model a complex relationship (e.g., a class hierarchy that mixes traits from multiple sources).

### Advantages of Inheritance

- **Code Reusability**: Inheritance allows reusing existing code.
- **Method Overriding**: Derived classes can override base class methods.
- **Hierarchical Classification**: It helps organize code in a structured manner.

### Disadvantages of Inheritance

- **Increased Coupling**: Changes in the base class can affect derived classes.
- **Complexity in Multiple Inheritance**: May lead to problems like the diamond problem.
