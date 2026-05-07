// Class: AdProvider


/* AdProvider::setAdsAreAvailable(bool, int) */

void __thiscall AdProvider::setAdsAreAvailable(AdProvider *this,bool param_1,int param_2)

{
  this[8] = (AdProvider)param_1;
  *(int *)(this + 0xc) = param_2;
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* AdProvider::GetNumAdvertisementsAvailable() const */

undefined4 __thiscall AdProvider::GetNumAdvertisementsAvailable(AdProvider *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (this[8] != (AdProvider)0x0) {
    uVar1 = *(undefined4 *)(this + 0xc);
  }
  return uVar1;
}


/* AdProvider::ShowAdvertisements(Sexy::Delegate2<int, int> const&, Sexy::Delegate0 const&) */

void __thiscall
AdProvider::ShowAdvertisements(AdProvider *this,Delegate2 *param_1,Delegate0 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x10),param_1);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x40),(Delegate2 *)param_2);
  if (*(code **)(*(long *)this + 0x20) != AdProviderNullImpl::doShowAdvertisements) {
    (**(code **)(*(long *)this + 0x20))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdProvider::onClose() */

void __thiscall AdProvider::onClose(AdProvider *this)

{
  int iVar1;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04c01ce8(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x58));
  if (iVar1 != 0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x40));
    Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x40),(Delegate2 *)aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdProvider::AdProvider() */

void __thiscall AdProvider::AdProvider(AdProvider *this)

{
  this[8] = (AdProvider)0x0;
  *(undefined **)this = &DAT_069809c0;
  *(undefined4 *)(this + 0xc) = 0;
  Sexy::Delegate2<int,int>::Delegate2((DummyInit *)(this + 0x10));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x40),(DummyInit *)0x0);
  return;
}


/* AdProvider::awardRewards(int, int) */

void AdProvider::awardRewards(int param_1,int param_2)

{
  Sexy::Delegate2<char_const*,char_const*>::operator()
            ((char *)((ulong)(uint)param_1 + 0x10),(char *)(ulong)(uint)param_2);
  return;
}

