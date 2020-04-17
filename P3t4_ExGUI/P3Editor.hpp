#pragma once
#ifndef _P3EDITOR_H_
#define _P3EDITOR_H_

#include <iostream>
#include <SDL.h>


class P3Editor
{
public:
	static void EventHandlerEditor(SDL_Event *_event);
	static void Show(ImGuiIO* _imguiio);

private:
	SDL_Event EventEditor;
};


#endif // !_P3NODEEDITOR_H_

