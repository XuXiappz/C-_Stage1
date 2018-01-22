#include <iostream>
#include <string>
using namespace std;

class Graphics
{
public:
	virtual void onDraw() =0;//这个关键字很重要
	/*virtual void onDraw()//这个关键字很重要
	{
		cout << "draw a Graphics" << endl;
	}*/
};

class Circle:public Graphics
{
public:
	void onDraw()
	{
		cout << "draw a Circle" << endl;
	}
};

class React:public Graphics
{
public:
	void onDraw()
	{
		cout << "draw a React" <<endl;
	}
};

int main(int argc, char const *argv[])
{
	Graphics *g1, *g2, *g3,*g4;
	g1 = new Circle();
	g2 = new React();
	// g3 = new Graphics(); //抽象类不能实例化对象

	g1->onDraw();
	g2->onDraw();
	// g3->onDraw();

	// g4 = React();//注意由于g4不是通过new动态创建的所以,不必delete
	// g4.onDraw();//通过对象访问虚函数,是访问其基类的方法

	delete g1;
	delete g2;
	// delete g3;
	return 0;
}

