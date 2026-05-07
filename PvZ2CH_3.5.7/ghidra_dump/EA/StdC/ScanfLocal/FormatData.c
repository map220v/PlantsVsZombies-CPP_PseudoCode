// Class: EA::StdC::ScanfLocal::FormatData


/* EA::StdC::ScanfLocal::FormatData::FormatData() */

void __thiscall EA::StdC::ScanfLocal::FormatData::FormatData(FormatData *this)

{
  *(undefined4 *)this = 0x7fffffff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (FormatData)0x0;
  this[0xd] = (FormatData)0x0;
  CharBitmap::CharBitmap((CharBitmap *)(this + 0x10));
  *(undefined4 *)(this + 0x30) = 0x2e;
  return;
}

