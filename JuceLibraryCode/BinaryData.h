/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#ifndef BINARYDATA_H_92698595_INCLUDED
#define BINARYDATA_H_92698595_INCLUDED

namespace BinaryData
{
    extern const char*   paramKnob_png;
    const int            paramKnob_pngSize = 1292707;

    extern const char*   gainKnob_png;
    const int            gainKnob_pngSize = 1289658;

    extern const char*   meterLight_png;
    const int            meterLight_pngSize = 133448;

    extern const char*   background_png;
    const int            background_pngSize = 95178;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 4;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
