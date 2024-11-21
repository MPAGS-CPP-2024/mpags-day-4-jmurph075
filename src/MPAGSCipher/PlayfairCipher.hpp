#ifndef MPAGSCIPHER_PLAYFAIRCIPHER_HPP
#define MPAGSCIPHER_PLAYFAIRCIPHER_HPP

#include "CipherMode.hpp"

#include <string>

/**
 * \file PlayfairCipher.hpp
 * \brief Contains the declaration of the PlayfairCipher class
 */

/**
 * \class PlayfairCipher
 * \brief Encrypt or decrypt text using the PLayfair cipher with the given key
 */

class PlayfairCipher {
    public:
        /**
         * \brief Create a new PlayfairCipher with the given key
         * 
         * \param key the key to be used in the cipher
         */
        // single constructor as cannot have size_t key for this type of cipher
        // can only construct from a string
        explicit PlayfairCipher(const std::string& key);

        /**
         * \brief Set the key to be used for the encryption/decryption
         * 
         * \param key the key to used in the cipher
         */
        // setKey function (will specify what this does later)
        void setKey(const std::string& key);

        /**
         * \brief Apply the cipher to the provided text
         * 
         * \param inputText the text to be encrypted/decrypted
         * \param cipherMode whether we want to encrypt/decrypt
         * \return the result of applying the cipher to the input text 
         */
        std::string applyCipher(const std::string& inputText,
                                const CipherMode cipherMode) const;
        
    private:
        /// the cipher key
        std::string key_{""};
};

#endif