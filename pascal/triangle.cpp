///////////////////////////////////////////////////////////////////////////////////////////////////
//Tyler Perkins
//3-25-20
//This will take a row and position in pascals triangle, and return it to the user
//

#include <iostream>

int factorial(int n){ //loop based factorial
    int total = 1;
    for(int i=1;i<=n;i++){
	total *= i;
    }
    return total;
}


int main(int argc, char** argv) {
    int row;
    int pos;

    std::cout << "Row?" << std::endl;
    std::cin >> row;
    if(row < 0){ //indexing begins at zero
        std::cout << "Invalid value! The row must be larger or equal to 0" << std::endl;
        std::cout << "Quiting!" << std::endl;
	return 1;
    }

    std::cout << "Position?" << std::endl;
    std::cin >> pos;
    //indexing begins at zero
    //so basically we add one pos per row, so pros can never be bigger then row
    //they grow togehter
    if(pos > row){
	std::cout << "Invalid value! The pos must be less then or equal to row" << std::endl;
	std::cout << "Quiting" << std::endl;
	return 2;
    }

    //now we calculate this using combinations
    int dem = (factorial(pos)) * (factorial(row - pos));
    std::cout << "Value is: " << (factorial(row)/dem) << std::endl;

    return 0;
}
