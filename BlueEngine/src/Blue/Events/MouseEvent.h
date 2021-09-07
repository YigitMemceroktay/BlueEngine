#pragma once
#include "bluecph.h"
#include "Event.h"
#include "Blue/Core.h"


namespace Blue
{
	class BLUE_API MouseMovedEvent : public Event
	{public:

		MouseMovedEvent(float x, float y) : m_MouseX(x), m_MouseY(y) {};
		std::string ToString()const override
		{
			std::stringstream ss;
			ss << "MouseMovedEvent: " << m_MouseX << ", " << m_MouseY;
			return ss.str();
		};
		inline float GetX() { return m_MouseX; }
		inline float GetY() { return m_MouseY; }
		EVENT_CLASS_TYPE(MouseMoved);
		EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCateogryInput);
	private:
		float m_MouseX, m_MouseY;
	};
	
	class BLUE_API MouseScrolledEvent : public Event
	{
	public:

		MouseScrolledEvent(float x, float y) : m_XOffset(x), m_YOffset(y) {};
		std::string ToString()const override
		{
			std::stringstream ss;
			ss << "MouseScrolledEvent: " << m_XOffset << ", " << m_YOffset;
			return ss.str();
		};
		inline float GetX() { return m_XOffset; }
		inline float GetY() { return m_YOffset; }
		EVENT_CLASS_TYPE(MouseScrolled);
		EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCateogryInput);
	private:
		float m_XOffset, m_YOffset;
	};

	class BLUE_API MouseButtonEvent : public Event
	{
	public:
		inline int GetMouseButton() const { return m_Button; }
	protected:
		int m_Button;

		MouseButtonEvent(int button):m_Button(button){}
		EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCateogryInput);
	};

	class BLUE_API MouseButtonPressedEvent : public MouseButtonEvent
	{
	public:
		MouseButtonPressedEvent(int button) : MouseButtonEvent(button) {}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseButtonPressedEvent: " << m_Button;
		}

		EVENT_CLASS_TYPE(MouseButtonPressed);


	};

	class BLUE_API MouseButtonReleasedEvent : public MouseButtonEvent
	{
	public:
		MouseButtonReleasedEvent(int button) : MouseButtonEvent(button) {}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseButtonReleasedEvent: " << m_Button;
		}

		EVENT_CLASS_TYPE(MouseButtonPressed);
		

	};
}