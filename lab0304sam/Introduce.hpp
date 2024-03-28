
#ifndef INTRODUCE_H
#define INTRODUCE_H

class Introduce {
private:
	
public:
	std::string name;
	std::string group;
	std::string variant;
	std::string problem;
	
	Introduce(std::string given_name, std::string given_group, std::string given_variant, std::string given_problem);

	void introduce_work();
};

#endif