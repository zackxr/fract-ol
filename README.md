<a name="readme-top"></a>
<div align="center">
  <!-- Logo -->
  <a href="https://github.com/zackxr/fract-ol">
    <img img="![image](https://github.com/user-attachments/assets/f905076e-e645-4364-8cec-5c034b6cd75f)
" alt="Logo" width="80" height="80">
  </a>

  <!-- Project Name -->
  <h1>Fract-ol: A Journey into Fractals</h1>

  <!-- Short Description -->
  <p align="center">
    <b>Exploring the Infinite Beauty of Fractals</b><br>
    A 42 School project that dives into the mesmerizing world of fractals using the MiniLibX graphics library.
  </p>

  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-brightgreen?style=for-the-badge" />
    <img src="https://img.shields.io/github/repo-size/zackxr/fract-ol?style=for-the-badge&logo=github" />
    <img src="https://img.shields.io/github/languages/count/zackxr/fract-ol?style=for-the-badge" />
    <img src="https://img.shields.io/github/languages/top/zackxr/fract-ol?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/zackxr/fract-ol?style=for-the-badge" />
  </p>

  <h3>
    <a href="#-about-the-project">📜 About the Project</a>
    <span> · </span>
    <a href="#-fractals-explored">🌌 Fractals Explored</a>
    <span> · </span>
    <a href="#-controls">🎮 Controls</a>
    <span> · </span>
    <a href="#-usage">👨‍💻 Usage</a>
    <span> · </span>
    <a href="#-gallery">🖼️ Gallery</a>
    <span> · </span>
    <a href="#-contributing">🤝 Contributing</a>
    <span> · </span>
    <a href="#-license">📜 License</a>
  </h3>
</div>

---

## 📜 About the Project

Fract-ol is one of the foundational graphical projects in the 42 School curriculum. It introduces students to the MiniLibX graphics library and the fascinating world of fractals. Fractals are intricate geometric shapes that repeat infinitely at varying scales, offering a glimpse into the beauty of mathematical complexity.

This project not only teaches the basics of graphical programming but also challenges students to implement advanced mathematical concepts in C.

> [!NOTE]  
> **42 School Norms:**
> - Functions are limited to 25 lines of code.
> - Variables must be declared and aligned at the top of each function.
> - Only approved functions are allowed—no cheating!

---

## 🌌 Fractals Explored

Fract-ol supports the following fractal sets, each with its unique mathematical formula:

| Fractal         | Formula                                                                                           |
|-----------------|---------------------------------------------------------------------------------------------------|
| Mandelbrot      | \( z_{n+1} = z_n^2 + c, z_0 = 0 \)                                                                |
| Julia           | \( z_{n+1} = z_n^2 + c, z_0 = c \)                                                                |
| Burning Ship    | \( z_{n+1} = \|z_n^2\| + c, z_0 = 0 \)                                                            |
-----------------------------------------------------------------------------------------------------------------------

## 🎮 Controls

Navigate and interact with the fractals using the following controls:

| Key                     | Description                      |
|-------------------------|----------------------------------|
| **ESC , Cross button**  | Close the program                |
| **+ Sign, - Sign**      | Change fractal colors            |
| **Mouse Scroll**        | Zoom in and out                  |
| **Arrow Keys**          | Move the viewpoint               |

---

## 👨‍💻 Usage

### Requirements
- **gcc compiler**
- Standard **C libraries**
- **MiniLibX** (42 School's graphics library)

### Compilation
To compile the project, navigate to the project directory and run:
```shell
$ make
