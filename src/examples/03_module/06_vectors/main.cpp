#include "vec.h"

int main() 
{//9, 10, 99, 5, 67
	vector<int> nums{ 9, 10, 99, 5, 57 };			//Creates and empty list.

	loop_vector_w_index(nums);
	loop_vector_w_index_ref(nums);

	return 0;
}