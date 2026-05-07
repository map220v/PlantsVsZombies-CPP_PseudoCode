// Class: DIniItem


/* DIniItem::TEMPNAMEPLACEHOLDERVALUE(DIniItem const&) */

DIniItem * __thiscall DIniItem::operator=(DIniItem *this,DIniItem *param_1)

{
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  return this;
}


/* DIniItem::~DIniItem() */

void __thiscall DIniItem::~DIniItem(DIniItem *this)

{
  *(undefined ***)this = &PTR__DIniItem_06770480;
  std::string::~string((string *)(this + 8));
  return;
}


/* DIniItem::~DIniItem() */

void __thiscall DIniItem::~DIniItem(DIniItem *this)

{
  ~DIniItem(this);
  AK::FreeHook(this);
  return;
}


/* DIniItem::DIniItem(DIniItem const&) */

void __thiscall DIniItem::DIniItem(DIniItem *this,DIniItem *param_1)

{
  *(undefined ***)this = &PTR__DIniItem_06770480;
  FUN_05475d88(this + 8,param_1 + 8);
  return;
}


/* DIniItem::DIniItem(std::string const&) */

void __thiscall DIniItem::DIniItem(DIniItem *this,string *param_1)

{
  *(undefined ***)this = &PTR__DIniItem_06770480;
  FUN_05475d88(this + 8);
  return;
}


/* DIniItem::DIniItem() */

void __thiscall DIniItem::DIniItem(DIniItem *this)

{
  *(undefined ***)this = &PTR__DIniItem_06770480;
  Set8BytesTo0(this + 8);
  return;
}

