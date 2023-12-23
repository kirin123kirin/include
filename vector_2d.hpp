/* VECTOR_2D.hpp | MIT License | https://github.com/kirin123kirin/include/raw/main/LICENSE */
#ifndef _VECTOR_2D_HPP_
#define _VECTOR_2D_HPP_

#include <string>
#include <vector>

template <typename CharT>
std::vector<std::vector<std::basic_string_view<CharT>>> records(const CharT* txt, const char sep = '\t') {
    const CharT *p = txt, *start = txt;
    std::vector<std::vector<std::basic_string_view<CharT>>> vec;
    for(int i = 0, j = 0; *p; ++p) {
        if(*p == sep) {
            std::size_t end = ++p - start;
            if(*(start + end) == '\r')
                --end;
            if(i == 0) {
                std::vector<std::basic_string_view<CharT>> x = {std::basic_string_view<CharT>(start, end)};
                vec.emplace_back(x);
            } else {
                vec[j++].emplace_back(start, end);
            }
            start = p;
        }
        if(*p == L'\n') {
            ++i;
            j = 0;
            start = p + 1;
        }
    }
}

template <typename CharT>
std::vector<std::vector<std::basic_string_view<CharT>>> records(const std::basic_string_view<CharT>& txt,
                                                                const char sep = '\t') {
    return records(txt.data(), sep);
}

template <typename CharT>
std::vector<std::vector<std::basic_string_view<CharT>>> records(const std::basic_string<CharT>& txt,
                                                                const char sep = '\t') {
    return records(txt.data(), sep);
}

template <typename CharT>
std::vector<std::vector<std::basic_string_view<CharT>>> columns(const CharT* txt, const char sep = '\t') {
    const CharT *p = txt, *start = txt;
    std::vector<std::vector<std::basic_string_view<CharT>>> vec;
    for(int i = 0; *p; ++p) {
        if(*p == sep) {
            std::size_t end = ++p - start;
            if(*(start + end) == '\r')
                --end;
            if(i++ == 0) {
                std::vector<std::basic_string_view<CharT>> x = {std::basic_string_view<CharT>(start, end)};
                vec.emplace_back(x);
            } else {
                vec.back().emplace_back(start, end);
            }
            start = p;
        } else if(*p == L'\n') {
            i = 0;
            start = p + 1;
        }
    }
}

template <typename CharT>
std::vector<std::vector<std::basic_string_view<CharT>>> columns(const std::basic_string_view<CharT>& txt,
                                                                const char sep = '\t') {
    return columns(txt.data(), sep);
}

template <typename CharT>
std::vector<std::vector<std::basic_string_view<CharT>>> columns(const std::basic_string<CharT>& txt,
                                                                const char sep = '\t') {
    return columns(txt.data(), sep);
}

#endif /* _VECTOR_2D_HPP_ */
