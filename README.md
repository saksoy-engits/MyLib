# MyLib

MyLib is a simple C++ library that provides reusable functionality for other applications, such as `MyApp`. This library is designed to be easily included in other C++ projects using **CMake**.

## 📌 Features
- Standalone C++ library.
- Uses **CMake** for easy integration.
- Exposes a simple API (`myLibFunction()`).
- Can be used as a **Git submodule** in other projects.

---

## 📂 Project Structure
```
MyLib/
│── CMakeLists.txt     # CMake build configuration
│── include/           # Public header files
│   └── MyLib.h        # Library interface
│── src/               # Source files
│   └── MyLib.cpp      # Library implementation
└── README.md          # This file
```

---

## 🚀 Getting Started

### 🔹 Cloning the Repository
Clone this repository to use it in your project:

```sh
git clone <your-repo-url>
cd MyLib
```

### 🔹 Building the Library
If you want to compile `MyLib` separately, use CMake:

```sh
mkdir build
cd build
cmake ..
make
```

---

## 🔗 Using MyLib in Another Project

### ✅ **Option 1: Add as a Submodule**
You can include `MyLib` as a Git **submodule** in your project. Inside your project directory:

```sh
git submodule add <your-repo-url> lib/MyLib
git commit -m "Added MyLib as a submodule"
```

Then, in your **CMakeLists.txt**, add:

```cmake
add_subdirectory(lib/MyLib)
target_link_libraries(MyApp PRIVATE MyLib)
```

### ✅ **Option 2: Manually Add to Your Project**
Copy the `include/` and `src/` folders into your project and add:

```cmake
add_library(MyLib src/MyLib.cpp)
target_include_directories(MyLib PUBLIC include)
```

---

## 🛠 Library API

### **myLibFunction()**
```cpp
void myLibFunction();
```
#### Example Usage:
```cpp
#include "MyLib.h"

int main() {
    myLibFunction();
    return 0;
}
```

---

## 🔄 Updating the Library
If using this as a submodule in another project, update `MyLib` with:

```sh
cd lib/MyLib
git pull origin main
cd ../..
git submodule update --remote
```

Then commit the update in your main project.

---

## ❌ Uninstalling
To remove `MyLib` if used as a submodule:

```sh
git submodule deinit -f lib/MyLib
git rm -rf lib/MyLib
rm -rf .git/modules/lib/MyLib
git commit -m "Removed MyLib submodule"
```

---

## 📜 License
This project is licensed under the **MIT License**.

---

## 🤝 Contributing
1. Fork the repository.
2. Create a feature branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -m "Added new feature"`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a Pull Request.

---

## 📧 Contact
For any questions or issues, open an issue or reach out at [your-email@example.com].
```

---
