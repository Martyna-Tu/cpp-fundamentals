#pragma once
#include <vector>
#include <limits>


int maxOfVector(const std::vector<int>& vec) {
		
    int max = std::numeric_limits<int>::min();

    for(auto const &el : vec) { 
	    max = (max < el) ? el : max;
    }

    return max;
}
