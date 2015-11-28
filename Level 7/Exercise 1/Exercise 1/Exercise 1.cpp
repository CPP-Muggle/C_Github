//This exercise is to practice different containers provided by STL
#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>

void main(){
	//List
	std::list<double> List;//creat a list with doubles
	List.push_front(1);//add elements from front
	List.push_front(2);//add elements from front
	List.push_back(3);//add elements from back
	List.push_back(4);//add elements from back
	std::cout << "The first element is: " << List.front()<<"\n";//access the first element using "front"
	std::cout << "The last element is: " << List.back() << "\n";//access the last element using "back"
	//Vector
	std::vector<double> v;//creat a vector with doubles
	v.reserve(2);//reserve space for 2 elements
	v.push_back(1);//add elements from back
	v.push_back(2);//add elements from back
	v.push_back(3);//add elements from back
	v[2] = 4;//access the third element using index operator
	std::cout << "The last elements is: " << v.back() << "\n";//access the last element
	std::cout << "Capacity: " << v.capacity() << "\n";//capacity increases from 2 to 3
	//Map
	std::map<std::string, double>mymap;
	mymap["First"] = 1;//fill the map using square bracket operator
	mymap["Second"] = 2;// fill the map using square bracket operator
	mymap["Third"] = 3;//fill the map using square bracket operator
	std::cout << "The string 'Third' maps to:" << mymap["Third"] << "\n";//access the element using sqaure bracket operator
}