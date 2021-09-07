#pragma once
#include "bluecph.h"
#include "Blue/Core.h"
#include "Event.h"

namespace Blue
{
	class BLUE_API KeyEvent : public Event
	{
	public:
		inline int GetKeyCode() const { return m_Keycode; }

		EVENT_CLASS_CATEGORY(EventCategoryKeyboard| EventCateogryInput);
	protected:
		KeyEvent(int keycode) : m_Keycode(keycode) {};
		int m_Keycode;
	};

	class BLUE_API KeyPressedEvent : public KeyEvent
	{
	public:
		KeyPressedEvent(int keycode, int repeatcount) : m_Repeatcount(repeatcount),KeyEvent(keycode) {};
		inline int GetRepeatCount() { return m_Repeatcount; }
		
		std::string	ToString() const override
		{
			std::stringstream ss;
			ss << "KeyPressedEvent: " << m_Keycode << "(" << m_Repeatcount << " repeats) ";
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyPressed);
	private:
		int m_Repeatcount;
		
	};
	class BLUE_API KeyReleasedEvent : public KeyEvent
	{
	public:
		KeyReleasedEvent(int keycode) : KeyEvent(keycode) {};

		std::string	ToString() const override
		{
			std::stringstream ss;
			ss << "KeyReleasedEvent: " << m_Keycode;
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyReleased);
	private:
		
	
	};
}