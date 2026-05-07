// Class: Batcher<LineEntry>


/* Batcher<LineEntry>::add() */

long __thiscall Batcher<LineEntry>::add(Batcher<LineEntry> *this)

{
  long lVar1;
  
  lVar1 = DataArray<LineEntry>::DataArrayAlloc((DataArray<LineEntry> *)(this + 8));
  if (lVar1 == 0) {
    Sexy::OutputDebugStrF((wchar_t *)"*** Batcher::Add Failed, ran out of slots in the batcher!\n");
  }
  return lVar1;
}


/* Batcher<TextEntry>::add() */

long __thiscall Batcher<TextEntry>::add(Batcher<TextEntry> *this)

{
  long lVar1;
  
  lVar1 = DataArray<TextEntry>::DataArrayAlloc((DataArray<TextEntry> *)(this + 8));
  if (lVar1 == 0) {
    Sexy::OutputDebugStrF((wchar_t *)"*** Batcher::Add Failed, ran out of slots in the batcher!\n");
  }
  return lVar1;
}

