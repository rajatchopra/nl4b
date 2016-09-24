#ifndef __RING_NODE_HXX__
#define __RING_NODE_HXX__

#include "error.hxx"

#define MAX_INT32 2147483647

class RingNode {
    public:
        RingNode();
        ~RingNode();
    public:
        Error* Insert(RingNode*);
        Error* Delete(RingNode*);
    private:
        RingNode*   prev_;
        RingNode*   next_;
        int32_t     from_;
        int32_t     to_;
};

#endif
