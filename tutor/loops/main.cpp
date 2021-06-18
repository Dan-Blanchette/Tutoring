/**
 * @file main.cpp
 * @author Dan Blanchette
 * @brief This program will go through the basic loop types and provide examples on how they work
 * including their exit conditions
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;


int main()
{
    // the for loop uses an iteration to indicate when a program should exit
    /**
     * @brief In this case, we intialize a counter or iterator to zero first. 
     * Then we compare that value to a value that will indicate the number of times we want to repeat the instructions inside 
     * the curley braces. As long as this condition stays true, the loop will continue.
     * that's where the last part comes in for a "for loop". i++ increments our iterator by one each time the instructions
     * are carried out and completed.
     */
    for (int i = 0; i < 5; i++)
    {
        cout << "hello!\n";
    }

    /**
     * @brief this while loop works the same as the for loop with a couple of exceptions.
     * first, we initialize a value much like the for loop to tell the program how many times we want it to run
     * next we say while ( some condition is false, run the instructions inside the curley braces)
     * 
     */
    
    // in this example we set the number of times to run to be 5 times
    int count = 5;
    // we tell the program "while the count variable is not equal to 0, keep running the instructions"
    while ( count != 0 )
    {
        // inside we print out the world world 5 times
        cout << "world!\n";
        // we decrement counts value by 1 each time it concludes running the instructions. meaning eventually,
        // the count variable will be equal to zero making the start condition true thus exiting the loop.
        count--;
    }

    return 0;
}