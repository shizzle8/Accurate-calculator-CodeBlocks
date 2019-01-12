#include <iostream>  // these are all the header files libraries
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;  // this lets us be free from writing std: on every outputs and inputs

int Calculator(); // placing the calculator function to the top so it can be used

void Liibaan();   // placing function at the top so it can be declared

void delay(unsigned int mSecs);// placing the delay function at the top

void animation(); // placing animation function at the top

struct creatorInfo{           // made a data structure to store my info (elements)  by declaring the structure
    string name;
    int age;
    string gender;
    int year;
    string univeristy;
    creatorInfo* p_data;                        // made my pointer point to creatorinfo also i wrote p_ to show that its a pointer
};                                              // its an easy way to find where your pointer is
creatorInfo* getData (){
    creatorInfo* p_info = new creatorInfo;      // declaring my new info for the edits
    p_info->age = 19;
    p_info->name = "Liibaan";                      // storing all my info and linking them
    p_info->gender = "male";
    p_info->year=2017;
    p_info->univeristy= "RHUL";
    return p_info; // this return what I have just done
}



int main() // here is my main where I declare everything in order for my program to work
{
    Liibaan();     // this will print out the Liibaan art I made
    creatorInfo* p_info = getData();                    // declaring it in main

    cout << "  \n My name is " << p_info->name << ", I am  "<< p_info->age << " years old and I am a "<< p_info->gender<<
    ". Welcome to my calculator est. "<< p_info->year<< " "<< p_info->univeristy<< endl;      // outputting my information
    int input; // this variable stores whatever has been entered
    cout<< " \n Enter '1' to open calculator: ";  // This input is for the calculator to start if you input  1, the use of \n makes a gap between the two sentences
    cin>> input; // inputs what user has entered

    if (input==1){                                  // When inputting 1 the calculator opens
        cout<< "\n Thank you for choosing to use my calculator have fun!"<< endl;
        animation();
        Calculator();
    }
    else{         // anything else that is not 1 will quit program
        cout<< "Invalid input quitting program..."<< endl;
        return 0; // this quits the program

    }

}



int Calculator(){     // used int function since its will return and handles calculations with numbers
    int number; // this variable stores whatever has been entered
    int number2; // this variable stores whatever has been entered
    string symbol;
    cout<< "\n \n Enter a integer (whole number): " ;     // This is your input of your first number, the use of \n makes a gap between the two sentences
    cin>> number ;
    if(!cin){                                    // this statement here shows that if a non numeric value is entered (!cin)
                                                 // the program will stop
        cout<< " \n You have entered a non-numeric input \n quitting program..... "<< endl;
        return 0; // quits the program
    }
    cout<< "Enter a arithmetic operator (*,/,+,-) :" ;       // this is your input of your operator
    cin >> symbol ;
    if (symbol!="-"&&symbol!="*"&&symbol!="/"&&symbol!="+") {            // this statement here shows if the correct operator is not entered it will exit program
        cout<< "You entered an invalid symbol quitting program...... " << endl;

    return 0; // quits the program
}
    cout<< "Enter a second number: " ;         // second number is entered
    cin >>number2;
    if(!cin){   // again this statement here shows that if a non numeric value is entered (!cin) the program will stop

        cout<< "You have entered a non-numeric input \n quitting program..... "<< endl; // the use of \n makes a gap between the two sentences
        return 0; // quits the program
    }
    if (symbol == "*"){
        cout<< "Your answer is: " <<number*number2<<'\n' ;       // if * is entered it will multiply the two inputs
    }
    if(symbol== "/"){
        cout<< (float)number/(float)number2<<'\n';               // if / is entered it will divide your first input my the second
    }                                                            // also the use of floats gave me a more accurate value which is a smart touch so you can have decimal answers
    if (symbol == "+"){
        cout<< "Your answer is: " <<number+number2<<'\n' ;    // this will add the two inputs

}
    if (symbol == "-"){
        cout<< "Your answer is: " <<number-number2<<'\n' ;  // this will subtract the first input from the second
}
cout<<"\n operation successful :)   "<<'\n';      // This will show if your operation was successful at the end of each calculation
    cout<< '\a';  // Makes a sound depending what operating system you use to show that operation was successful


}
void animation(){      // function animation
int plotDelay = 800; // 800ms between every operator output
 // while it is true print it out

    cout << " + is Addition";             // delay of 800 milliseconds between each output
    delay(plotDelay);

    cout << "\t - is Subtraction";       // delay of 800 milliseconds between each output
    delay(plotDelay);

    cout<< "\t * is multiplication";   // delay of 800 milliseconds between each output
    delay(plotDelay);

    cout<< "\t / is Division";  // delay of 800 milliseconds between each output
    delay(plotDelay);


}

void delay(unsigned int mSecs) {               // the delay function returns the processor time
    clock_t endTime = mSecs + clock();         // then adds the time to clock (milliseconds)
    while (endTime > clock());               // loops it here
}





void Liibaan(){                                                        // My lovely name art as a function, used void since it does not print anything out

    cout<< "   __    ____________  ___    ___    _   ___"<< endl;           // if you want to know what thjs is, it a ascii art.
    cout<< "   / /   /  _/  _/ __ )/   |  /   |  / | / / "<< endl;
    cout<< "  / /    / / / // __  / /| | / /| | /  |/ / "<< endl;
    cout<< " / /____/ /_/ // /_/ / ___ |/ ___ |/ /|  /"<< endl;
    cout<< "/_____/___/___/_____/_/  |_/_/  |_/_/ |_/  "<< endl;
}
