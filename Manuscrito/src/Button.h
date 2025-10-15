#pragma once
#include "Component.h"
#include <functional>

class Button : public Component
{
public:
	using OnClickAction = std::function<void()>;

	Button() = default;
	Button(OnClickAction action) : onClick(std::move(action)) {}
	virtual ~Button() = default;

	// Almacenamos la funci�n que se llamar� al hacer clic.
	OnClickAction onClick;
};

