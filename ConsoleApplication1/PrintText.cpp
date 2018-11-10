#include "PrintText.h"
#include "TextException.h"
using namespace std;

PrintText::PrintText()
{
}

 void PrintText::LoadText(const string &filepath)
{
	 fstream ifile;
	 string text;
	 try
	 {
		 ifile.open(filepath);
		 if(!ifile.good()) throw TextException();
		while (ifile.good())
		{
			getline(ifile, text);
			 cout << text <<  endl; 
		 }
	 }
	 catch(TextException& e)
	 {
		 cout<<e.what();
		 system("pause");
		 exit(1);
	 }

}

PrintText::~PrintText()
{
}
