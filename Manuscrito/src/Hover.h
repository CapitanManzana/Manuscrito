#pragma once
#include "Component.h"
#include <functional>

class Hover : public Component
{
public:
	using OnHoverAction = std::function<void()>;

	Hover() = default;
	Hover(OnHoverAction action) : onHover(std::move(action)) {}
	virtual ~Hover() = default;

	// Almacenamos la funci�n que se llamar� al hacer clic.
	OnHoverAction onHover;
};

