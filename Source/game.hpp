
#pragma once

#ifndef _GAME_HPP_
#define _GAME_HPP_

class Game final {
public:
    static Game* shared();

    bool initialize();

    bool run_loop();

    void shutdown();

private:

    static Game* m_instance;
    Game() = default;

    bool m_is_running;

};

#endif // _GAME_HPP_