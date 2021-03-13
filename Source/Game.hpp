
#pragma once

#ifndef _GAME_HPP_
#define _GAME_HPP_

class Game final {
public:
    static Game* Shared();

    bool Initialize();

    void RunLoop();

    void Shutdown();

private:

    static Game* mInstance;
    Game() = default;

    bool mIsRunning;

};

#endif // _GAME_HPP_