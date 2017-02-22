#include "slice.h"

class pizza{

	std::vector<slices> all_pizza;

public:

	void add_slice(slice new_slice){
		all_pizza.push_back(new_slice);
	}

	void remove_slice(slice old_slice){
		all_pizza.erase(old_slice);
	}


}