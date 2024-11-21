#include "PlayfairCipher.hpp"

#include <string>

PlayfairCipher::PlayfairCipher(const std::string& key)
{
    // setting key is non-trivial for playfair so 
    // call setKey function for the moment
    this->setKey(key);
}

void PlayfairCipher::setKey(const std::string& key)
{
    // store the original key
    key_ = key;

    // append the alphabet to the key

    // make sure the key is uppercase 

    // remove non-alphabet characters 

    // change J -> I

    // remove duplicated letters

    // store the coordinates of each letter
}

std::string PlayfairCipher::applyCipher(const std::string& inputText,
                                        const CipherMode /*cipherMode*/) const
{
    // create the output string, initially a copy of the input text
    std::string outputText{inputText};

    // change J -> I

    // find repeated characters and add an X (or Q for repeated Xs)

    // if the size of the input is odd, add a trailing Z

    // loop over the input digraphs

    // - find the coordinates in the grid for each digraph

    // - apply the rules to these coords to get new coords

    // - find the letters associated with the new coords

    // - make the replacements

    // return the output text
    return outputText;
}