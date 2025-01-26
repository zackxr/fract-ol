<a name="readme-top"></a>
<div align="center">
  <!-- Logo -->
<a href="https://github.com/user-attachments/assets/59b71abd-0e4e-4999-9719-fd8c1959468c">
    <img src="https://github.com/user-attachments/assets/59b71abd-0e4e-4999-9719-fd8c1959468c" alt="Logo">
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
## 🖼️ Gallery

### Mandelbrot Set
![Mandelbrot Set](https://user-images.githubusercontent.com/.../mandelbrot.png)

### Julia Set
![Julia Set](https://user-images.githubusercontent.com/.../julia.png)

### Burning Ship Fractal
![Burning Ship Fractal](https://user-images.githubusercontent.com/.../burning_ship.png)

---

## 🤝 Contributing

Contributions are welcome! If you'd like to contribute, please follow these steps:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature/AmazingFeature`).
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`).
4. Push to the branch (`git push origin feature/AmazingFeature`).
5. Open a pull request.
