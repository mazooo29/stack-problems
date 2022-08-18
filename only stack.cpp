#include<iostream>
using namespace std;
const int maxsize = 20;
template<class T>
class stack
{
	T entry[maxsize];
	int topindex;
	public:
	stack()
	{
		topindex=0;
	}
	bool empty()
	{
		return topindex==0;
	}
	bool push(T item)
	{
		if(topindex==maxsize)
		return 0;
		entry[topindex]=item;
		topindex++;
		return 1;
	}
	bool pop()
	{
		if(empty())
		return 0;
		topindex --;
		return 1;		
	}
	
	bool top(T &item)
	{
		if(empty())return 0;
		item=entry[topindex-1];
		return 1;
	}

};



template<class T>
void fill(stack<T>&s,int n)
{
	for(int i=0;i<n;i++)
	s.push(i*5);
}
template<class T>
void print(stack<T>s)
{
	T item;
	while(!s.empty())
	{
		s.top(item);
		cout<<item<<"   ";
		s.pop();
	}
	cout<<endl;
}
//write a function that takes 1 stack based on array and return it
//without odd numbers
template <class T>
bool stacks(stack<T> &s1)
{
	stack <T>temp;
	T item;
	while(!s1.empty())
	{
		s1.top(item);
		if(item%2!=0)
		s1.pop();
		else
		{
			temp.push(item);
			s1.pop();
		}
	}
	while(!temp.empty())
	{
		temp.top(item);
		s1.push(item);
		temp.pop();
	}
}




template <class T>
void doo(stack <T> s){

stack<T>temp;
int x;
while(!s.empty())
{
  s.top(x);
 temp.push(x);
  s.pop();

}

s=temp;

}


//write a function to reverse the items in  a stack , or ouput on the same relative order
template<class T>
void Reverse(stack<T>&s)
{
	stack <T>temp1,temp2;
	T item;
	while(!s.empty())
	{
		s.top(item);
		temp1.push(item);
		s.pop();
	}
	while(!temp1.empty())
	{
		temp1.top(item);
	temp2.push(item);
		temp1.pop();
	}
		while(!temp2.empty())
	{
		temp2.top(item);
		s.push(item);
		temp2.pop();
	}
}










//assume s1&s2 are stacks write a function to fill s1 on the top of s2 and if thats didn't sucess put them again
//without changing 
template<class T>
bool FailureWarning(stack<T>s1,stack<T>s2)
{
	T item;
	int c = maxsize;
	while(!s1.empty())
	{
		s1.top(item);
		if(s2.push(item)==1)
		s1.pop();
		else
		{
		cout<<"opeation failed"<<endl;
		return 0;
		}
	}
	
	
	
	if(s1.empty())
	{
	cout<<"operation success"<<endl;
	return 1;
	}
}

template<class T>
void Fun(stack<T>&s1,stack<T>&s2)
{
	
	T item;
	if(failureWarning(s1,s2)==1)
	{
		while(!s1.empty())
		{
		s1.top(item);
		s2.push(item);
		s1.pop();
		
		}
	}
	return ;
	
}











//write a function that takes swap s1 with s2
template<class T>
void SwapStack(stack<T>&s1,stack<T>&s2)
{
	T item;
	stack<T>temp;
	while(!s1.empty())
	{
		s1.top(item);
		temp.push(item);
		s1.pop();
		
	}
	while(!s2.empty())
	{
		s2.top(item);
		s1.push(item);
		s2.pop();
	}
	while(!temp.empty())
	{
		temp.top(item);
		s2.push(item);
		temp.pop();
		
	}
}


















//write a function to find max in a stack
int FindMax(stack<int>s)
{
	int item;
	s.top(item);
	int max=item;
	while(!s.empty())
	{
		s.top(item);
			if(max<item)
			{
				max=item;
			}
		
		s.pop();
	}
	return max;
}
//write a function to delete max in a stack
void DeleteMax(stack<int>&s)
{
	int item;
	stack<int>temp;
	int max=0;
	while(!s.empty())
	{
		s.top(item);
			if(max<item)
			{
				max=item;
				
			}
			 
		temp.push(item);
		s.pop();
	}
	
	while(!temp.empty())
	{
		temp.top(item);
		if(max==item)
		temp.pop();
		else
		{
		s.push(item);
		temp.pop();
		}
	}
}
//write a function to find maxEven in a stack
int FindMaxEven(stack<int>s)
{
	int item;
	s.top(item);
	int max=item;
	while(!s.empty())
	{
		s.top(item);
		if(item%2==0)
		{
			if(max<item)
			{
				max=item;
			}
		}
		s.pop();
	}
	return max;
}

//write a function to delete maxEven in a stack
void DeleteMaxEven(stack<int>&s)
{
	int item;
	stack<int>temp;
	int max=0;
	while(!s.empty())
	{
		s.top(item);
		if(item%2==0)
		{
			if(max<item)
			{
				max=item;
			
			}
			
		} 
		temp.push(item);
		s.pop();
	}
	
	while(!temp.empty())
	{
		temp.top(item);
		if(max==item)
		temp.pop();
		else
		{
		s.push(item);
		temp.pop();
		}
	}
}




//write a function to find maxodd in a stack
int FindMaxOdd(stack<int>s)
{
	int item;
	s.top(item);
	int max=item;
	while(!s.empty())
	{
		s.top(item);
		if(item%2!=0)
		{
			if(max<item)
			{
				max=item;
			}
		}
		s.pop();
	}
	return max;
}


//write a function to delete maxodd in a stack
void DeleteMaxOdd(stack<int>&s)
{
	int item;
	stack<int>temp;
	int max=0;
	while(!s.empty())
	{
		s.top(item);
		if(item%2!=0)
		{
			if(max<item)
			{
				max=item;
			
			}
			
		} 
		temp.push(item);
		s.pop();
	}
	
	while(!temp.empty())
	{
		temp.top(item);
		if(max==item)
		temp.pop();
		else
		{
		s.push(item);
		temp.pop();
		}
	}
}

//write a function to remove an item x from the stack
template<class T>
void RemoveX(stack<T>&s,T x)
{
	stack<T>temp;
	T item;
	while(!s.empty())
	{
		s.top(item);
		if(item==x)
		s.pop();
		else
		{
		temp.push(item);
		s.pop();
		}
	}
	while(!temp.empty())
	{
		temp.top(item);
		s.push(item);
		temp.pop();
	}
	
}

// put the max on the top of the stack
void PutMaxOnTopstack(stack<int>&s1)
{
	int item;
	stack<int>s2,s3;
	s1.top(item);
	int max=0;
	while(!s1.empty())
	{
		s1.top(item);
		if(max<item)
			{
				max=item;
				cout<<max<<endl;
			}
		s2.push(item);
		s1.pop();
	}
	while(!s2.empty())
	{
		s2.top(item);
		if(max!=item)
		s3.push(item);
		s2.pop();
	}
	while(!s3.empty())
	{
		s3.top(item);
		s1.push(item);
		s3.pop();
	}
	s1.push(max);
	
	
	
}
main()
{
	stack<int>s1;
	cout<<"before"<<endl;
//	fill(s1,10);
///	fill(s2,12);
	//print(s1);
//	print(s2);
	//SwapStack(s1,s2);
	//fun2(s1,s2);
	//DeleteMaxEven(s1);
	//DeleteMaxEven(s2);
//	DeleteMaxOdd(s1);
	//DeleteMaxOdd(s2);
//	print(s1);
	//print(s2);
	//RemoveX(s1,45);
	//print(s1);
	//cout<<FindMaxOdd(s1)<<endl;
	//cout<<FindMaxEven(s1)<<endl;
//	PutMaxOnTopstack(s1);
//	print(s1);
	cout<<endl;
	cout<<"after"<<endl;
//	stacks(s1);
//	print(s1);

/*	s1.push(7);
	s1.pop();
	s1.push(18);
	s1.push(4);
	s1.pop();
	s1.push(7);
	print(s1);*/
	fill(s1,5);
	print(s1);
	doo(s1);
	print(s1);
	
}