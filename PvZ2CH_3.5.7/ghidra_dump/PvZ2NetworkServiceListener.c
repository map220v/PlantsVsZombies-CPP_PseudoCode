// Class: PvZ2NetworkServiceListener


/* PvZ2NetworkServiceListener::isMyRequest(void const*) */

bool __thiscall
PvZ2NetworkServiceListener::isMyRequest(PvZ2NetworkServiceListener *this,void *param_1)

{
  return param_1 == this;
}


/* PvZ2NetworkServiceListener::logSuccessMessage(std::string const&, Sexy::StructuredData const*) */

void PvZ2NetworkServiceListener::logSuccessMessage(string *param_1,StructuredData *param_2)

{
  param_1[0xc] = (string)0x0;
  return;
}


/* PvZ2NetworkServiceListener::PvZ2NetworkServiceListener() */

void __thiscall
PvZ2NetworkServiceListener::PvZ2NetworkServiceListener(PvZ2NetworkServiceListener *this)

{
  long lVar1;
  undefined4 uVar2;
  
  Sexy::NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  *(undefined ***)this = &PTR_ToString_06835760;
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  uVar2 = FUN_04368214(*(undefined4 *)(lVar1 + 0x18));
  this[0xc] = (PvZ2NetworkServiceListener)0x0;
  *(undefined4 *)(this + 8) = uVar2;
  return;
}


/* PvZ2NetworkServiceListener::SetBlocked() */

void __thiscall PvZ2NetworkServiceListener::SetBlocked(PvZ2NetworkServiceListener *this)

{
  long lVar1;
  undefined4 uVar2;
  
  if (this[0xc] == (PvZ2NetworkServiceListener)0x0) {
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    uVar2 = FUN_04368214(*(undefined4 *)(lVar1 + 0x18));
    *(undefined4 *)(this + 8) = uVar2;
  }
  this[0xc] = (PvZ2NetworkServiceListener)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ2NetworkServiceListener::IsBlocked() */

void __thiscall PvZ2NetworkServiceListener::IsBlocked(PvZ2NetworkServiceListener *this)

{
  long lVar1;
  code *pcVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar3 = (float)FUN_04368214(*(undefined4 *)(lVar1 + 0x18));
  if (k_timeOutAfter + *(float *)(this + 8) <= fVar3) {
    pcVar2 = *(code **)(*(long *)this + 0x48);
    std::string::string(asStack_10,"forced an unblock of the");
    (*pcVar2)(this,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this[0xc]);
}

