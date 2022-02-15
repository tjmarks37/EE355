#include <iostream>
using namespace std;

class Grade
{
	public:
		string name;
		void set_grade(string name1, int grade1)
		{
			name=name1;
			grade=grade1;
		}
		
		int get_grade()
		{
			return(grade);
		}
		
	private:
		int grade;
};

class GradeBook
{
    //Note: assume the length of array is fixed (8).
	public:
		/*void set_value(string names[8],int grades[8])
		{
			for(int i=0;i<8;i++)
			{
				grade_book[i].set_grade(names[i],grades[i]);
			}
		}*/
		void print_book()
		{
			for(int i=0;i<8;i++)
			{
				cout<<grade_book[i].name<<" "<<grade_book[i].get_grade()<<endl;
			}
		}
		void print_top(int n)
		{
			
			if(n>=8)
			{
				print_book();
			}
			else
			{	
				for(int i=0;i<8;i++)
				{
					int count=0;
					for(int j=0;j<8;j++)
					{
						if(grade_book[i].get_grade()>grade_book[j].get_grade())
						{
							count++;
						}
					}
					if(count>7-n)
					{
						cout<<grade_book[i].name<<" "<<grade_book[i].get_grade()<<endl;
					}
				}
				
			}
			
		}
		
		GradeBook(string names[8], int grades[8]);
		
	private:
		Grade grade_book[8];
	
};

GradeBook::GradeBook(string names[8],int grades[8])
{
	for(int i=0;i<8;i++)
			{
				grade_book[i].set_grade(names[i],grades[i]);
			}
	
}

int main(){
    int grades[8] = {80,87,92,91,29,68,76,88};
    string names[8] = {"a","b","c","d","e","f","g","h"};

    //Write your code here
    //GradeBook students;
    //students.set_value(names,grades);
    GradeBook students(names,grades);
    students.print_top(20);
    

    return 0;
}
