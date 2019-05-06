#include <iostream>
#include <stack>
using namespace std;

class Queue
{
	stack<int> s1, s2;
public:
	void enQueue(int x);
	int  deQueue();
};
void Queue::enQueue(int x)
{
	s1.push(x);
}
int Queue::deQueue()
{
	int element;
	while( !s1.empty() )
	{
		element = s1.top();
		s1.pop();
		s2.push(element);
	}	
	element = s2.top();
	s2.pop();
	
	return element;
	
}
int main()
{
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);

	cout<<q.deQueue()<<"\n";
	cout<<q.deQueue()<<"\n";
	cout<<q.deQueue()<<"\n";

	return 0;
}