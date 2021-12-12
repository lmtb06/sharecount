#ifndef test_h
#define test_h
#include <assert.h> // assert

/**
 * @brief Classe abstraite dont toutes les classes de tests vont hériter
 *
 * @author Didier MANZI
 * @version 0.6
 * @since 0.6
 */
class Test
{
public :
    virtual void tester()=0;
};

#endif // Test.hpp included
