#include <iostream>

template <typename T>
void _printany_(T s)
{
	if (s)
		std::cout << s << std::flush;
}
template <>
void _printany_(const char *s)
{
	if (s && *s)
		std::cout << s << std::flush;
}
template <>
void _printany_(const wchar_t *s)
{
	if (s && *s)
		std::wcout << s << std::flush;
}
template <>
void _printany_(const wchar_t s)
{
	if (s)
		std::wcout << s << std::flush;
}
// template <> void _printany_(wchar_t* s) { if(s && *s) std::wcout << s << std::flush; }
// template <> void _printany_(wchar_t s) { if(s) std::wcout << s << std::flush; }
template <>
void _printany_(const std::string &s)
{
	if (s.empty())
		std::cout << s << std::flush;
}
template <>
void _printany_(const std::wstring &s)
{
	if (s.empty())
		std::wcout << s << std::flush;
}
template <>
void _printany_(const std::string_view &s)
{
	if (s.empty())
		std::cout << s << std::flush;
}
template <>
void _printany_(const std::wstring_view &s)
{
	if (s.empty())
		std::wcout << s << std::flush;
}

template <typename T>
void printany(T s) { _printany_(s); }

template <typename Char0, typename Char1>
void printany(const Char0 s0, const Char1 s1)
{
	_printany_(s0);
	_printany_(s1);
}

template <typename Char0, typename Char1, typename Char2>
void printany(const Char0 s0, const Char1 s1, const Char2 s2)
{
	printany(s0, s1);
	_printany_(s2);
}

template <typename Char0, typename Char1, typename Char2, typename Char3>
void printany(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3)
{
	printany(s0, s1);
	printany(s2, s3);
}
template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4>
void printany(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4)
{
	printany(s0, s1, s2);
	printany(s3, s4);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5>
void printany(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5)
{
	printany(s0, s1, s2);
	printany(s3, s4, s5);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5, typename Char6>
void printany(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5, const Char6 s6)
{
	printany(s0, s1, s2);
	printany(s3, s4, s5);
	_printany_(s6);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5, typename Char6, typename Char7>
void printany(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5, const Char6 s6, const Char7 s7)
{
	printany(s0, s1, s2);
	printany(s3, s4, s5);
	printany(s6, s7);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5, typename Char6, typename Char7, typename Char8>
void printany(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5, const Char6 s6, const Char7 s7, const Char8 s8)
{
	printany(s0, s1, s2);
	printany(s3, s4, s5);
	printany(s6, s7, s8);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5, typename Char6, typename Char7, typename Char8, typename Char9>
void printany(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5, const Char6 s6, const Char7 s7, const Char8 s8, const Char9 s9)
{
	printany(s0, s1, s2);
	printany(s3, s4, s5);
	printany(s6, s7, s8);
	_printany_(s9);
}

template <typename T>
void _printerr_(T s)
{
	if (s)
		std::cerr << s << std::flush;
}
template <>
void _printerr_(const char *s)
{
	if (s && *s)
		std::cerr << s << std::flush;
}
template <>
void _printerr_(char *s)
{
	if (s && *s)
		std::cerr << s << std::flush;
}
template <>
void _printerr_(const wchar_t *s)
{
	if (s && *s)
		std::wcerr << s << std::flush;
}
template <>
void _printerr_(wchar_t *s)
{
	if (s && *s)
		std::wcerr << s << std::flush;
}
template <>
void _printerr_(wchar_t s)
{
	if (s)
		std::wcerr << s << std::flush;
}
template <>
void _printerr_(const std::string &s)
{
	if (!s.empty())
		std::cerr << s << std::flush;
}
template <>
void _printerr_(const std::wstring &s)
{
	if (!s.empty())
		std::wcerr << s << std::flush;
}

template <>
void _printerr_(const std::string_view &s)
{
	if (!s.empty())
		std::cerr << s << std::flush;
}
template <>
void _printerr_(const std::wstring_view &s)
{
	if (!s.empty())
		std::wcerr << s << std::flush;
}

template <typename T>
void printerr(T s)
{
	std::cout << "" << std::flush;
	_printerr_(s);
}
template <typename Char0, typename Char1>
void printerr(const Char0 s0, const Char1 s1)
{
	_printerr_(s0);
	_printerr_(s1);
}

template <typename Char0, typename Char1, typename Char2>
void printerr(const Char0 s0, const Char1 s1, const Char2 s2)
{
	printerr(s0, s1);
	_printerr_(s2);
}

template <typename Char0, typename Char1, typename Char2, typename Char3>
void printerr(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3)
{
	printerr(s0, s1);
	printerr(s2, s3);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4>
void printerr(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4)
{
	printerr(s0, s1);
	printerr(s2, s3);
	_printerr_(s4);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5>
void printerr(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5)
{
	printerr(s0, s1);
	printerr(s2, s3);
	printerr(s4, s5);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5, typename Char6>
void printerr(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5, const Char6 s6)
{
	printerr(s0, s1, s2);
	printerr(s3, s4, s5);
	_printerr_(s6);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5, typename Char6, typename Char7>
void printerr(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5, const Char6 s6, const Char7 s7)
{
	printerr(s0, s1, s2);
	printerr(s3, s4, s5);
	printerr(s6, s7);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5, typename Char6, typename Char7, typename Char8>
void printerr(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5, const Char6 s6, const Char7 s7, const Char8 s8)
{
	printerr(s0, s1, s2);
	printerr(s3, s4, s5);
	printerr(s6, s7, s8);
}

template <typename Char0, typename Char1, typename Char2, typename Char3, typename Char4, typename Char5, typename Char6, typename Char7, typename Char8, typename Char9>
void printerr(const Char0 s0, const Char1 s1, const Char2 s2, const Char3 s3, const Char4 s4, const Char5 s5, const Char6 s6, const Char7 s7, const Char8 s8, const Char9 s9)
{
	printerr(s0, s1, s2);
	printerr(s3, s4, s5);
	printerr(s6, s7, s8);
	_printerr_(s9);
}

