cat results.txt | grep cycles | grep sse2 | sort > sse2_results.txt
cat results.txt | grep cycles | grep purecfma | sort > purecfma_x86_results.txt
paste -d ' ' sse2_results.txt purecfma_x86_results.txt > tmp
cut -d ' ' -f 1,9,20 tmp > results_x86.csv
sed 's/_u10se2/,1.0/g' results_x86.csv > tmp
sed 's/_u15sse2/,1.5/g' tmp > results_x86.csv
sed 's/_u35sse2/,3.5/g' results_x86.csv > tmp
sed 's/_u3500sse2/,3500/g' tmp > results_x86.csv
sed 's/_u05sse2/,0.5/g' results_x86.csv > tmp
sed 's/_sse2/,/g' tmp > results_x86.csv
sed 's/ /,/g' results.csv > tmp
sort -t ',' -k 3 -r -h tmp > results_x86.csv
echo "Function_name,Accuracy(ULP),Cycles_per_element" > tmp
cat results_x86.csv >> tmp
mv tmp results_x86.csv
