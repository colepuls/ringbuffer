#include <ring_buffer.h>

void rb_init() {
    RingBuffer rb;
    rb.head = 0;
    rb.tail = 0;
    rb.full = false;
}

bool rb_is_empty() {
    if (!rb.full && rb.head == rb.tail) {
        return true;
    }
    else {
        return false;
    }
}

bool rb_is_full() {
    if (rb.full == true) {
        return true;
    }
    else {
        return false;
    }
}

static void rb_advance_index(int index) {
    if (index == RB_SIZE - 1) {
        rb.head = 0;
    }
    else {
        rb.head = index + 1;
    }
}

bool rb_push() {
    bool continue = rb_is_full()
    if (continue == true) { return false; }

}