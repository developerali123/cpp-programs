#include<iostream>
using namespace std;
class Product{
private:
	char* name;
	mutable float price;
public:
	Product(char* n,float p=0.0);
	void setName(char*);
	void setPrice(float) const;
	char* getName() const;
	float getPrice() const;
};
Product::Product(char *n,float p):name(n),price(p){}
void Product::setName(char *n)
{name=n;}
void Product::setPrice(float p)const
{price=p;}
char* Product::getName()const
{return name;}
float Product::getPrice()const
{return price;}
int main()
{
const Product p1("intel pc camera III",6000.0);
cout<<p1.getName()<<endl;
cout<<p1.getPrice()<<endl;
//p1.setName("intel pc camera II");//Compiler ERROR
p1.setPrice(5500.0);
cout<<p1.getName()<<endl;
cout<<p1.getPrice()<<endl;
}

