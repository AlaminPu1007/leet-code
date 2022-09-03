#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countWords(vector<string> &words1, vector<string> &words2)
    {
        int count = 0, len_1 = words1.size(), len_2 = words2.size();
        map<string, int> Map;

        for (auto item : words1)
            Map[item]++;

        for (auto item : words2)
            if (Map[item] < 2)
                Map[item]--;

        for (auto item : words1)
            if (Map[item] == 0)
                count++;

        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<string> words1 = {"bjxzvssdoq", "oom", "lxrrvf", "aoeselhvrnw", "awnornqyztqlza", "bjxqkapuvaw", "wibxruerngdzgjd", "rezrwdzvllpbjpnikhzraz", "pswmnrsepudx", "nlicjldpeia", "glg", "nllxfcjjitmsuugmr", "cl", "pysmpgjakkjnusfopphb", "zxlwcdjpn", "xktsfnchwrdesnf", "qptnoxxgrjmvr", "exlfwjfsbsirbbkyqjtinrrwuhh", "rqbnghajxygilgdjejopyuwyjqrx", "vrjkqsicuqoalqyaxkaaogxbf", "ixnlltqbpygmpjuspom", "izajsxotcbhzdnkujwgdzo", "b", "lighabre", "i", "ljqqbfddipvcooh", "hboedpepeeunx", "bkhzhiefammwqkhvampokd", "ptlozguwmyyp", "loeshsjgazzwvs", "kyrltbdzlymjxtvwiiq", "fk", "mbjpgwsahkgkehlcoqbhunqchxj", "nfyuvlrmiturheb", "cyqwsiysmoirurj", "sciqruywy", "podsrhmsozan", "nlyadkrxhdbup", "gdugldwghzt", "wpjm", "gjobdekmjisjgadkwwemnmco", "dkjdtimdghvlhuetxyaklk", "iwqylhdwqbwaqdouowoodhs", "mn"};
    vector<string> words2 = {"eeormvovhzslwsqgzthlgntgzc", "zfwownznh", "suxrkdbjdjjtbkjucsbyk", "u", "y", "lbjooktoctgwbbptiffytquha", "dcsxrghgpultkatbecjadbespvww", "vwduylshcpaiu", "rtcxwctvquaiuwkgvdx", "a", "szearxmdqcismljmihbtkcirztdnrc", "htgmuxtxdunsvfizb", "hybe", "nsegkgwcvopncmfpaahhhjeuqjosv", "jtarnnpppxtzmopixeijqqahkd", "hazcgrrnpourkyoeanodejiptne", "kurhokvhixihe", "ljwycewmecfqdhtxiokjn", "qgjzzvpyvwetlsvcsw", "aunns", "nwcnfrzzvxafkfjfnczummtubikji", "nipiygnvlfntgpxfedj", "mgnt", "xvjehufvaqouhztnmts", "sjtbrfjwtqxakqktxjaljrbwfoxvz", "dfeujeikfrtrpiafrgxvjlkpxtog", "u", "ggbcxoasodaqaazulrxjleecexey", "inedrgssajhpygfvozigohis", "pevxwgfzxebybfe", "cgy", "fnhvlx", "vxfybaebkoq", "xvhx", "mxbqjtanctljewwjjlbpkgbtsm", "mlwagamcikbcpuexhikmizp", "qeiomipvsoqlsnhylulirrcwtqga", "bwemqcgyusuauwlpbjjru", "iimcbidtndh", "lpjejlkmxtlbyvnscy", "dlspriicnyykdsyvswlgktavwloq", "dib", "qoptbduulgqwquvhdvmwdz", "xrtxghrbfrhpzduxeljnctgg", "schmbsaupayqnpchn", "kah", "itotymryqufqpozrwmvsl", "gurb", "xsyocxcmwvqmnmxthfemmu", "pkfdutm", "hkbwxwjxyuld", "ukdqszfjckdunnhpevw", "kqfwytdvnvjrchiwprcqkfntqticsc", "zjmsfwjddgjiypsmagdrujb", "gn", "ebncbjvhpbjecbrizdpv", "nbfehcktwswih", "sttmqcdmobdgtgkyxydyovahknjbsn", "sryyufrtocf", "eiicpwknxrzqylqpybhfd", "pey", "njimttradeoa", "wcogjdfr", "prva", "tyxdmxgw", "wluzocppg", "kzm", "wbyyperlkflaoxyxftzwxvmemof", "snzpclbulddnmmjmpdurcybo", "mowxgpmzojtmympmt", "uvtnojjahrovzmlukf", "sykhtgejlmbzshhneoyqr", "ib", "haqkkizidifykwijm", "csjtexnr", "yvgr", "vzcxbtlthrynnawxnkxdptp", "yvxrmscsckv"};
    int res = obj.countWords(words1, words2);

    cout << res << endl;
    return 0;
}