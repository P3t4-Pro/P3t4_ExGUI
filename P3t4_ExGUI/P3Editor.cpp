
#include <imgui.h>
#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui_internal.h"

#include "P3Editor.hpp"
#include "SampleNode.hpp"


void P3Editor::EventHandlerEditor(SDL_Event* _event)
{
	
}

void P3Editor::Show(ImGuiIO *_imguiio) {

	ShowWindow(_imguiio);
}
