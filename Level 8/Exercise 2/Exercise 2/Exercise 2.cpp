//This exercise is to test tuple that builded in boost library
#include <boost\tuple\tuple.hpp>
#include <boost\tuple\tuple_io.hpp>

#include <iostream>

//Define Person with 3 inputs
typedef boost::tuple< std::string, int, double> Person;

void print(Person person){
	std::cout << "Name: " << person.get<0>() << std::endl;//print out the name
	std::cout << "Age: " << person.get<1>() << std::endl;//print out the age
	std::cout << "Length: " << person.get<2>() << std::endl;//print out the length
}
void main(){


	//Initial 3 person tuples
	Person person1 = Person("Jack", 22, 178);
	Person person2 = Person("James", 26, 199);
	Person person3 = Person("Chris", 22, 165);

	//print out 3 person tuples
	print(person1);
	print(person2);
	print(person3);

	//change the age of first person and reprint it
	person1.get<1>() = 30;
	print(person1);
}