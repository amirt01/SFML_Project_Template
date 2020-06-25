#include "stdafx.h"
#include "Game.h"
#include "Constants.h"

Game::Game()
{
	initialize(TEXTURE_PATHS, m_textures);
	initialize(FONT_PATHS, m_fonts);
	initialize(AUDIO_PATHS, m_soundBuffers);

	// FOR DEBUGING
	std::cout << "Loaded " << m_textures.size() << " textures." << '\n';
	std::cout << "Loaded " << m_fonts.size() << " fonts." << '\n';
	std::cout << "Loaded " << m_soundBuffers.size() << " sounds." << '\n';
}