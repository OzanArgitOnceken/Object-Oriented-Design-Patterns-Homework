#pragma once
class Media {
public:
	// Constructors, destructor,
	virtual ~Media() = default;
	virtual void play() = 0;
	virtual void filter() = 0;
	virtual void exportMedia() = 0;
private:
	// Private members
};