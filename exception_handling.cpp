//3 keywords -> catch, throw,try
/* Divide by zero */
int main() {
    int n1, n2;
        try {
            cout << "Enter two nos:"<<endl;
            cin >> n1 >> n2;
                if (n2 == 0){
                    throw n2;
                }else{
                    throw n1/n2;
                } 
            }catch (int ans){
                    cout << ans;
            }
                cout <<endl<< "Done";
}

/* 2nd example */

int main() {
 try {
 try {
 throw 20;
 } catch (int n) {
 cout << "Inner catch " << endl;
 throw; //Re-throwing an exception
 }
 } catch (int n) {
 cout << "Outer catch" << endl;
 }
}
