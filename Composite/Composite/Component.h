#pragma once
#include<string>
class Component {
protected:
	Component *parent_;
public:
	virtual ~Component(){}
	void setParent(Component *parent) {
		this->parent_ = parent;
	}
	Component *getParent() {
		return this->parent_;
	}
	virtual void Add(Component*component) {}
	virtual void Remove(Component*component){}
	virtual bool isComposite()const {
		return false;
	}
	virtual std::string Operation()const = 0;
};