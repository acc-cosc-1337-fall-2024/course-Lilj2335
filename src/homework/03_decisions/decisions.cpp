/*
//write include statement for decisions header 

#include <iostream> 
#include <string>
#include "decisions.h" 

 

using std::string; using std::cin; using std::cout; 

//Write code for function(s) code here 

 

// string get_letter_grade_using_if 

string get_letter_grade_using_if(int num) 

{ 
  if(num >= 90 && num <=100) 

{

    return "A";
}

   

    

    else if(num >= 80 && num <=89) 

{

    return "B";

}

   else if(num >= 70 && num <=79) 

{

    return "C"; 

}

 


    else if(num >= 60 && num <=69) 

{

    return "D"; 

} 

    else if(num >= 0 && num <=59) 

{

    return "F"; 
} 
    else 

{

    return "Invalid Input, please enter a number between 0 and 100 next time."; 

} 

 



// string get_letter_grade_using_switch 

 

string get_letter_grade_using_switch(int num) 

{ 

    string option = ""; 

    switch (num/10) 

    { 



    case 10: 

    option = "A"; 

     break; 

 
    case 9: 
    
    option = "A"; 

    break; 





    case 8: 

    option = "B"; 

    break; 



    case 7: 

    option = "C"; 

    break; 

 

    case 6: 

     option = "D"; 
     
     break; 

 

     case 0 ... 5: 

    option = "F"; 

     break; 

  

    default: 

     option = "Invalid Input, please enter a number between 0 and 100 next time."; 

    break; 

 
     return option; 

    } 

} 

 

 */