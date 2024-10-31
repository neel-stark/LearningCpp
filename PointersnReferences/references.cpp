#include <iostream>
#include<string>

using namespace std;

void pass_by_value(int var1_fn){
    cout  << "var1_fn: " << var1_fn << '\n';
    cout <<"Modifying var1_fn to 34.\n";
    var1_fn = 34;
    cout  << "var1_fn: " << var1_fn << '\n';
}

void pass_by_reference(int& var1_fn){
    cout  << "var1_fn: " << var1_fn << '\n';
    cout <<"Modifying var1_fn to 34.\n";
    var1_fn = 34;
    cout  << "var1_fn: " << var1_fn << '\n';
}

void pass_by_reference_pointer(int* var1_fn){
    cout  << "var1_fn: " << *var1_fn << '\n';
    cout <<"Modifying var1_fn to 34.\n";
    *var1_fn = 34;
    cout  << "var1_fn: " << *var1_fn << '\n';
}

int main()
{   //initializing an integer variable
    int var1(15);    
    //creating a reference varaible which has the same memory address as var1
    int& var2 = var1;
    cout << "var1 is the original variable and var2 is a reference to it.\n";   
    cout  << "var1: " << var1 << '\n';
    cout  << "var2: " << var2 << '\n';
    cout  << "address of var1: " << &var1 << '\n';
    cout  << "address of var2: " << &var2 << "\n\n";
    
    // Modifying var1
    var1 = 45;
    cout << "Modifying var1: \n";
    cout  << "var1: " << var1 << '\n';
    cout  << "var2: " << var2 << '\n';
    
    //Modifying var2
    var2 = 56;
    cout << "Modifying var2: \n";
    cout  << "var1: " << var1 << '\n';
    cout  << "var2: " << var2 << "\n";
    cout << "Modifying either the original variable or its reference modifies the value stored at its storage address. \n\n";
    cout << "To avoid the reference variable from modifying the value of the actual variable, create it as: \nconst int &var3 = var1.\n";
    const int& var3 = var1;
    var1 = 34;
    cout << "Modifying var1: \n";
    cout  << "var1: " << var1 << '\n';
    cout  << "var3: " << var3 << '\n';
    // var3 = 12;
    cout << "Attempting to modify var3, will throw a compiler error! Uncomment line in code to see error.\n\n";
    
    var1 = 1;
    //passing a variable by value to a function
    cout << "Passing a variable 'by value' to a function: \n";
    cout  << "var1: " << var1 << '\n';
    cout << "(var1_fn exits inside the scope of the function only, while var1 exists outside its scope!) \n";
    pass_by_value(var1);
    cout  << "var1: " << var1 << "\n\n";

    var1 = 1;
    //Passing a variable by reference to a function
    cout << "Passing a variable 'by reference' to a function: \n";
    cout << "(var1_fn exits inside the scope of the function only, while var1 exists outside its scope!) \n";
    cout  << "var1: " << var1 << '\n';
    pass_by_reference(var1);
    cout  << "var1: " << var1 << "\n\n";

    var1 = 1;
    //Passing a variable by reference to a function
    cout << "Passing a variable 'by reference' (using a pointer) to a function: \n";
    cout << "(var1_fn exits inside the scope of the function only, while var1 exists outside its scope!) \n";
    cout  << "var1: " << var1 << '\n';
    pass_by_reference_pointer(&var1);
    cout  << "var1: " << var1 << '\n';

    return 0;
}
