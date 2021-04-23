# CIPHER_SIMPLE-NOKIA 

This cipher is just given as an example to build your own ciphers. This challenge is extremely simple. Contains the necesary functions for the API:
 - init(cipher_data_param): 
 - cipher(out_buffer, in_buffer, size, key): does a "null" cipher algorithm over the input buffer and puts the result in the output buffer.
 - decipher(out_buffer, in_buffer, size, key): does a "null" decipher algorithm over the input buffer and puts the result in the output buffer.

The key has to be passed as parameter in each invocation in order to allow the use of the same cipher with different challenges (and therefore different keys).
