#pragma once
#include"Component.h"
#include<list>
class Composite :public Component {
protected:
	std::list<Component*>children_;
public:
	void Add(Component* component)override {
		this->children_.push_back(component);
		component->setParent(this);
	}
	void Remove(Component* component)override {
		children_.remove(component);
		component->setParent(nullptr);
	}
	bool isComposite()const override {
		return true;
	}
	std::string Operation()const override {
		std::string result;
		for (const Component *c : children_) {
			if (c == children_.back()) {
				result += c->Operation();
			}
			else {
				result += c->Operation() + "+";
			}
		}
		return "Branch(" + result + ")";
	}
};