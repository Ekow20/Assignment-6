#include<iostream>
using namespace std;

int BinSearch(int array[], int first, int last, int search){
	if(first<=last){
		int mid = (first+last)/2;
		if(array[mid]==search)
		  return mid;
		else if(search<array[mid])
		  return BinSearch(array, first, mid-1, search);
		else
		  return BinSearch(array,mid+1, last, search);    
	} 
	return -1;
}

int main(){
	 int Array[12] ={1,4,7,8,10,11,13,14,17,18,22,25};
	 int Search;
	 cout<<"Searh any integer number from 1 to  25\n";
	 cin>>Search;
	 int Position =BinSearch(Array, 0, 11, Search);
	 if(Position == -1)
	   cout<<"Searched number was not found";
	 else
	   cout<<Search<<" is at Index "<<Position<<" of the array\n";      
	 
}
 
