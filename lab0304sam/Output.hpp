
#ifndef OUTPUT_H
#define OUTPUT_H
#include <string>


class Output {
private:
	
public:
	std::string name;
	std::string group;
	std::string variant;
	std::string problem;
	
	Output(std::string given_name, std::string given_group, std::string given_variant, std::string given_problem);

	void introduce_work();
	void sayGoodBye();
};

#endif