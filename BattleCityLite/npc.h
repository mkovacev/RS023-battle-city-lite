#ifndef NPC_H
#define NPC_H
#include <tank.h>

class Npc : public Tank
{
public:
    //TODO Ivana: implementiraj sveto trojstvo
    Npc();
    ~Npc();
    Npc(const Npc& other);


    enum Resistant{
        Weak,           //!< 0 times
        Protected,      //!< 1 time
        Medium,         //!< 2 times
        Strong,         //!< 3 times
    } override;

public slots:
    void onCollision();

};

#endif // NPC_H