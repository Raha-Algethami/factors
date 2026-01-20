#include <iostream>
#include <iomanip>
#include "classify.h"

using namespace std;

void classifynum(int limit){
	for(int i=1; i<=limit; i++){
		cout<<i;
		
		if(i%3==0 && i%5==0){
		    cout<<" is a factor of of 3&5 = "<<"\n";}
		else if(i%3==0){
		    cout<<" is a factor of 3 "<<"\n";}
		else if(i%5==0){
		    cout<<" is a factor of 5 "<<"\n";}
		else{
		cout<<" is a factor of none "<<"\n";}
	}
}