#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
char	
short	
int
float
double
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    char nameFirstInitial = 'A';
    char nameMiddleInitial = 'B';
    char nameLastInitial = 'C';
	
    short sensorReadingRaw = 0x00AD;
    short errorCode = -3;
    short valueTwosComp = -3443;  

    int channelNumber = 2;
    int numSamples = 57889;
    int weightPassengerLbs = 300;

    float tempFreezer_C = -273.15f;
    float geoElevation = -60.;
    float weightPassenger = 350;

    double checkingAccountBezos = 33000000000000.;
    double checkingAccountMusk = 34000000000000.;
    double checkingAccountMe = -3000.;

    bool doThis = true;
    bool exitLoop = false;
    bool killThread = true;
    
    ignoreUnused(nameFirstInitial,
        nameMiddleInitial,
        nameLastInitial,
        sensorReadingRaw,
        errorCode,
        valueTwosComp,  
        channelNumber,
        numSamples,
        weightPassengerLbs,
        tempFreezer_C,
        geoElevation,
        weightPassenger,
        checkingAccountBezos,
        checkingAccountMusk,
        checkingAccountMe,
        doThis,
        exitLoop,
        killThread
    ); //passing each variable declared to the ignoreUnused() function

}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void setOvenTemp(int desiredTemp)
{ 
    ignoreUnused(desiredTemp); 
}
/*
 2)
 */
void setNumAudioChannels(int numChannels = 2)
{ 
    ignoreUnused(numChannels);
}
/*
 3)
 */
float convertMidiNoteToFreq(int noteNumber)
{ 
    ignoreUnused(noteNumber);
    return {};
}
/*
 4)
 */
void createBPF(float filter_coef1, float filter_coef2, float filter_coef3)
{ 
    ignoreUnused(filter_coef1, filter_coef2, filter_coef3);
} 
/*
 5)
 */
void setLoginAuthenticator(int authType = 0)
{ 
    ignoreUnused(authType);
}
/*
 6)
 */
void setCurrentLocationLLA(float lat, float lon, float alt)
{ 
    ignoreUnused(lat, lon, alt);
}
/*
 7)
 */
int getPitchWheelValue(int pitchWheelSelect = 0)
{ 
    ignoreUnused(pitchWheelSelect);
    return {};
}
/*
 8)
 */
void pointTelescope(float azimuth = 0, float elevation = 0)
{ 
    ignoreUnused(azimuth, elevation);
}
/*
 9)
 */
void setCCDExposureTime(int integrationTimeSeconds = 2)
{ 
    ignoreUnused(integrationTimeSeconds);
}
/*
 10)
 */
void setLaserPulseDutyCycle(int pulseDutyCycle = 50)
{ 
    ignoreUnused(pulseDutyCycle);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    setOvenTemp(350);
    //2)
    setNumAudioChannels(7);
    //3)
    auto freq = convertMidiNoteToFreq(60);
    //4)
    createBPF(34.565f, 56.245f, 13.543f);
    //5)
    setLoginAuthenticator(1);
    //6)
    setCurrentLocationLLA(-34.0045f, 73.4565f, 1024.f);
    //7)
    auto pitchWheel = getPitchWheelValue(0);
    //8)
    pointTelescope(24.56f, 37.4f);
    //9)
    setCCDExposureTime(10);
    //10)
    setLaserPulseDutyCycle(75);
    
    ignoreUnused(carRented, freq, pitchWheel);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
