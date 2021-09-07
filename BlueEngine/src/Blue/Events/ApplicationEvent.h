#pragma once
#include "bluecph.h"
#include "Event.h"
#include "Blue/Core.h"



namespace Blue {

	class BLUE_API WindowResizeEvent: public Event
	{
	public:
		WindowResizeEvent(unsigned int width, unsigned int height)
			:m_Width(width), m_Height(height)
		{
			
		}
		inline unsigned int GetWidth() { return m_Width; }
		inline unsigned int GetHeight() { return m_Height; }
		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "WindowResizeEvent: " << m_Width << ", " << m_Height;
			return ss.str();
		};

		EVENT_CLASS_TYPE(WindowResize);
		EVENT_CLASS_CATEGORY(EventCategoryApplication);
	private:
		unsigned int m_Width, m_Height;
	};

	class BLUE_API WindowCloseEvent : public Event
	{
	public:
		WindowCloseEvent();
		EVENT_CLASS_CATEGORY(EventCategoryApplication);
		EVENT_CLASS_TYPE(WindowClose);
		


	};




}
	