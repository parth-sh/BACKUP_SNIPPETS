# 🚀 **OpenJDK@17**

To install OpenJDK 17 using Homebrew, you can use the following command:

```bash
brew update && brew upgrade && brew cleanup
brew install openjdk@21
```

```shell
==> Summary
🍺  /opt/homebrew/Cellar/openjdk@21/21.0.4: 600 files, 330.5MB
==> Running `brew cleanup openjdk@21`...
Disable this behaviour by setting HOMEBREW_NO_INSTALL_CLEANUP.
Hide these hints with HOMEBREW_NO_ENV_HINTS (see `man brew`).
==> Caveats
==> openjdk@21
For the system Java wrappers to find this JDK, symlink it with
  sudo ln -sfn /opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk /Library/Java/JavaVirtualMachines/openjdk-21.jdk

openjdk@21 is keg-only, which means it was not symlinked into /opt/homebrew,
because this is an alternate version of another formula.

If you need to have openjdk@21 first in your PATH, run:
  echo 'export PATH="/opt/homebrew/opt/openjdk@21/bin:$PATH"' >> ~/.zshrc

For compilers to find openjdk@21 you may need to set:
  export CPPFLAGS="-I/opt/homebrew/opt/openjdk@21/include"

```
