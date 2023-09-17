#pragma once

#pragma warning(disable : 4099)

#define MCAPI  __declspec(dllimport)
#define MCVAPI __declspec(dllimport)

#include <algorithm>     // STL general algorithms
#include <array>         // STL array container
#include <bitset>        // STL bitset container
#include <cctype>        // Character handling functions
#include <cerrno>        // C Error codes
#include <chrono>        // C++11 Time library
#include <clocale>       // C localization library
#include <cmath>         // Common mathematics functions
#include <complex>       // Complex number type
#include <cstdio>        // C Standard Input/Output library
#include <cstdlib>       // C Standard General Utilities Library
#include <cstring>       // C string handling
#include <ctime>         // C Time library
#include <cwchar>        // Wide character type
#include <cwctype>       // Wide character classification
#include <deque>         // STL double ended queue container
#include <exception>     // Exception handling classes
#include <forward_list>  // STL forward list container
#include <fstream>       // File stream classes
#include <functional>    // STL Function objects
#include <iomanip>       // Input/Output manipulators
#include <ios>           // Base input/output stream classes
#include <iosfwd>        // Input/Output forward declarations
#include <iostream>      // Standard Input/Output stream objects
#include <istream>       // Basic input stream classes
#include <limits>        // Numeric limits
#include <list>          // STL linear list container
#include <map>           // STL map container
#include <memory>        // STL unique_ptr, shared_ptr, weak_ptr
#include <mutex>         // STL mutual exclusion primitives
#include <numbers>       // numbers standard header
#include <optional>      // STL optional type
#include <ostream>       // Basic output stream classes
#include <queue>         // STL queue and priority_queue container
#include <random>        // C++11 Random numbers
#include <set>           // STL set and multiset container
#include <shared_mutex>  // STL shared mutual exclusion primitives
#include <sstream>       // String stream classes
#include <stack>         // STL stack container
#include <stdexcept>     // Standard exception objects
#include <streambuf>     // Stream buffer classes
#include <string>        // String class
#include <string_view>   // STL string_view type
#include <unordered_map> // STL unordered map container
#include <unordered_set> // STL unordered set container
#include <utility>       // STL utility components
#include <variant>       // STL variant type
#include <vector>        // STL dynamic array container

#include "asio.hpp"      // Asio C++ Library
#include "asio/ssl.hpp"  // Asio SSL C++ Library
#include "entt/entt.hpp" // Entity Component System Library
#include "entt/fwd.hpp"  // Entity Component Forward Declarations
#include "gsl/gsl"       // Guideline Support Library

// LevelDB C++ Library
#include "leveldb/c.h"
#include "leveldb/cache.h"
#include "leveldb/comparator.h"
#include "leveldb/db.h"
#include "leveldb/dumpfile.h"
#include "leveldb/env.h"
#include "leveldb/filter_policy.h"
#include "leveldb/iterator.h"
#include "leveldb/options.h"
#include "leveldb/slice.h"
#include "leveldb/status.h"
#include "leveldb/table.h"
#include "leveldb/table_builder.h"
#include "leveldb/write_batch.h"

// RapidJSON C++ Library
#include "rapidjson/document.h"
#include "rapidjson/encodings.h"
#include "rapidjson/error/en.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"
#include "rapidjson/pointer.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/rapidjson.h"
#include "rapidjson/reader.h"
#include "rapidjson/schema.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/writer.h"

#include "mc/math/vector/Vecs.h" // for vector types

#include "liteloader/api/base/Macro.h" // for LLAPI

#include "liteloader/api/memory/MemoryUtils.h" // for dAccess

#include "mc/common/wrapper/optional_ref.h" // replace optional<reference_wrapper<>>

using uchar  = uint8_t;
using ushort = uint16_t;
using uint   = uint32_t;
using ulong  = unsigned long;
using uint64 = uint64_t;

using schar = int8_t;
using int64 = int64_t;

// clang-format off
template <typename T0, typename T1>
class AutomaticID;
class Dimension;
using DimensionType = AutomaticID<Dimension, int>;
// union GameRule::Value;
template <typename T0>
class http_stl_allocator;
using http_string  = std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>;
using http_wstring = std::basic_string<wchar_t, std::char_traits<wchar_t>, class http_stl_allocator<wchar_t>>;
// clang-format on