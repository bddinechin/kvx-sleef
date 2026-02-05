cat results.txt | grep cycles | grep -e d2_ -e f4_ | sort > kvx24_results.txt
cat results.txt | grep cycles | grep -e d4_ -e f8_ | sort > kvx48_results.txt
cat results.txt | grep cycles | grep purecfma | sort > purecfma_results.txt
paste -d ' ' kvx24_results.txt kvx48_results.txt purecfma_results.txt > tmp
sed 's/ \[0\;1\]\]//g' tmp > results.csv
sed 's/, \[0\;1\]//g' results.csv > tmp
cut -d ' ' -f 1,9,22,33 tmp > results.csv
awk -F " " '{ if (match($0, "d2_")) { print $1 " " $2*2 " " $2 " " $3*4 " " $3 " " $4 }
	      else if (match($0, "f4_")) { print $1 " " $2*4 " " $2 " " $3*8 " " $3 " " $4 }}' results.csv > tmp
sed 's/_u10kvx/,1.0/g' tmp > results.csv
sed 's/_u15kvx/,1.5/g' results.csv > tmp
sed 's/_u35kvx/,3.5/g' tmp > results.csv
sed 's/_u3500kvx/,3500/g' results.csv > tmp
sed 's/_u05kvx/,0.5/g' tmp > results.csv
sed 's/_kvx/,/g' results.csv > tmp
sed 's/ /,/g' tmp > results.csv
sort -t ',' -k 3 -r -h results.csv > tmp
echo "Function name,Accuracy(ULP),Cycles per call(128bits),Cycles per element(128bits),Cycles per call(256bits), Cycles per element(256bits), Cycles per element(scalar)" > results.csv
cat tmp >> results.csv
rm tmp
