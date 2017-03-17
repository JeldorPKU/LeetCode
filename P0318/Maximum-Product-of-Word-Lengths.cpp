/*
 * =====================================================================================
 *
 *       Filename:  Maximum-Product-of-Word-Lengths.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/17/2017 09:56:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class Word {
public:
    string word;
    int len;
    int letters;
    Word() {}
    Word(string word_) {
        this->word = word_;
        this->len = word_.length();
        this->letters = 0;
        for (int i = 0; i < this->len; ++i) {
            letters |= (1 << (word_[i] - 'a'));
        }
    }
};


class Solution {
public:
    int maxProduct(vector<string>& words) {
        int result = 0;
        vector<string>::iterator it;
        vector<Word> w;
        w.clear();
        for (it = words.begin(); it != words.end(); ++it) {
            w.push_back(Word(*it));
        }
        vector<Word>::iterator it1, it2;
        for (it2 = w.begin(); it2 != w.end(); ++it2) {
            int product = 0;
            for (it1 = it2 + 1; it1 != w.end(); ++it1) {
                if (!(it1->letters & it2->letters)) {
                    product = it1->len * it2->len;
                    result = max(product, result);
                }
            }
        }
        return result;
    }
};

