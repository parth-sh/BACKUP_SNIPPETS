# Installation
```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```
[Installation](https://brew.sh/)

==> Next steps:
- Run these commands in your terminal to add Homebrew to your PATH:
    echo >> /Users/z/.zprofile
    echo 'eval "$(/opt/homebrew/bin/brew shellenv)"' >> /Users/z/.zprofile
    eval "$(/opt/homebrew/bin/brew shellenv)"
- Run brew help to get started
- Further documentation:
    https://docs.brew.sh

## Cleanup
```
brew update && brew upgrade && brew cleanup
```

## Search
```
brew search <programe_name>
brew list
```

## Uninstall package
```
brew uninstall <package>
brew autoremove
```

