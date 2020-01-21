/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: GOZDEDOGAN
 *
 * Created on January 18, 2020, 7:05 PM
 */

#include <iostream>
#include <fstream>
#include"WaveFunction.h"
#include "mat.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Matrix a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    
    cout << "A->" << endl;
    a.readAudioWav("A.wav", "wav"); 
    
    for (int index_i = 0; index_i < a.numRows(); index_i++) { 
        for (int index_j = 0; index_j < a.numCols(); index_j++){ 
            cout << a.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "B->" << endl;
    b.readAudioWav("B.wav", "wav"); 
    
    for (int index_i = 0; index_i < b.numRows(); index_i++) { 
        for (int index_j = 0; index_j < b.numCols(); index_j++){ 
            cout << b.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "C->" << endl;
    a.readAudioWav("C.wav", "wav"); 
    
    for (int index_i = 0; index_i < c.numRows(); index_i++) { 
        for (int index_j = 0; index_j < c.numCols(); index_j++){ 
            cout << c.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "D->" << endl;
    a.readAudioWav("D.wav", "wav"); 
    
    for (int index_i = 0; index_i < d.numRows(); index_i++) { 
        for (int index_j = 0; index_j < d.numCols(); index_j++){ 
            cout << d.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "E->" << endl;
    a.readAudioWav("E.wav", "wav"); 
    
    for (int index_i = 0; index_i < e.numRows(); index_i++) { 
        for (int index_j = 0; index_j < e.numCols(); index_j++){ 
            cout << e.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "F->" << endl;
    a.readAudioWav("F.wav", "wav"); 
    
    for (int index_i = 0; index_i < f.numRows(); index_i++) { 
        for (int index_j = 0; index_j < f.numCols(); index_j++){ 
            cout << f.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "G->" << endl;
    a.readAudioWav("G.wav", "wav"); 
    
    for (int index_i = 0; index_i < g.numRows(); index_i++) { 
        for (int index_j = 0; index_j < g.numCols(); index_j++){ 
            cout << g.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "H->" << endl;
    a.readAudioWav("H.wav", "wav"); 
    
    for (int index_i = 0; index_i < h.numRows(); index_i++) { 
        for (int index_j = 0; index_j < h.numCols(); index_j++){ 
            cout << h.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "I->" << endl;
    a.readAudioWav("I.wav", "wav"); 
    
    for (int index_i = 0; index_i < i.numRows(); index_i++) { 
        for (int index_j = 0; index_j < i.numCols(); index_j++){ 
            cout << i.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "J->" << endl;
    a.readAudioWav("J.wav", "wav"); 
    
    for (int index_i = 0; index_i < j.numRows(); index_i++) { 
        for (int index_j = 0; index_j < j.numCols(); index_j++){ 
            cout << j.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "K->" << endl;
    a.readAudioWav("K.wav", "wav"); 
    
    for (int index_i = 0; index_i < k.numRows(); index_i++) { 
        for (int index_j = 0; index_j < k.numCols(); index_j++){ 
            cout << k.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "L->" << endl;
    a.readAudioWav("L.wav", "wav"); 
    
    for (int index_i = 0; index_i < l.numRows(); index_i++) { 
        for (int index_j = 0; index_j < l.numCols(); index_j++){ 
            cout << l.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "M->" << endl;
    a.readAudioWav("M.wav", "wav"); 
    
    for (int index_i = 0; index_i < m.numRows(); index_i++) { 
        for (int index_j = 0; index_j < m.numCols(); index_j++){ 
            cout << m.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "N->" << endl;
    a.readAudioWav("N.wav", "wav"); 
    
    for (int index_i = 0; index_i < n.numRows(); index_i++) { 
        for (int index_j = 0; index_j < n.numCols(); index_j++){ 
            cout << n.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "O->" << endl;
    a.readAudioWav("O.wav", "wav"); 
    
    for (int index_i = 0; index_i < o.numRows(); index_i++) { 
        for (int index_j = 0; index_j < o.numCols(); index_j++){ 
            cout << o.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "P->" << endl;
    a.readAudioWav("P.wav", "wav"); 
    
    for (int index_i = 0; index_i < p.numRows(); index_i++) { 
        for (int index_j = 0; index_j < p.numCols(); index_j++){ 
            cout << p.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "Q->" << endl;
    a.readAudioWav("Q.wav", "wav"); 
    
    for (int index_i = 0; index_i < q.numRows(); index_i++) { 
        for (int index_j = 0; index_j < q.numCols(); index_j++){ 
            cout << q.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "R->" << endl;
    a.readAudioWav("R.wav", "wav"); 
    
    for (int index_i = 0; index_i < r.numRows(); index_i++) { 
        for (int index_j = 0; index_j < r.numCols(); index_j++){ 
            cout << r.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "S->" << endl;
    a.readAudioWav("S.wav", "wav"); 
    
    for (int index_i = 0; index_i < s.numRows(); index_i++) { 
        for (int index_j = 0; index_j < s.numCols(); index_j++){ 
            cout << s.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "T->" << endl;
    a.readAudioWav("T.wav", "wav"); 
    
    for (int index_i = 0; index_i < t.numRows(); index_i++) { 
        for (int index_j = 0; index_j < t.numCols(); index_j++){ 
            cout << t.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "U->" << endl;
    a.readAudioWav("U.wav", "wav"); 
    
    for (int index_i = 0; index_i < u.numRows(); index_i++) { 
        for (int index_j = 0; index_j < u.numCols(); index_j++){ 
            cout << u.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "V->" << endl;
    a.readAudioWav("V.wav", "wav"); 
    
    for (int index_i = 0; index_i < v.numRows(); index_i++) { 
        for (int index_j = 0; index_j < v.numCols(); index_j++){ 
            cout << v.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "W->" << endl;
    a.readAudioWav("W.wav", "wav"); 
    
    for (int index_i = 0; index_i < w.numRows(); index_i++) { 
        for (int index_j = 0; index_j < w.numCols(); index_j++){ 
            cout << w.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "Y->" << endl;
    a.readAudioWav("Y.wav", "wav"); 
    
    for (int index_i = 0; index_i < y.numRows(); index_i++) { 
        for (int index_j = 0; index_j < y.numCols(); index_j++){ 
            cout << y.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "X->" << endl;
    a.readAudioWav("X.wav", "wav"); 
    
    for (int index_i = 0; index_i < x.numRows(); index_i++) { 
        for (int index_j = 0; index_j < x.numCols(); index_j++){ 
            cout << x.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    cout << "Z->" << endl;
    a.readAudioWav("Z.wav", "wav"); 
    
    for (int index_i = 0; index_i < z.numRows(); index_i++) { 
        for (int index_j = 0; index_j < z.numCols(); index_j++){ 
            cout << z.get(index_i, index_j); 
            cout << " ";
        }
        cout << endl; 
    }
    cout << endl << endl;
    
    
    return 0;
}

