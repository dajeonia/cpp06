#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>

struct Data { int content; };

class Serializer {
public:
	static uintptr_t serialize(Data*);
	static Data* deserialize(uintptr_t);
private:
	Serializer();
	Serializer(const Serializer&);
	~Serializer();
	Serializer& operator=(const Serializer&);
};

#endif
