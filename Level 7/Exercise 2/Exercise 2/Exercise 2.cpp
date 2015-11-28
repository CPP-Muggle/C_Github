//This exercise is to creat functions that take iterator as input to calculate the sum of containers
#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <string>
using namespace std;

template<typename T>
double Sum(const typename T &item){//sum of the complete container for vector and list
	T::const_iterator i;
	double sum = 0;
	for (i = item.begin(); i != item.end(); ++i){//look through and add all values
		sum = sum + *i;
	}
	return sum;
}

template<typename T>
double Sum(const typename T::iterator &it1, const typename T::iterator &it2){//sum between two iterators for vector and list
	T::const_iterator i;
	double sum = 0;
	for (i = it1; i != it2; ++i){//look through and add all values
		sum = sum + *i;
	}
	return sum;
}

template<typename T, typename U>
double Sum(typename const map <T, U> &mymap){//sum of the complete container for map
	map<T,U>::const_iterator i;
	double sum = 0;
	for (i = mymap.begin(); i != mymap.end(); ++i){//look through and add all values
		sum = sum + i->second;
	}
	return sum;
}

template<typename T,typename U>
double Sum(typename const map<T, U>::const_iterator &it1,typename const map<T, U>::const_iterator &it2){//sum between two iterators for map
	map<T,U>::const_iterator i;
	double sum = 0;
	for (i = it1; i != it2; i++){
		sum=sum+i->second;
	}
	return sum;
}

void main(){

	//List
	std::list<double> List;//creat a list with doubles
	List.push_front(1);//add elements from front
	List.push_front(2);//add elements from front
	List.push_back(3);//add elements from back
	List.push_back(4);//add elements from back
	std::cout << "Sum of the list is " << Sum<std::list<double>>(List) << "\n";//call the function with the arguement
	std::cout << "Sum of the list from begin to end is " << Sum<std::list<double>>(List.begin(),List.end()) << "\n";//call the function with two iterators
	
	//Vector
	std::vector<double> v;//creat a vector with doubles
	v.reserve(2);//reserve space for 2 elements
	v.push_back(1);//add elements from back
	v.push_back(2);//add elements from back
	v.push_back(3);//add elements from back
	v[2] = 4;//access the third element using index operator
	std::cout << "Sum of the vector is " << Sum<std::vector<double>>(v) << "\n";//call the function with the arguement
	std::cout << "Sum of the vector from begin to end is " << Sum<std::vector<double>>(v.begin(), v.end()) << "\n";//call the function with two iterators
	
	//Map
	std::map<std::string, double>mymap;
	mymap["First"] = 1;//fill the map using square bracket operator
	mymap["Second"] = 2;// fill the map using square bracket operator
	mymap["Third"] = 3;//fill the map using square bracket operator
	map<string, double>::const_iterator mapStart=mymap.begin();
	map<string, double>::const_iterator mapEnd=mymap.end();
	std::cout << "Sum of the map is " << Sum<string,double>(mymap) << "\n";//call the function with the arguement
	std::cout << "Sum of the map from begin to end is " << Sum<string, double>(mapStart,mapEnd) << "\n";//call the function with two iterators
}