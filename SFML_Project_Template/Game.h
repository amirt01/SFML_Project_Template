#pragma once

class Game
{
private:

	// Data containers
	std::unordered_map<std::string, sf::Texture> m_textures;
	std::unordered_map<std::string, sf::Font> m_fonts;
	std::unordered_map<std::string, sf::SoundBuffer> m_soundBuffers;

	// Initializer
	template <typename T>
	void initialize(const std::map<const std::string, const std::string>& paths, std::unordered_map<std::string, T>& storage) {
		std::for_each(paths.begin(), paths.end(), [&](const auto& pair) {
			if (!storage[pair.first].loadFromFile(pair.second))
				exit(EXIT_FAILURE); // the loadFromFile() function has an ouput
									// when it fails so no need to throw
			});
	}

public:
	// Constructors/Destructors
	Game();
};