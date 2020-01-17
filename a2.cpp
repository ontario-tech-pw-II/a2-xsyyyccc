int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	
	cout << "There are " << argc << " arguments"<<endl;
 
    // Loop through each argument and print its number and value
    for (int count=0; count < argc; ++count)
        cout << count << " " << argv[count] << endl;
 
	// check if there are enough arguments
	
	fin.open("file1.txt");
	// open the first file
 	
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	
	fout.open("file2.txt");
	// open the second file
	
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 