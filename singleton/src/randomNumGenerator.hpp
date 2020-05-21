#ifndef SINGLETONRANDOMNUMGENERATOR_HPP
#define SINGLETONRANDOMNUMGENERATOR_HPP

/*  [Must do]
 *  1. make ctor private                (user can not instantiate singleton class)
 *  2. delete copy ctor                 (non-copyable)
 *  3. delete copy assignment operator  (non-copyable)
 * 
 *  [Cleaner design]
 *  1. Make static instantiate in the get fucntion 
 *  2. Clean interface to access the real meat function
 */

class SingletonRandomNumGenerator
{
public:

    // delete copy ctor
    SingletonRandomNumGenerator(const SingletonRandomNumGenerator&) = delete;
    
    // delete copy assignement operator
    SingletonRandomNumGenerator& operator = (const SingletonRandomNumGenerator&) = delete;

    // user can only access singleton class with get function
    static SingletonRandomNumGenerator& get()
    {
        static SingletonRandomNumGenerator instance;  // this is cleaner than in private
        return instance;
    }

    // even cleaner interface then get().genFloatKernel()
    static float genFloat()
    {
        return get().genFloatKernel();
    }


private:
    // make ctor private
    SingletonRandomNumGenerator() {}

    // meat fucntion
    float genFloatKernel();  // move the meat function to private -> just for cleaner interface
};

#endif