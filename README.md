# 🚀 C++ Dev Setup (WSL, Docker, VS Code)

## 1. Install WSL (Windows Subsystem for Linux)
Open PowerShell as admin and run:
```powershell
wsl --install
```
Restart if needed. Open Ubuntu from the Start menu and set up your username.

## 2. Install Tools in Ubuntu
```bash
sudo apt update
sudo apt install build-essential git
```

## 3. Install Docker (Windows)
- Download and install Docker Desktop: https://www.docker.com/products/docker-desktop/
- Start Docker Desktop after installation.

## 4. Install VS Code
- Download and install VS Code: https://code.visualstudio.com/

## 5. Install Dev Containers (Remote) Extension
- Open VS Code
- Press `Ctrl+Shift+X` to open Extensions
- Search for: `Dev Containers`
- Install the **Dev Containers** extension by Microsoft

## 6. (Optional) Enable the `code` command in your PATH
- Open VS Code, press `Ctrl+Shift+P`, type `shell command`, and select **Install 'code' command in PATH**.

## 7. Get This Project
```bash
git clone https://github.com/yourusername/cpp_devcontainer.git
cd cpp_devcontainer/workspace/project1
```

## 8. Open in VS Code from Terminal
```bash
code .
```

## 9. Open in Dev Container
- In VS Code, press `Ctrl+Shift+P`
- Type: `Reopen in Container`
- Select: **Dev Containers: Reopen in Container**
- Wait for the container to build and open

## 10. Naviagte to project1 folder
```bash
cd project1
```

## 11. Build and run the code
```bash
make run
```

That's it! Use `code .` and the Dev Containers extension for the best workflow.
