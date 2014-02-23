#Object Oriented Terminology


1. **Object**: A chunk of memory that we use to represent real world or sometimes conceptual objects
like cats or space ships.  An object is an instance of a Class.

2. **Class**: The blue print for an object.  The class defines what an object has, how it can behave and 
in many cases how it relates to other classes of objects.  Classes evolved from the module as type 
concept first appearing in Simula-67.  Defining a class allocates no memory in the same way have int
as a type doesn't allocate memory.  Declaring and instantiating an int uses memory the same way instantiating 
an instance of a class does.

3. **Method**:  A function specific to a class that defines some behavior or ability of instances of a class.

4. **Virtual Method**:  A method which can be overriden by inheriting classes who might have more specific behavior 
than their superclass (base class/ parent class).  These method are not required to be instantiated (overriden) by inheriting classes.

5. **Class/Static Method**: Typically a method resolved at compile-time specific to the class itself and not an instance of the class.

6. **Static/Class Initializer**:  Code that is run to setup or initialize class-wide attributes.  These initializers typically run before a class is loaded or resolved for the first time.

7. **Constructor**:  A method called when instantiating an instance of class to setup the instance's members.

8. **Destructor**:  A method designed to release an objects resources.  This may be called explicitly by a programmer before the GC gets to it or invoked automatically when an objects lifetime is bound to it's scope and execution is leaving the scope.

9. **Superclass/Base class**:  A class which is inherited from.  These classes may or may not be abstract and require further implementation.

10. **Subclass/Derived class**:  A class which is inheriting from or implementing some base [abstract] class. 
