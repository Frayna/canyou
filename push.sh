echo "**********************"
echo "**     Git Push     **"
echo "**********************\n\n"

echo "/ Put your Commit \\"
echo '\n'
read -p '        ' com
git add *
git commit -m $com
git push
