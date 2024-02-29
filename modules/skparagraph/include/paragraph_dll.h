
#if !defined(SKPARAGRAPH_IMPLEMENTATION)
    #define SKPARAGRAPH_IMPLEMENTATION 0
#endif

#if !defined(SKPARAGRAPH_API)
    #if defined(SKPARAGRAPH_DLL)
        #if defined(_MSC_VER)
            #if SKPARAGRAPH_IMPLEMENTATION
                #define SKPARAGRAPH_API __declspec(dllexport)
            #else
                #define SKPARAGRAPH_API __declspec(dllimport)
            #endif
        #else
            #define SKPARAGRAPH_API __attribute__((visibility("default")))
        #endif
    #else
        #define SKPARAGRAPH_API
    #endif
#endif
