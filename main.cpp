include <bits/stdc++.h>
using namespace std;

bool tashkhisharf(char a)//in barname bayad horof va amalvand ha tashkhis bede va hamchenin element ha 
{
   return (a >= 'a' && a <= 'z') ||(a >= 'A' && a <= 'Z');}//tamam horof bozorg va kochak

//#################################################
string vorodi(string ebarat)//tabe vorodi
{
    stack<string> st;

    for (int i=0; ebarat[i]!='\0'; i++)//charkhesh dar str
{
    if (tashkhisharf(ebarat[i]))//agar horof bod
{


    string op(1, ebarat[i]);
    st.push(op);
}

    else// agar dar yek ebarat vorodi farz yek postix standard bashad
        //bezare dar stack
        {
        string op1 = st.top();//harf aval
        st.pop();
        string op2 = st.top();//harf dovom
        st.pop();
        st.push("(" + op2 + ebarat[i] + op1 + ")");//jaygozary element dar beyn horof dar parantez
        }
}

//elementi ke dar stack hast infix hast
    return st.top();
}

//###################################################
int main()
{
string v;
cout <<"vared kon string ra :";
cin  >>v;
string ebarat = v;
cout << vorodi(ebarat);
}
