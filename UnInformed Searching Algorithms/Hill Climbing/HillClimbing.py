import random

def objectiveFunction(x):
    return -((x - 3) * (x - 3)) + 9

def hillClimbing(start_x , step_size = 0.1, max_iterations = 100):
    current_x = start_x
    current_value = objectiveFunction(current_x)
    
    
    for i in range(0 , max_iterations):
        new_x = current_x + (random.random() % 2 == 0)
        if(new_x % 2 == 0):
            current_x + step_size
        else:
            current_x + (-step_size)
        new_value = objectiveFunction(new_x)
            
        if(new_value > current_value):
            current_x = new_x
            current_value = new_value
        else:
            break
        
    
    return current_x
            
        

ran = random.uniform(0 , 6) # random generated between n - m
start_x = round(ran , 1)
best_x = hillClimbing(start_x)
best_value = objectiveFunction(best_x)

print(f"Best x: {best_x} Best value: {round(best_value , 2)}")
 