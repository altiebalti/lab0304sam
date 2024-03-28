#include <iostream>
#include "Introduce.hpp"


Introduce::Introduce(std::string given_name, std::string given_group, std::string given_variant, std::string given_problem) {
	name = given_name;
	group = given_group;
	variant = given_variant;
	problem = given_problem;
}

void Introduce::introduce_work() {
	std::cout << "Laboratory work 3/4\n";
	std::cout << "Made by " << this->name << " from group " << this->group << "\n";
	std::cout << "Variant " << this->variant << "\n" << this->problem << '\n';
}