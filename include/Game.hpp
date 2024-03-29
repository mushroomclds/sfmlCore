#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <ctime>
#include <iostream>
#include <memory>

class Game {
 private:
  // sf::VideoMode videoMode; //defines   video mode
  // sf::RenderWindow *window; //window target for 2D drawing, uses  video mode
  bool endGame_;
  sf::Event ev_;  // defines a system event and its parameters

  std::shared_ptr<sf::RenderWindow> data_;  // shared pointer deletes
                                            // itself

 public:
  explicit Game(std::shared_ptr<sf::RenderWindow> data);
  ~Game();

  // Accessors

  // Modifiers

  // Functions

  void Update();
  void Render();
  void InitWindow();

  bool Running() const;
  void PollEvents();
};
