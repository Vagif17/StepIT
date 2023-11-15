using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Wordpad.Services.Classes;

static class SaveInFileService
{

    public static void SaveInFile(string Text)
    {
       using FileStream fs = new FileStream("Data.txt", FileMode.OpenOrCreate); ;
       using StreamWriter sw = new StreamWriter(fs);

        sw.Write(Text);
    }

}
