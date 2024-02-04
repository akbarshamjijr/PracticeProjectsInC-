#include <iostream>


int multiply(int x, int y);
int main(int agrc, char* argv[]){
	
	std::cout << "We are using forward declaration" << std::endl;

	std::cout << multiply(5, 6) << std::endl;
	
	std::cout << "We still have not defined the multiply function..." << std::endl;
}


int multiply(int x, int y){

	return x * y;

}
