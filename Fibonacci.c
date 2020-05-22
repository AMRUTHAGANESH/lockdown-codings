 
# Program to display the Fibonacci sequence up to n-th term

n_terms = int(input("Enter the number of Terms: "))

# first two terms
n1, n2 = 0, 1
count = 0


if n_terms <= 0:
   print("Please enter a positive integer")
elif n_terms == 1:
   print("Fibonacci sequence upto",n_terms,":")
   print(n1)
else:
   print("Fibonacci sequence:")
   while count < n_terms:
       print(n1)
       n_th = n1 + n2
       
       n1 = n2
       n2 = n_th
       count += 1
}
