echo "**********************"
echo "**     Git Push     **"
echo "**********************\n"

echo "/ Put your Commit \\"
read -p '        ' com
git add *
git commit -m $com
git push
