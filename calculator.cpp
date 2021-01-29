// C++ program to create calculator using 
// switch statement 
#include <iostream> 
using namespace std; 
  
// Main program 
main() 
{ 
    char op; 
    float num1, num2; 
  
    
    cin >> op; 
  
     
    cin >> num1 >> num2; 
  
    
    switch (op) { 
          
        
        case '+': 
            cout << num1 + num2; 
            break; 
          
        
        case '-': 
            cout << num1 - num2; 
            break; 
          
        
        case '*': 
            cout << num1 * num2; 
            break; 
          
         
        case '/': 
            cout << num1 / num2; 
            break; 
          
        
        default: 
            cout << "Error! operator is not correct"; 
            break; 
    } // switch statement ends 
  
    return 0;  
} 