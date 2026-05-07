// Class: RiddlesLaternTip


/* RiddlesLaternTip::~RiddlesLaternTip() */

void __thiscall RiddlesLaternTip::~RiddlesLaternTip(RiddlesLaternTip *this)

{
  *(undefined ***)this = &PTR_GetClass_06860650;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RiddlesLaternTip::~RiddlesLaternTip() */

void __thiscall RiddlesLaternTip::~RiddlesLaternTip(RiddlesLaternTip *this)

{
  ~RiddlesLaternTip(this);
  AK::FreeHook(this);
  return;
}


/* RiddlesLaternTip::RiddlesLaternTip() */

void __thiscall RiddlesLaternTip::RiddlesLaternTip(RiddlesLaternTip *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06860650;
  return;
}


/* RiddlesLaternTip::Draw(Sexy::Graphics*) */

void __thiscall RiddlesLaternTip::Draw(RiddlesLaternTip *this,Graphics *param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  Image *pIVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar2 != 0) {
    cVar1 = PlayerInfo::IsTodayRiddleTaskComplete();
    if (cVar1 == '\0') {
      pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12990);
      Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
      return;
    }
  }
  return;
}

