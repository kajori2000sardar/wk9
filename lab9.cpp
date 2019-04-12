//include  library
#include<iostream>

using namespace std;

//create class for binary heap
class BH
{
	  public:

	//initialize a pointer to array
	int *arr;
	//max size of the array
	int msize;
	//current size of array
	int csize;
		
	//create constructor
	BH(int msize)
	{
		//initializing the variable
		arr=new int[msize];
		this->msize=msize;
		csize=0;
	}		

	//create function to swap
	void swap(int *a,int *b)
	{
		//swapping the elements
		int temp=*a;
		*a=*b;
		*b=temp;
	}

	//creating function to return parent
	int prt(int i)
	{	
		return (i-1)/2;
	}

	//creating function to return left child
	int lft(int i)
	{
		return (i*2)+1;
	}

	//creating function to return right child
	int rgt(int i)
	{
		return (i*2)+2;
	}

	//create function to get minimum
	int getmin()
	{
		return arr[0];
	}

	//create function to insert value
	void insert(int val)
	{
		//base code for heap overflow
		if(csize==msize)
			cout<<"Overflow-can't enter new key";
		//insertion of new key at end
		csize++;
		int i=csize-1;
		arr[i]=val;
		//check for all hierarchy with loop
		//check if heap property is broken and fix it
		while(i!=0&&arr[prt(i)]);
		{
			swap(&arr[i],&arr[prt(i)]);
			i=prt(i);
		}	
	}

	//create function gfor display
	void display()
	{
		
	}

	//create function to extract minimum
	int extmin()
	{
		//base case for empty heap
		if(csize<=0)
			return intmax;
		//base case for heap with value 1
		if(csize==1)
		{
			csize--;
			return arr[0];
		}
		//copying last element to root

		//callimg function minhpfy on root

		//returning minimum
	}

	//creating function 
	void decky(int i,int newval)
	{
		//reducing value of element indexed at i to new_val to be less than the present value of the element
		arr[i]=newval;
		//loop for correction
		while(i!=0&&arr[prt(i)]>arr[i])
		{
			swap(&arr[i],&arr[prt(i)];
			i=prt(i);
		}
		//comparing with parent and moving up till i==0 or there is no other violation
	}	

	//deletion of element indexed at i
	void deletekeyat(int i)
	{
		//decreasing value to int min at index i using function decky()

		//calling function extmin
	}

	//create function minheapify
	void minhpfy(int i)
	{
		//compare with left and right
		
		//replace with the smallest

		//call function at the replaced child
	}

};

//create main
int main()
{

	BH bh1(12);
	for(int i=10;i>0;i--)
	{
		cout<<"inserting"<<i<<endl;
		bh1.insert(i);
		bh1.display();
	}

	bh1.extractmin();
	bh1.display();
	cout<<endl;
}
