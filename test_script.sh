echo "# Test du $(date)" > rapport_test.md
echo "## --- Good test ---" >> rapport_test.md
for f in test/good/*; do
    res=$(./bin/tpcas < "$f")
    echo "- $f: $?" >> rapport_test.md
done

echo "## -- SynErr test --" >> rapport_test.md
for f in test/syn-err/*; do
    res=$(./bin/tpcas < "$f")
    echo "- $f: $?" >> rapport_test.md
done