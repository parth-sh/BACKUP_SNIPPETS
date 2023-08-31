git config --global user.name "<Your-Full-Name>"
git config --global user.email "<your-email-address>"

# makes sure that Git output is colored
git config --global color.ui auto

# displays the original state in a conflict
git config --global merge.conflictstyle diff3

git config --list

git config --global core.editor "code --wait"


git config --global --edit

git config --global pull.ff only

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

git init

git clone https://github.com/udacity/course-git-blog-project

git status

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

git log
git log --oneline
git log --stat

git log -p
git log -p fdf5493

git show
git show fdf5493
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

git add <file>
git add .

git rm --cached <file>

git reset

git commit
git commit -m "message"

git diff
git diff <first-branch-name>..<second-branch-name>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

git tag
git tag -a <tag-name>
git tag <tag-name>
git tag <tag-name> a879841
git tag -d <tag-name>

git branch
git branch <new-branch-name>
git branch <new-branch-name> a879841
git branch <new-branch-name> <parent-branch-name>
git branch -d <branch-name>
git checkout <branch-name>
git checkout -b <new-branch-name>
git checkout -b <new-branch-name> <parent-branch-name>

git log --graph
git log --graph --all
git log --oneline --graph --all

git merge <name-of-branch-to-merge-in>

# To reset to last (merge/commit) git reset --hard HEAD^
git reset --hard HEAD^
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Undoing Changes

git commit --amend

git revert <SHA-of-commit-to-revert>

git show HEAD^/HEAD~1

git reset --mixed/soft/hard HEAD^
git reset --mixed/soft/hard HEAD^^
git reset --mixed/soft/hard HEAD^^2

git branch backup

# If you created the backup branch prior to resetting anything, then you can easily
# get back to having the master branch point to the same commit as the backup branch. You'll just need to:
# 1. remove the uncommitted changes from the working directory
# 2. merge backup into master (which will cause a Fast-forward merge and move master up to the same point as backup)
git checkout -- index.html
git merge backup
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


git remote add publish https://github.com/parth-stack/web-Crawler.git
git push -f publish master  # forcefully
git commit --amend --no-edit
git remote remove origin


git clone --single-branch --branch <branchname> <remote-repo>
git clone --branch <branchname> url

git branch -a

git branch | grep -v "master" | xargs git branch -D

git reset -- Gemfile Gemfile.lock config/initializers/doorkeeper.rb

git reset -- src/app/scripts/app/constants.js

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

git commit --allow-empty -m "Trigger rebuild"


[Homepage](./0README.md)