
#ifndef _RING_HXX__
#define _RING_HXX__

#include "ringnode.hxx"

#define MAX_NODES 4096

class Ring struct {
    /* Sorted array of ringnodes */
    RingNode*   nodes_;
    int32_t     numNodes_;
}

#endif
