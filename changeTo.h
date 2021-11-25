/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luis Figueroa
 */

vector <string> value;

//change to function to change the interpratation from words to numbers or keept it as numbers
int changeTo()
{
    int result;

	//if is number keep it like that
    if (cin>>result) 
		return result; 

	cin.clear();

	string valueS;

	cin>>valueS;

	//if is string make it number
	for (int i=0; i<value.size(); ++i)
		if (value[i]==valueS) result = i;
    
	return result;
}