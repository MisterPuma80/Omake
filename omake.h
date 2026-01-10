
#pragma once

#include "core/object/object.h"

class Omake : public Object {
	GDCLASS(Omake, Object);

protected:
	static void _bind_methods();

public:
	static const int64_t _INT64_MIN;
	static const int64_t _INT64_MAX;

	Omake();
	~Omake();

	static int64_t test_func();
};
