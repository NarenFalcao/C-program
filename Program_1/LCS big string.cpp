#include <iostream>

#include <cstring>

#include <map>

#include <utility>

#include <algorithm>

#include <string>

using namespace std;

map<pair<string, string="">, int> lcs;

int longest_common_subsequence(string a, string b) {

//cout << a << " " << b << " " << endl ;

if (a == "" || b == "") {

return 0;

}

if (!lcs[pair<string, string=""> (a, b)]) {

if (a[a.length() - 1] == b[b.length() - 1]) {

string p (a, 0, a.length()-1), q(b, 0, b.length()-1);

lcs[pair<string, string=""> (a, b)] = 1 + longest_common_subsequence(p, q);

}

else {

string p(a, 0, a.length()-1), q(b, 0, b.length()-1);

lcs[pair<string, string=""> (a, b)] = max(longest_common_subsequence(p, b), longest_common_subsequence(a, q));

}

}

//cout << lcs[pair<string, string=""> (a, b)] << endl;

return lcs[pair<string, string=""> (a, b)];

}

int main() {

string x = "pxmfjrmvkehafjpxrehkkqcqbjpcmxymsgnfdzzplkdaewzoteyavwwzcnbtsrxyccjxfmbwsfquqelpicmmvymatfvwpemabhlxpjxuywludjhkfwpyowvnkpupalimnnecvtesblatxnewkywvvohdbgfavjxumqhvkznutjpowuvhmnyvzbykuzmchbnlmuiavdfbcuutaqqgiwhjefmcapfisdtohavoputtnhzecalriymlnfabvtbkhtnpenxkbtubuyskwykpablacspjkanwlnxeuuksccptvtqwomusmvuygfdmbkftbdlwmmxeudbdknqudfcrsaefetouygyejfelfqoqvhfabprdbjcihqrzfdbqcafvoowjskqwzironkxxsqedgbycvhnuskhdkkgfpggahvuznqytlldquvbofbxafrxmnbaignazengaxngdobatpmqfzghlamzuoelwvajlvzbuoxwluxqhsmcj";
string y = "ohazmsexovixkuuneqnzdhhsweyjmrevqszglreqzacuzefaszzyzramuctxeusmzmtajezzfnrqmmmcyvrogrhntqwlbfpatgjxlweewaiaqidxrqplxdudscuqhrfjtqvksksnfmfhcodvghtkgzojpzytmdcimjzwaonnwmhmsaacnrblvvzhwbiokgziuvsfersuxiiydcfcvnkpbzljsqrqtgmhywkjxlxsixlxrwsnyypjkoxgtyczbouvojmfoqptnqfkvrynavuywnemedlvbvlafhorcfpqixphfwoybefcsbubegqmhcgyfbetfsyuqbadugfylowmzrifijkzlpawkewixgcfvqxapcyzpegrzrqczfdssgvspnjktlshhjqvvlkcmvwtwclpfwlwwulvfvmnnzldpiotcalpktbklalusufgbkrqgzdbagtqzlzealvq";

//cin >> x >> y;

cout << longest_common_subsequence(x, y) << endl;

return 0;

}
