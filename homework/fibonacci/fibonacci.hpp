#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence < 2)
	    return sequence;
       
    int x = 0; 
    int	y = 1;
    for(int i = 0 ; i < sequence-1 ; i++){
 	  y = y + x;
 	  x = y - x;
   	}
    
    return y;
    
 }

int fibonacci_recursive(int sequence) {
    if(sequence < 2 ) {
        return sequence;
    }
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);   
}
