#pragma once

class FEngineLoop
{
public:
    bool PreInit();
    bool Init();

    void Tick();
    void Exit();

    bool ShouldExit() const;

private:
    bool bShouldExit = false;
};