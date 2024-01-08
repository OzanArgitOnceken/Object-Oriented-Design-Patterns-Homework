#pragma once

// Visitor Interface
class MediaVisitor {
public:
	virtual void visit(class Audio& audio) = 0;
	virtual void visit(class Video& video) = 0;
	virtual ~MediaVisitor() = default;
};