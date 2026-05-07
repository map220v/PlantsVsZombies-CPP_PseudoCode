// Class: ZombieAnimRig_Pumpkin


/* ZombieAnimRig_Pumpkin::StaticGetClass() */

long * ZombieAnimRig_Pumpkin::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Pumpkin",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Pumpkin::GetClass() const */

long * ZombieAnimRig_Pumpkin::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Pumpkin",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Pumpkin::~ZombieAnimRig_Pumpkin() */

void __thiscall ZombieAnimRig_Pumpkin::~ZombieAnimRig_Pumpkin(ZombieAnimRig_Pumpkin *this)

{
  *(undefined ***)this = &PTR_GetClass_0687c5d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Pumpkin_0687c858;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Pumpkin::~ZombieAnimRig_Pumpkin() */

void __thiscall ZombieAnimRig_Pumpkin::~ZombieAnimRig_Pumpkin(ZombieAnimRig_Pumpkin *this)

{
  ~ZombieAnimRig_Pumpkin(this + -0x10);
  return;
}


/* ZombieAnimRig_Pumpkin::~ZombieAnimRig_Pumpkin() */

void __thiscall ZombieAnimRig_Pumpkin::~ZombieAnimRig_Pumpkin(ZombieAnimRig_Pumpkin *this)

{
  ~ZombieAnimRig_Pumpkin(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Pumpkin::~ZombieAnimRig_Pumpkin() */

void __thiscall ZombieAnimRig_Pumpkin::~ZombieAnimRig_Pumpkin(ZombieAnimRig_Pumpkin *this)

{
  ~ZombieAnimRig_Pumpkin(this + -0x10);
  return;
}


/* ZombieAnimRig_Pumpkin::ZombieAnimRig_Pumpkin() */

void __thiscall ZombieAnimRig_Pumpkin::ZombieAnimRig_Pumpkin(ZombieAnimRig_Pumpkin *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0687c5d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Pumpkin_0687c858;
  return;
}


/* ZombieAnimRig_Pumpkin::StaticNew() */

ZombieAnimRig_Pumpkin * ZombieAnimRig_Pumpkin::StaticNew(void)

{
  ZombieAnimRig_Pumpkin *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Pumpkin(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Pumpkin::updateHeadLayer(int, std::string const&) */

void __thiscall
ZombieAnimRig_Pumpkin::updateHeadLayer(ZombieAnimRig_Pumpkin *this,int param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  string *psVar4;
  ulong uVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = DAT_06b1b500 & 1;
  if (((DAT_06b1b500 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b500), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b540,"head01");
    nop();
    std::string::string((string *)&DAT_06b1b548,"head02");
    nop();
    std::string::string((string *)&DAT_06b1b550,"head03");
    nop();
    __cxa_guard_release(&DAT_06b1b500);
    __cxa_atexit(FUN_04625324,uVar5,&DAT_06a88000);
  }
  if (((DAT_06b1b430 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b430), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b6b8,(string *)&DAT_06b1b540,(allocator *)&DAT_06b1b558);
    __cxa_guard_release(&DAT_06b1b430);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b6b8,
                 &DAT_06a88000);
  }
  for (uVar5 = 0; uVar3 = FUN_046254c4(DAT_06b1b6b8,DAT_06b1b6c0), uVar5 < uVar3; uVar5 = uVar5 + 1)
  {
    Sexy::StrFormat("head0%d",(string *)&local_10,uVar5 & 0xffffffff);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(string *)&local_10,(int)uVar5 == param_1);
    std::string::~string((string *)&local_10);
  }
  if (param_1 < 3) {
    uVar5 = DAT_06b1b558 & 1;
    if (((DAT_06b1b558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b558), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1b408,"fx_eye_blue");
      nop();
      std::string::string((string *)&DAT_06b1b410,"fx_eye_green");
      nop();
      std::string::string((string *)&DAT_06b1b418,"fx_eye_yellow");
      nop();
      __cxa_guard_release(&DAT_06b1b558);
      __cxa_atexit(FUN_046252f0,uVar5,&DAT_06a88000);
    }
    if (((DAT_06b1b718 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b718), iVar2 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b1b478,(string *)&DAT_06b1b408,(allocator *)&DAT_06b1b420);
      __cxa_guard_release(&DAT_06b1b718);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b478,
                   &DAT_06a88000);
    }
    uVar5 = DAT_06b1b728 & 1;
    if (((DAT_06b1b728 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b728), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1b680,"fx_eye_blue03");
      nop();
      std::string::string((string *)&DAT_06b1b688,"fx_eye_green03");
      nop();
      std::string::string((string *)&DAT_06b1b690,"fx_eye_yellow03");
      nop();
      __cxa_guard_release(&DAT_06b1b728);
      __cxa_atexit(FUN_046252bc,uVar5,&DAT_06a88000);
    }
    if (((DAT_06b1b620 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b620), iVar2 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b1b6d0,(string *)&DAT_06b1b680,(allocator *)&DAT_06b1b698);
      __cxa_guard_release(&DAT_06b1b620);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b6d0,
                   &DAT_06a88000);
    }
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b1b478);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b478);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_031f5e7c((string *)&local_10,"fx_eye_",param_2);
      bVar1 = (bool)std::operator==(psVar4,(string *)&local_10);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,bVar1);
      std::string::~string((string *)&local_10);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b1b6d0);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b6d0);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  else {
    uVar5 = DAT_06b1b4a8 & 1;
    if (((DAT_06b1b4a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b4a8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1b628,"fx_eye_blue");
      nop();
      std::string::string((string *)&DAT_06b1b630,"fx_eye_green");
      nop();
      std::string::string((string *)&DAT_06b1b638,"fx_eye_yellow");
      nop();
      __cxa_guard_release(&DAT_06b1b4a8);
      __cxa_atexit(FUN_04625288,uVar5,&DAT_06a88000);
    }
    if (((DAT_06b1b5d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b5d8), iVar2 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b1b588,(string *)&DAT_06b1b628,(allocator *)&DAT_06b1b640);
      __cxa_guard_release(&DAT_06b1b5d8);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b588,
                   &DAT_06a88000);
    }
    uVar5 = DAT_06b1b438 & 1;
    if (((DAT_06b1b438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b438), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1b508,"fx_eye_blue03");
      nop();
      std::string::string((string *)&DAT_06b1b510,"fx_eye_green03");
      nop();
      std::string::string((string *)&DAT_06b1b518,"fx_eye_yellow03");
      nop();
      __cxa_guard_release(&DAT_06b1b438);
      __cxa_atexit(FUN_04625254,uVar5,&DAT_06a88000);
    }
    if (((DAT_06b1b670 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b670), iVar2 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b1b6a0,(string *)&DAT_06b1b508,(allocator *)&DAT_06b1b520);
      __cxa_guard_release(&DAT_06b1b670);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b6a0,
                   &DAT_06a88000);
    }
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b1b6a0);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b6a0);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      FUN_031f5e7c((string *)&local_10,"fx_eye_",param_2);
      std::operator+((string *)&local_10,"03");
      std::string::~string((string *)&local_10);
      bVar1 = (bool)std::operator==(psVar4,(string *)&local_18);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,bVar1);
      std::string::~string((string *)&local_18);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b1b588);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b588);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Pumpkin::dropHead(std::string const&) */

void __thiscall ZombieAnimRig_Pumpkin::dropHead(ZombieAnimRig_Pumpkin *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  ulong uVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = DAT_06b1b720 & 1;
  if (((DAT_06b1b720 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b720), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b5a0,"fx_eye_blue");
    nop();
    std::string::string((string *)&DAT_06b1b5a8,"fx_eye_green");
    nop();
    std::string::string((string *)&DAT_06b1b5b0,"fx_eye_yellow");
    nop();
    __cxa_guard_release(&DAT_06b1b720);
    __cxa_atexit(FUN_0462538c,uVar4,&DAT_06a88000);
  }
  if (((DAT_06b1b698 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b698), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b4b0,(string *)&DAT_06b1b5a0,(allocator *)&DAT_06b1b5b8);
    __cxa_guard_release(&DAT_06b1b698);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b4b0,
                 &DAT_06a88000);
  }
  uVar4 = DAT_06b1b5f8 & 1;
  if (((DAT_06b1b5f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b5f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b5e0,"fx_eye_blue03");
    nop();
    std::string::string((string *)&DAT_06b1b5e8,"fx_eye_green03");
    nop();
    std::string::string((string *)&DAT_06b1b5f0,"fx_eye_yellow03");
    nop();
    __cxa_guard_release(&DAT_06b1b5f8);
    __cxa_atexit(FUN_04625358,uVar4,&DAT_06a88000);
  }
  if (((DAT_06b1b400 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b400), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b4c8,(string *)&DAT_06b1b5e0,(allocator *)&DAT_06b1b5f8);
    __cxa_guard_release(&DAT_06b1b400);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b4c8,
                 &DAT_06a88000);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b4b0);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06b1b4b0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_031f5e7c((string *)&local_10,"fx_eye_",param_1);
    bVar1 = (bool)std::operator==(psVar3,(string *)&local_10);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,bVar1);
    std::string::~string((string *)&local_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b4c8);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06b1b4c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

