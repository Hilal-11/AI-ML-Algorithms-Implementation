#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For seeding random numbers

using namespace std;

// Objective function: f(x) = - (x - 3)^2 + 9
double objectiveFunction(double x) {
    return -((x - 3) * (x - 3)) + 9;
}

// Hill Climbing Algorithm
double hillClimbing(double start_x, double step_size = 0.1, int max_iterations = 100) {
    double current_x = start_x;                   // Starting point
    double current_value = objectiveFunction(current_x); // Current fun ction value

    for (int i = 0; i < max_iterations; i++) {
        // Generate a neighbor by moving left or right
        double new_x = current_x + ((rand() % 2 == 0) ? step_size : -step_size);
        double new_value = objectiveFunction(new_x);

        // Move to the new state if it's better
        if (new_value > current_value) {
            current_x = new_x;
            current_value = new_value;
        } else {
            break;  // Stop if no improvement
        }                                                                                         
    }
    return current_x;
}

// Main function
int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    // Start from a random x value between 0 and 6
    double start_x = (rand() % 60) / 10.0; 

    // Run the Hill Climbing Algorithm
    double best_x = hillClimbing(start_x);
    double best_value = objectiveFunction(best_x);

    // Print the results
    cout << "Best x: " << best_x << ", Best value: " << best_value << endl;

    return 0;
} 
//  Hill Climbing Algorithm is a heuristic search algorithm used for mathematical optimization problems. It is a local search algorithm that starts from an initial solution and iteratively moves to a neighboring solution with a higher value of the objective function. The algorithm terminates when it reaches a local maximum where no neighboring solution has a higher value. 
//  In this C++ program, we implement the Hill Climbing Algorithm to find the maximum value of the function f(x) = - (x - 3)^2 + 9. The algorithm starts from a random initial x value between 0 and 6 and iteratively moves to a neighboring solution with a higher value of the objective function. The algorithm stops when no neighboring solution has a higher value. 
//  The main function initializes the random number generator, runs the Hill Climbing Algorithm, and prints the best x value and the corresponding function value. 
//  The objectiveFunction function calculates the value of the function f(x) = - (x - 3)^2 + 9 for a given x value. 
//  The hillClimbing function implements the Hill Climbing Algorithm. It takes the starting x value, step size, and maximum number of iterations as input parameters. It iteratively generates neighboring solutions by moving left or right and moves to the new state if it has a higher value of the objective function. The function returns the best x value found by the algorithm. 
//  The program uses the rand() function to generate random numbers and the srand() function to seed the random number generator. 
//  The output of the program is the best x value and the corresponding function value found by the Hill Climbing Algorithm. 
//  Time Complexity: The time complexity of the Hill Climbing Algorithm depends on the number of iterations required to reach a local maximum. In the worst case, the algorithm may run for a large number of iterations, resulting in a high time complexity. 
//  Space Complexity: The space complexity of the Hill Climbing Algorithm is O(1) as it does not require any additional data structures to store the solutions. 
//  The Hill Climbing Algorithm is a simple and efficient heuristic search algorithm for optimization problems. It is suitable for problems where the search space is continuous and the objective function is differentiable. The algorithm is easy to implement and can be used to find local optima in a wide range of applications. 
//  The Hill Climbing Algorithm has some limitations, such as getting stuck in local optima and not being able to explore the entire search space. To overcome these