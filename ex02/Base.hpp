class Base {
public: 
	virtual ~Base();
	static Base* generate(void);
	static void identify(Base*);
	static void identify(Base&);
protected:
	Base();
private:
	Base(const Base&);
	Base& operator=(const Base&);
};

class A : public Base { };
class B : public Base { };
class C : public Base { };
