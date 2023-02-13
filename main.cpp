#include <iostream>
#include "exp.pb.h"

int main(){

	Person p;
	p.set_name("Richy");

	std::cout<<"name is "<<p.name()<<"\n";
}
