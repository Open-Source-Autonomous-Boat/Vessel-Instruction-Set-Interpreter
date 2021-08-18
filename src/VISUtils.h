#include <fstream>
#include <ios>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>
#include <regex>

#include "VISTypes.h"
#pragma once

namespace string_utils {
/*
 * Splits string on deliminator
 * @param[in] a_text: The text to split string on
 * @param[in] a_delim: The deliminator to split string on
 * @return A vector containing each element of the split string
 */
std::vector<std::string> split_string(std::string a_text, char a_delim);
/*
 * Strips string of deliminator
 * @param[in,out] a_text: The text in where the string is stripped off
 * @param[in] a_delim: The deliminator to strip the string off
 * @return The stripped text
 */
void strip_string(std::string* a_text, char a_delim);
/*
 * Finds regex in string, returns true if found
 * @param[in] a_text: The text to find in
 * @param[in] a_regexp: Regex Expression pls
 * @param[in] a_re_flags: Regex bitmask flags (std::regex_constants)
 * @return true or false
 */
bool regex_find(std::string a_text, std::string a_regexp, std::regex_constants::syntax_option_type a_re_flags);
}  // namespace string_utils

namespace token_utils {
/*
 * Makes it easier to insert stuff
 * @param[in,out] a_tokens: The token map
 * @param[in] a_type: The type of the token
 * @param[in] a_value: The value corresponding to type
 */
template <typename T>
void map_insert(visl_cpp::tokens_type* a_tokens, visl_tokens a_type, T a_value);
}  // namespace token_utils
