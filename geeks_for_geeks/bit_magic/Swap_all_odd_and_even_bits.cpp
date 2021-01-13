unsigned int odd = n & 0x55555555;
	    odd=odd<<1;
	unsigned int even = n & 0xAAAAAAAA;
	    even=even>>1;
	return odd | even;