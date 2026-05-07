// Class: SexyAllocMap


/* SexyAllocMap::SexyAllocMap() */

void __thiscall SexyAllocMap::SexyAllocMap(SexyAllocMap *this)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  Sexy::CritSect::CritSect((CritSect *)(this + 0x30));
  DAT_06be2578 = 1;
  return;
}


/* SexyAllocMap::~SexyAllocMap() */

void __thiscall SexyAllocMap::~SexyAllocMap(SexyAllocMap *this)

{
  if (DAT_06be4930 != '\0') {
    SexyDumpUnfreed();
  }
  DAT_06be2578 = 0;
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x30));
  std::
  map<void*,SEXY_ALLOC_INFO,std::less<void*>,std::allocator<std::pair<void*const,SEXY_ALLOC_INFO>>>
  ::~map((map<void*,SEXY_ALLOC_INFO,std::less<void*>,std::allocator<std::pair<void*const,SEXY_ALLOC_INFO>>>
          *)this);
  return;
}

