// Class: Sexy::AutoDeleteArray<unsigned_char>


/* Sexy::AutoDeleteArray<unsigned char>::~AutoDeleteArray() */

void __thiscall
Sexy::AutoDeleteArray<unsigned_char>::~AutoDeleteArray(AutoDeleteArray<unsigned_char> *this)

{
  *(undefined ***)this = &PTR__AutoDeleteArray_06a30390;
  FUN_051a4da4(this + 8);
  return;
}


/* Sexy::AutoDeleteArray<unsigned char>::~AutoDeleteArray() */

void __thiscall
Sexy::AutoDeleteArray<unsigned_char>::~AutoDeleteArray(AutoDeleteArray<unsigned_char> *this)

{
  ~AutoDeleteArray(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AutoDeleteArray<unsigned char>::AutoDeleteArray(unsigned char*) */

void __thiscall
Sexy::AutoDeleteArray<unsigned_char>::AutoDeleteArray
          (AutoDeleteArray<unsigned_char> *this,uchar *param_1)

{
  *(uchar **)(this + 8) = param_1;
  *(undefined ***)this = &PTR__AutoDeleteArray_06a30390;
  return;
}

