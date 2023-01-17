from math import log

def fnEcuacion(x):
    y = pow(x, 2)-2
    return y

x1=1.0
x2=2.0
xm=0.0
Es=0.001
Er=abs(x1-x2)
i=1
it = round((log(x2 - x1) - log(Es)) / log(2))
print("\n", it, "\n") 
print("i    |     x1    |     x2    |      Er   |     xm    |" \
           "   f(x1)   |   f(xm)   | f(x1) * f(xm) |\n")
while (Er >= Es):
        xm = (x1 + x2) / 2
        """
        cout << fixed << left << setprecision(4) << i << "\t" << x1 << "\t"
             << x2 << "\t" << Er << "\t" << xm << "\t" << fnEcuacion(x1) << "\t"
             << fnEcuacion(xm) 
        """  
        print('{:.0f}    | {:.4f}    | {:.4f}    | {:.4f}    | {:.4f}    | {:.4f}   | {:.4f}    | {:.4f}       |'.format (i,x1,x2,Er,xm,fnEcuacion(x1),fnEcuacion(xm),fnEcuacion(x1)*fnEcuacion(xm)))
        if (fnEcuacion(x1) * fnEcuacion(xm) < 0):
            x2 = xm
        else :
            x1 = xm
        
        Er = abs(x2 - x1)
        i = i + 1

print("\n", xm)