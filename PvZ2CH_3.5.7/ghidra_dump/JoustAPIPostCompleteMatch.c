// Class: JoustAPIPostCompleteMatch


/* JoustAPIPostCompleteMatch::~JoustAPIPostCompleteMatch() */

void __thiscall
JoustAPIPostCompleteMatch::~JoustAPIPostCompleteMatch(JoustAPIPostCompleteMatch *this)

{
  *(undefined ***)this = &PTR_GetClass_066af620;
  Sexy::Buffer::~Buffer((Buffer *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* JoustAPIPostCompleteMatch::~JoustAPIPostCompleteMatch() */

void __thiscall
JoustAPIPostCompleteMatch::~JoustAPIPostCompleteMatch(JoustAPIPostCompleteMatch *this)

{
  ~JoustAPIPostCompleteMatch(this);
  AK::FreeHook(this);
  return;
}


/* JoustAPIPostCompleteMatch::JoustAPIPostCompleteMatch() */

void __thiscall
JoustAPIPostCompleteMatch::JoustAPIPostCompleteMatch(JoustAPIPostCompleteMatch *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066af620;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x20);
  Sexy::Buffer::Buffer((Buffer *)(this + 0x30));
  return;
}

