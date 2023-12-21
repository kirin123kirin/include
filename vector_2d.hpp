#include <string>
#include <vector>

template <typename CharT>
std::vector<std::vector<std::basic_string_view<CharT>>>
records(const CharT* txt) {
	const CharT* p = txt, *start = txt;
	std::vector<std::vector<std::basic_string_view<CharT>>> vec;
	for(int i = 0, j = 0; *p; ++p) {
    	if (*p == L'\t') {
    	    if(i == 0) {
	    	    std::vector<std::basic_string_view<CharT>> x = {std::basic_string_view<CharT>(start, ++p - start)};
	    	    vec.emplace_back(x);
    		} else {
    	  	  vec[j++].emplace_back(start, ++p - start);
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
std::vector<std::vector<std::basic_string_view<CharT>>>
columns(const CharT* txt) {
	const CharT* p = txt, *start = txt;
	std::vector<std::vector<std::basic_string_view<CharT>>> vec;
	for(int i = 0; *p; ++p) {
    	if (*p == L'\t') {
    		if(i++ == 0) {
    			std::vector<std::basic_string_view<CharT>> x = {std::basic_string_view<CharT>(start, ++p - start)};
    			vec.emplace_back(x);
    		} else {
    			vec.back().emplace_back(start, ++p - start);
    		}
    		start = p;
    	} else if(*p == L'\n') {
  	  	i = 0;
  	  	start = p + 1;
  	  }
    }
}

