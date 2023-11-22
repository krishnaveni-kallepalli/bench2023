Inheritance :

/*
class A : B
class A : public B 
both are same 


class A
class B : public A	--> we can access mem funs in class A using class B obj


class A
class B : private A --> cannot access mem funs in class A using class B obj



class A
class B : private A	--> public and protected mems of class A is private to class B 
class C : private B	
	(or)
class C : public B	--> accessing private members results an ERROR



*/
