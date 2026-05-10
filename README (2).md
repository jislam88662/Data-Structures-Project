# 🎵 Spotify Playlist Manager

A C++ data structures project that simulates a music playlist management system using a **Binary Search Tree (BST)**. Songs are organized as nodes in a tree, enabling efficient insertion, deletion, and traversal operations.

---

## 📁 Project Structure

```
spotify/
├── Song.h          # Song class declaration
├── Song.cpp        # Song class implementation
├── Node.h          # BST Node class (holds Song pointers)
├── Playlist.h      # Playlist class declaration
├── Playlist.cpp    # Playlist class implementation
└── spotify.sln     # Visual Studio solution file
```

---

## 🧱 Class Overview

### `Song`
Represents a single music track.

| Field    | Type     | Description         |
|----------|----------|---------------------|
| `Name`   | `string` | Title of the song   |
| `Artist` | `string` | Name of the artist  |
| `id`     | `int`    | Unique song ID      |
| `count`  | `int`    | Play count          |

### `Node`
A BST node that wraps a `Song` pointer.

| Field   | Type    | Description              |
|---------|---------|--------------------------|
| `song`  | `Song*` | Pointer to a Song object |
| `left`  | `Node*` | Left child node          |
| `right` | `Node*` | Right child node         |

### `Playlist`
Manages the collection of songs using a BST internally.

| Method                  | Description                              |
|-------------------------|------------------------------------------|
| `createplaylist()`      | Creates and initializes a new playlist   |
| `addsongs(Song*)`       | Inserts a song into the BST             |
| `Delete(Song*)`         | Removes a specific song from the tree    |
| `delete2()`             | Alternative delete operation             |
| `DispalyEntirePlaylist()` | Displays all songs in the playlist     |
| `DisplayTotalnum()`     | Returns the total number of songs        |
| `preorder()`            | Pre-order BST traversal                  |
| `inorder()`             | In-order BST traversal (sorted output)   |
| `postorder()`           | Post-order BST traversal                 |
| `shufflle()`            | Shuffles and plays songs randomly        |

---

## 🚀 Getting Started

### Prerequisites
- Windows OS
- [Visual Studio](https://visualstudio.microsoft.com/) (any recent version)
- C++11 or later

### Build & Run

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/spotify-playlist-manager.git
   ```

2. Open `spotify.sln` in **Visual Studio**.

3. Build the solution:
   - Go to **Build → Build Solution** (`Ctrl + Shift + B`)

4. Run the project:
   - Press **F5** or click **Local Windows Debugger**

---

## 💡 How It Works

Songs are stored in a **Binary Search Tree** where each node holds a pointer to a `Song` object. This allows:

- **Efficient insertion** of new songs
- **Ordered traversal** via in-order traversal (alphabetical/sorted output)
- **Deletion** of songs while maintaining tree structure
- **Shuffle** functionality for random playback

---

## 🛠️ Technologies Used

- **Language:** C++
- **Data Structure:** Binary Search Tree (BST)
- **IDE:** Microsoft Visual Studio

---

## 📌 Notes

- Make sure to update the hardcoded include path in `Song.cpp` before building:
  ```cpp
  // Change this:
  #include "C:\project data\spotify\Song.h"
  // To this:
  #include "Song.h"
  ```

---

## 👤 Author

- **Your Name** — [GitHub Profile](https://github.com/your-username)
