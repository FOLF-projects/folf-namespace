# windows development setup guide for working on folf

Here is a short explanation how we (FOLF's developers) recommend to develop on windows

## Quick introduction

We recommend to use Visual studio community with WSL enabled. Because FOLF is crossplattform, you need to test your changes on both Windows and Linux.

## What you need:
---
Visual Studio Community installed with C++ and WSL tools
WSL windows features enabled
Alpine for WSL from the windows store installed
OPTIONAL: Clang compiler installed

## setup WSL
---
(make sure to install Alpine for WSL from microsoft store and start it on time)
Setting up WSL is really easy, you just need to run these commands in a PowerShell window:

```bash
WSL
su
apk update
apk upgrade
apk add cmake make gdb clang gcc build-base git
apk cache
```

Please make sure to test, if you are running on cmake version 3.16 or higher (you can test it by running `cmake --version` inside WSL), if not run these commands:

```bash
echo "@testing http://dl-cdn.alpinelinux.org/alpine/edge/main" >> /etc/apk/repositories
apk add cmake@testing
```

WSL is now ready to use!

