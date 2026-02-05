cat results.txt | grep cycles | sort > libm_results.txt
cut -d ' ' -f 1 libm_results.txt > tmp1
cut -d '>' -f 2 libm_results.txt > tmp2
cut -d ' ' -f 2 tmp2 > tmp3
paste -d ' ' tmp1 tmp3 > results_libm.csv
sed 's/ /,/g' results_libm.csv > tmp
sort -t ',' -k 3 -r -h tmp > results_libm.csv
echo "Function_name,Cycles_per_element" > tmp
cat results_libm.csv >> tmp
mv tmp results_libm.csv
rm tmp1 tmp2 tmp3 
