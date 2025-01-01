vi index.txt
git add .
git commit -m "create indes file"
git branch feature
git checkout feature
vi feature.txt
git add .
git commit -m " work in progress"
   vi index.txt(extra)
   git status(extra)
   git checkout main(extra)
git stash
git status
git stash list
git checkout main
git checkout feature
git stash pop
git stash list
git add .
git commit -m" create indes file changed in feature"
