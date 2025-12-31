# C++: SFML Shape Simulations
**University Year 1 | Semester 1 & 2**

A progression-based technical study of C++ and SFML, tracking the evolution of a shape-rendering system from foundational physics experiments to an advanced, refactored Object-Oriented architecture.

> **Technical Deep Dives on my Portfolio:**
> * [🔗 Game Programming Fundamentals (Semester 1)](https://sites.google.com/view/myles-coleman/projects/game-programming-fundamentals)
> * [🔗 Game Software Engineering (Semester 2)](https://sites.google.com/view/myles-coleman/projects/game-software-engineering)

## 📂 Repository Contents

### 1. 01-Fundamentals-Version (Semester 1)
* **Focus:** Initial library experimentation and core physics logic.
* **Features:** Randomized initialization of Circle and Rectangle objects with unique velocities and colors.
* **Physics:** Screen-edge collision detection and velocity inversion to simulate realistic bouncing effects.
* **Input:** Mouse detection logic allowing for instant entity teleportation to the cursor (Left-Click) or new instantiation (Right-Click).

### 2. 02-OOP-Inheritance-Refactor (Semester 2)
* **Focus:** Refactoring foundational code to demonstrate **Inheritance** and **Polymorphism**.
* **Architecture:** Developed an **Abstract Base Shape Class** to define universal movement and drawing protocols.
* **Derived Classes:** Implemented specialized `Circle`, `Rectangle`, and `Polygon` classes, each providing unique overrides for the virtual `Draw` and `Move` functions.
* **Pointer Management:** Managed all simulation entities via a `std::vector` of base class pointers, illustrating safe object handling and polymorphic behavior.

### 3. 03-Pass-Session-Game-Prototype (WIP)
* **Focus:** An experimental game prototype utilising the refactored shape system for gameplay. This branch remains active for ongoing technical exploration.

## 🛠️ Technical Skills Demonstrated
* **OOP Principles:** Advanced application of Encapsulation, Inheritance, and Polymorphism.
* **Memory Management:** Practical implementation of dynamic object lifecycles using pointers and references.
* **Algorithm Logic:** Development of custom collision detection and screen-wrapping physics logic.
* **Code Refactoring:** Experience in transforming legacy procedural-style code into a modular, maintainable class hierarchy.

## 💻 Technical Specs
* **Language:** C++
* **Graphics Library:** SFML
* **IDE:** Visual Studio
