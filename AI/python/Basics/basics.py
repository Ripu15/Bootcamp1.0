#Used for documentation
"""
Variables must start with: letter (a–z, A–Z) or underscore (_)
python is case sensitive
Cannot use Python keywords as variable names
No need to declare variable type:dynamic typing

"""
#Snake_case is the Python convention
#Implicit Type Conversion (Automatic)
name = "Ripudaman-Singh" #its an inline comment
# Explicit Type Conversion (Type Casting)
age = float(5)
print(name, age)

"""
isinstance() and type() are used to check the type of an object
isinstance():whether an object belongs to a class OR any of its parent classes.
type(): Returns the exact type of an object

"""
print(type(name))
print(type(name) == str)
print(isinstance(age,float))


