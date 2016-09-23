
#include "ringnode.hxx"

RingNode::RingNode() {
    prev_ = this;
    next_ = this;
    from_ =0;
    to_ = MAX_INT32;
}

RingNode::~RingNode() {
    if (this->prev_==this) {
        // do nothing, this is the root node
        return;
    }
    this->prev_->next_ = this->next_;
    this->next_->prev_ = this->prev_;
    // pull back the next one
    this->next_->from_ = this->from_;
}

Error*
RingNode::Insert(RingNode* newNode) {
        // insert between from and to
        int32_t newTo = (this->from_+this->to_+1)/2;
        if newTo == this->to_ {
            return new Error("No space for insertion");
        }
        newNode->from_ = newTo;
        newNode->to_ = this->to_;
        this->to_ = newTo;
        newNode->prev_ = this;
        newNode->next_ = this->next;
        this->next_ = newNode;
}
