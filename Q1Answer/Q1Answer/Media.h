#pragma once
#include"MediaVisitor.h"
class Media {
public:
	virtual void play() = 0;
	virtual void accept(MediaVisitor& visitor) = 0;
	virtual ~Media() = default;
};
