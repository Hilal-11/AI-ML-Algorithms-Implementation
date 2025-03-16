

function objectiveFunction(x){
    return -((x - 3) * (x - 3)) + 9
}

function hillClimbing(start_x , step_size = 0.1 , max_iterations = 100) {
    current_x = start_x;
    current_value = objectiveFunction(current_x);

    for(i = 0; i < max_iterations; i++) {
        new_x = current_x + Math.floor(Math.random() % 2 ? step_size : -step_size);
        new_value = objectiveFunction(new_x);

        if(new_value > current_value) {
            current_x = new_x;
            current_value = new_value;
        }
        else {
            break;
        }
    }
    return current_x;
}


start_x = (Math.random() * 60) / 10.0;
console.log(start_x.toFixed(1))

best_x = hillClimbing(start_x.toFixed(2));
best_value = objectiveFunction(best_x);

console.log(`Best x: ${best_x} , Best value: ${best_value.toFixed(2)}`);