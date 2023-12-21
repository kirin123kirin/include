# argparser example
```c++
    setlocale(LC_ALL, "");
    std::locale::global(std::locale(""));

    auto ap = ArgParser(L"This Program Description\n", argc, argv);

    bool flag = true;
    ap.add(L"-F", L"--flag", &flag, L"Flag Option description\n");

    int maxdepth = INT_MAX;
    ap.add(L"-x", L"--maxdepth", &maxdepth, L"Option description\n");

    wchar_t* sep = DEFAULT_SEPARATOR;
    ap.add(L"-s", L"--sep", &sep, L"Option description\n");

    int unit = 1024;
    ap.add(L"-u", L"--unit", &unit, L"Option description\n");

    ap.parse();

```