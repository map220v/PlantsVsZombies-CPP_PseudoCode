// Class: NewPVPSeedBank


/* NewPVPSeedBank::onGameplayRealStarted() */

void __thiscall NewPVPSeedBank::onGameplayRealStarted(NewPVPSeedBank *this)

{
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::Draw(Sexy::Graphics*) */

void __thiscall NewPVPSeedBank::Draw(NewPVPSeedBank *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewPVPSeedBank::Draw(Sexy::Graphics*) */

void __thiscall NewPVPSeedBank::Draw(NewPVPSeedBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::StaticClassInit() */

void NewPVPSeedBank::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"NewPVPSeedBank");
    (*pcVar2)(plVar1,asStack_10,FUN_03521bc4,0x278,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPSeedBank::StaticGetClass() */

long * NewPVPSeedBank::StaticGetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPSeedBank::GetClass() const */

long * NewPVPSeedBank::GetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPSeedBank::IsMouseOver(int, int) */

bool NewPVPSeedBank::IsMouseOver(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  cVar2 = UIWidget::IsVisible((UIWidget *)(ulong)(uint)param_1);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)(ulong)(uint)param_1,(wchar16 *)(ulong)(uint)param_2,in_x2,in_x3,
                       in_x4);
    bVar1 = iVar3 != 0;
  }
  return bVar1;
}


/* NewPVPSeedBank::OnTouch(Sexy::Touch const&) */

undefined8 __thiscall NewPVPSeedBank::OnTouch(NewPVPSeedBank *this,Touch *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    if ((*(long *)(this + 0x218) == 0) &&
       (uVar1 = *(uint *)(*(long *)(gLawnApp + 0x9f0) + 0x48),
       uVar2 = *(uint *)(*(long *)(gLawnApp + 0x9f0) + 0x4c),
       iVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                         ((wchar16 *)this,(wchar16 *)(ulong)(uVar1 + *(int *)(param_1 + 0x10)),
                          (LineBreakCategory *)(ulong)(uVar2 + *(int *)(param_1 + 0x14)),
                          (LineBreakCategory *)(ulong)uVar2,(LineBreakCategory *)(ulong)uVar1),
       iVar3 != 0)) {
      *(undefined8 *)(this + 0x218) = *(undefined8 *)param_1;
      return 1;
    }
  }
  else if (*(int *)(param_1 + 0x30) == 4) {
    *(undefined8 *)(this + 0x218) = 0;
    return 0;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::EnableSinglePacket(int) */

void __thiscall NewPVPSeedBank::EnableSinglePacket(NewPVPSeedBank *this,int param_1)

{
  char cVar1;
  UIWidget *pUVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (iVar3 = 0; cVar1 = FUN_0351d4d0(this[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar3);
    if (iVar3 == param_1) {
      pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      UIWidget::SetClickable(pUVar2,true);
    }
    else {
      pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      UIWidget::SetClickable(pUVar2,false);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::RecoverPackets() */

void __thiscall NewPVPSeedBank::RecoverPackets(NewPVPSeedBank *this)

{
  char cVar1;
  UIWidget *this_00;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (iVar2 = 0; cVar1 = FUN_0351d4d0(this[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar2);
    this_00 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    UIWidget::SetClickable(this_00,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::setPacketPositions() */

void __thiscall NewPVPSeedBank::setPacketPositions(NewPVPSeedBank *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  SecretGachaMgr *this_00;
  UIWidget *this_01;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  uint local_34;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x199] != (NewPVPSeedBank)0x0) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,0);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    iVar3 = FUN_0351d4b4(*(undefined4 *)(lVar5 + 0x3c));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    this_00 = (SecretGachaMgr *)FUN_0351e4e8(4);
    SecretGachaMgr::GetScreenType(this_00);
    if (this[0x199] != (NewPVPSeedBank)0x0) {
      iVar8 = 0;
      uVar7 = 0;
      local_34 = 0;
      do {
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        cVar2 = FUN_0351d510(*(undefined4 *)(lVar5 + 0x220));
        if (cVar2 == '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          cVar2 = FUN_0351d51c(*(undefined4 *)(lVar5 + 0x220));
          if (cVar2 != '\0') {
            if ((local_34 & 1) == 0) {
              uVar6 = 0x14;
            }
            else {
              uVar6 = 0x78;
            }
            iVar4 = FUN_0351e4e8(uVar6);
            fVar9 = (float)iVar4 * *(float *)(this + 600);
            bVar1 = std::operator==(asStack_20,"Large");
            if (bVar1) {
              iVar4 = FUN_0351e4e8(0x44);
              fVar10 = (float)iVar4 * *(float *)(this + 600);
            }
            else {
              bVar1 = std::operator==(asStack_20,"Full");
              if (bVar1) {
                iVar4 = FUN_0351e4e8(0x30);
                fVar10 = (float)iVar4 * *(float *)(this + 600);
              }
              else {
                iVar4 = FUN_0351e4e8(0x28);
                fVar10 = (float)iVar4 * *(float *)(this + 600);
              }
            }
            iVar4 = (int)(fVar10 + (float)((((int)local_34 >> 1) + 3) * iVar3));
            bVar1 = std::operator==(asStack_20,"Full");
            if ((bVar1) || (bVar1 = std::operator==(asStack_20,"Large"), bVar1)) {
              iVar4 = iVar4 + (int)this_00 * ((int)local_34 >> 1);
            }
            local_34 = local_34 + 1;
            goto LAB_03520ed4;
          }
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar6 = 0x14;
          }
          else {
            uVar6 = 0x78;
          }
          iVar4 = FUN_0351e4e8(uVar6);
          fVar10 = *(float *)(this + 600);
          fVar9 = (float)iVar4 * fVar10;
          iVar4 = FUN_0351e4e8(0xf);
          iVar4 = (int)((float)(((int)uVar7 >> 1) * iVar3) + fVar10 * (float)iVar4);
          bVar1 = std::operator==(asStack_20,"Full");
          if ((bVar1) || (bVar1 = std::operator==(asStack_20,"Large"), bVar1)) {
            iVar4 = iVar4 + (int)this_00 * ((int)uVar7 >> 1);
          }
          uVar7 = uVar7 + 1;
LAB_03520ed4:
          uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)(int)fVar9,(float)iVar4);
          UIWidget::SetPositionOffset(local_10,local_c,uVar6);
        }
        iVar8 = iVar8 + 1;
        this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        UIWidget::SetVisible(this_01,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      } while (iVar8 < (int)(uint)(byte)this[0x199]);
    }
    std::string::~string(asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::ShowZombieBank(bool) */

void __thiscall NewPVPSeedBank::ShowZombieBank(NewPVPSeedBank *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  RtObject *this_00;
  SeedPacket_NewPVP *this_01;
  int iVar3;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  cVar1 = FUN_0351d4d0(this[0x199]);
  if ('\0' < cVar1) {
    do {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (bVar2) {
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar3);
        this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        this_01 = Sexy::RtObject::Cast<SeedPacket_NewPVP>(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        if ((this_01 != (SeedPacket_NewPVP *)0x0) &&
           (cVar1 = FUN_0351d51c(*(undefined4 *)(this_01 + 0x220)), cVar1 != '\0')) {
          UIWidget::SetVisible((UIWidget *)this_01,param_1);
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
      iVar3 = iVar3 + 1;
      cVar1 = FUN_0351d4d0(this[0x199]);
    } while (iVar3 < cVar1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NewPVPSeedBank::NewPVPSeedBank() */

void __thiscall NewPVPSeedBank::NewPVPSeedBank(NewPVPSeedBank *this)

{
  SeedBankNew::SeedBankNew((SeedBankNew *)this);
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined ***)this = &PTR_GetClass_0664e500;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPSeedBank_0664e708;
  *(undefined4 *)(this + 0x1f0) = 9;
  Sexy::Insets::Insets((Insets *)(this + 500));
  Sexy::Insets::Insets((Insets *)(this + 0x204));
  *(undefined8 *)(this + 0x218) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x220));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x238));
  *(undefined4 *)(this + 600) = 0x3f800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x260));
  return;
}


/* NewPVPSeedBank::StaticNew() */

NewPVPSeedBank * NewPVPSeedBank::StaticNew(void)

{
  NewPVPSeedBank *this;
  
  this = ::operator_new(0x278);
  NewPVPSeedBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::onUpdate() */

void __thiscall NewPVPSeedBank::onUpdate(NewPVPSeedBank *this)

{
  vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>> *this_00;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>> *)(this + 0x260);
  local_8 = ___stack_chk_guard;
  SlidingWidget::onUpdate((SlidingWidget *)this);
  cVar1 = std::vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>>::empty(this_00);
  if (cVar1 == '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      cVar1 = SeedPacket_NewPVP::IsReady((SeedPacket_NewPVP *)*puVar3);
      if (cVar1 == '\0') goto LAB_035236c4;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    (**(code **)(*(long *)this + 0x1f0))(this);
    SeedBankNew::SetPacketsOnDisplay((SeedBankNew *)this,false);
    (**(code **)(*(long *)this + 0x1c8))(this);
    std::vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>>::clear(this_00);
  }
LAB_035236c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::registerForEvents() */

void __thiscall NewPVPSeedBank::registerForEvents(NewPVPSeedBank *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTurnChanged);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewPVPSeedBank,void(NewPVPSeedBank::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTurnChanged,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayRealStarted);
  Sexy::Delegate0::Delegate0<NewPVPSeedBank,void(NewPVPSeedBank::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyGameplayStarted,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPSeedBank::~NewPVPSeedBank() */

void __thiscall NewPVPSeedBank::~NewPVPSeedBank(NewPVPSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0664e500;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPSeedBank_0664e708;
  std::vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>>::~vector
            ((vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>> *)(this + 0x260));
  std::vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>>::
  ~vector((vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>> *)
          (this + 0x238));
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::~vector
            ((vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> *)(this + 0x220)
            );
  SeedBankNew::~SeedBankNew((SeedBankNew *)this);
  return;
}


/* non-virtual thunk to NewPVPSeedBank::~NewPVPSeedBank() */

void __thiscall NewPVPSeedBank::~NewPVPSeedBank(NewPVPSeedBank *this)

{
  ~NewPVPSeedBank(this + -0x10);
  return;
}


/* NewPVPSeedBank::~NewPVPSeedBank() */

void __thiscall NewPVPSeedBank::~NewPVPSeedBank(NewPVPSeedBank *this)

{
  ~NewPVPSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPSeedBank::~NewPVPSeedBank() */

void __thiscall NewPVPSeedBank::~NewPVPSeedBank(NewPVPSeedBank *this)

{
  ~NewPVPSeedBank(this + -0x10);
  return;
}


/* NewPVPSeedBank::SortTurns(std::vector<NewPVPZombieLevelInfo,
   std::allocator<NewPVPZombieLevelInfo> >&) */

void __thiscall NewPVPSeedBank::SortTurns(NewPVPSeedBank *this,vector *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  FUN_035271dc(uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::setPlantAndZombiePacketNum(int, int) */

void __thiscall
NewPVPSeedBank::setPlantAndZombiePacketNum(NewPVPSeedBank *this,int param_1,int param_2)

{
  SeedPacket_NewPVP *extraout_x0;
  SeedPacket_NewPVP *extraout_x0_00;
  int iVar1;
  SeedPacket_NewPVP *local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::DestroyChildren((UIWidget *)this);
  *(int *)(this + 0x250) = param_1;
  *(int *)(this + 0x254) = param_2;
  Sexy::RtName::RtName(aRStack_28,L"UINewPVPSeedPacket");
  Sexy::RtName::RtName(aRStack_18,aRStack_28);
  SeedBankNew::SetSeedPacketType(this,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  if (0 < param_1) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      Sexy::RtName::RtName(aRStack_18,aRStack_28);
      UIWidget::CreateWidget(aRStack_18,1);
      Sexy::RtName::~RtName(aRStack_18);
      nop();
      local_38 = extraout_x0;
      FUN_0351d4c0(*(undefined4 *)(this + 600),extraout_x0 + 0x1fc);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
      PVPSeedBank::AddPacket((PVPSeedBank *)this,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      FUN_0351d508(local_38 + 0x220,1);
      std::vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>>::push_back
                ((vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>> *)(this + 0x260),
                 &local_38);
    } while (iVar1 != param_1);
  }
  if (0 < param_2) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      Sexy::RtName::RtName(aRStack_18,aRStack_28);
      UIWidget::CreateWidget(aRStack_18,1);
      Sexy::RtName::~RtName(aRStack_18);
      nop();
      local_38 = extraout_x0_00;
      FUN_0351d4c0(*(undefined4 *)(this + 600),extraout_x0_00 + 0x1fc);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
      PVPSeedBank::AddPacket((PVPSeedBank *)this,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      FUN_0351d508(local_38 + 0x220,2);
      std::vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>>::push_back
                ((vector<SeedPacket_NewPVP*,std::allocator<SeedPacket_NewPVP*>> *)(this + 0x260),
                 &local_38);
    } while (iVar1 != param_2);
  }
  Sexy::RtName::~RtName(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::initialize(unsigned char) */

void NewPVPSeedBank::initialize(uchar param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  UIWidget *this;
  UIWidget *pUVar5;
  undefined8 uVar6;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  SecretGachaMgr *local_8;
  
  this = (UIWidget *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  bVar1 = std::operator==(asStack_18,"Normal");
  if (bVar1) {
    *(undefined4 *)(this + 600) = 0x3f666666;
  }
  else {
    bVar1 = std::operator==(asStack_18,"Large");
    if (bVar1) {
      *(undefined4 *)(this + 600) = 0x3f2e147b;
    }
    else {
      *(undefined4 *)(this + 600) = 0x3f4ccccd;
    }
  }
  FUN_0351d9cc(this + 0x19c);
  FUN_0351d9c0(this + 0x1f0);
  std::string::string((string *)&local_10,"UIScreen");
  pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
  UIWidget::SetParentWidget(this,pUVar5);
  std::string::~string((string *)&local_10);
  nop();
  iVar3 = FUN_0351e4e8(0xe6);
  FUN_0351d4ac(this + 0x38,(int)((float)iVar3 * *(float *)(this + 600)));
  iVar3 = FUN_0351e4e8(0x1c2);
  FUN_0351d4b8(this + 0x3c,(int)((float)iVar3 * *(float *)(this + 600)));
  UIWidget::SetAnchorType(this,1);
  UIWidget::SetParentAnchorType(this,1);
  bVar1 = std::operator==(asStack_18,"Large");
  if (bVar1) {
    iVar3 = FUN_0351e4e8(0xfffffff6);
    uVar6 = 0x73;
  }
  else {
    bVar1 = std::operator==(asStack_18,"Full");
    if (bVar1) {
      cVar2 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
      if (cVar2 == '\0') {
        (**(code **)(*gLawnApp + 0x368))(gLawnApp);
        iVar3 = FUN_0351e4e8(0);
        uVar6 = 0x6e;
      }
      else {
        iVar3 = FUN_0351e4e8(0);
        uVar6 = 0x6e;
      }
    }
    else {
      iVar3 = FUN_0351e4e8(0xf);
      uVar6 = 100;
    }
  }
  iVar4 = FUN_0351e4e8(uVar6);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar3,(float)iVar4);
  UIWidget::SetPositionOffset(local_10,local_c,this);
  setPlantAndZombiePacketNum((NewPVPSeedBank *)this,6,8);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::setZombiePacketInfoList(std::vector<int, std::allocator<int> > const&, int) */

void NewPVPSeedBank::setZombiePacketInfoList(vector *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  NewPVPMgr *pNVar12;
  NewPVPZombiePacketInfo *pNVar13;
  undefined8 uVar14;
  long lVar15;
  uint *puVar16;
  RtObject *this;
  SeedPacket_NewPVP *this_00;
  string *psVar17;
  undefined8 *puVar18;
  vector<int,std::allocator<int>> *this_01;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  code *pcVar22;
  float fVar23;
  string asStack_b0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  int local_48 [2];
  vector avStack_40 [24];
  undefined8 local_28 [4];
  long local_8;
  
  this_01 = (vector<int,std::allocator<int>> *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar6 = NewPVPMgr::GetCurrentTurn();
  cVar4 = std::vector<int,std::allocator<int>>::empty(this_01);
  if (cVar4 == '\0') {
    uVar20 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_90);
    uVar21 = *(undefined8 *)this_01;
    uVar10 = FUN_0351d568(uVar21,*(undefined8 *)(this_01 + 8));
    if (uVar10 != 0) {
      do {
        piVar11 = (int *)FUN_0351d574(uVar21,uVar20);
        if (0 < *piVar11) {
          pNVar12 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          piVar11 = (int *)FUN_0351d574(*(undefined8 *)this_01,uVar20);
          pNVar13 = (NewPVPZombiePacketInfo *)NewPVPMgr::GetZombiePacketInfoById(pNVar12,*piVar11);
          NewPVPZombiePacketInfo::NewPVPZombiePacketInfo((NewPVPZombiePacketInfo *)local_48,pNVar13)
          ;
          std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::vector
                    ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)
                     &local_78,avStack_40);
          SortTurns((NewPVPSeedBank *)param_1,(vector *)&local_78);
          cVar4 = std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::empty
                            ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)
                             &local_78);
          if (cVar4 == '\0') {
            NewPVPZombieLevelInfo::NewPVPZombieLevelInfo((NewPVPZombieLevelInfo *)&local_a0);
            local_60 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)&local_78);
            local_28[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)&local_78);
            while (bVar5 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_60,(__normal_iterator *)local_28),
                  bVar5) {
              piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                         ((exception_ptr *)&local_60);
              if (*piVar11 <= iVar6) {
                local_a0 = *(undefined8 *)piVar11;
                uStack_98 = *(undefined8 *)(piVar11 + 2);
                goto joined_r0x035297b4;
              }
              std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                        ((move_iterator<Sexy::CharDataHashEntry*> *)&local_60);
            }
joined_r0x035297b4:
            if ((int)local_a0 == -1) {
              uVar21 = CONCAT44(uStack_74,local_78);
              iVar9 = FUN_0351d580(uVar21,local_70);
              puVar18 = (undefined8 *)FUN_0351d58c(uVar21,(long)(iVar9 + -1));
              local_a0 = *puVar18;
              uStack_98 = puVar18[1];
            }
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_60);
            std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::push_back
                      ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)
                       &local_60,(NewPVPZombieLevelInfo *)&local_a0);
            NewPVPZombiePacketInfo::NewPVPZombiePacketInfo
                      ((NewPVPZombiePacketInfo *)local_28,local_48[0],(vector *)&local_60);
            std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::push_back
                      ((vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> *)
                       &local_90,(NewPVPZombiePacketInfo *)local_28);
            NewPVPZombiePacketInfo::~NewPVPZombiePacketInfo((NewPVPZombiePacketInfo *)local_28);
            std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::~vector
                      ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)
                       &local_60);
            std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::~vector
                      ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)
                       &local_78);
          }
          else {
            std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::~vector
                      ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)
                       &local_78);
          }
          NewPVPZombiePacketInfo::~NewPVPZombiePacketInfo((NewPVPZombiePacketInfo *)local_48);
          uVar21 = *(undefined8 *)this_01;
          uVar10 = FUN_0351d568(uVar21,*(undefined8 *)(this_01 + 8));
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar10);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_60);
    uVar21 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_90);
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_90);
    local_78 = FUN_0351d594(local_90,local_88);
    local_48[0] = 8;
    piVar11 = eastl::min_alt<int>((int *)&local_78,local_48);
    uVar14 = __gnu_cxx::
             __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
             ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                          *)local_28,(long)*piVar11);
    std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::
    assign<__gnu_cxx::__normal_iterator<NewPVPZombiePacketInfo*,std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>>,void>
              ((vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> *)&local_60,
               uVar21,uVar14);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48);
    uVar20 = 0;
    while( true ) {
      uVar21 = local_60;
      uVar10 = FUN_0351d594(local_60,local_58);
      if (uVar10 <= uVar20) break;
      pNVar13 = (NewPVPZombiePacketInfo *)FUN_0351d5a0(uVar21,uVar20);
      NewPVPZombiePacketInfo::NewPVPZombiePacketInfo((NewPVPZombiePacketInfo *)local_28,pNVar13);
      lVar15 = FUN_0351d5a0(local_60,uVar20);
      puVar16 = (uint *)FUN_0351d58c(*(undefined8 *)(lVar15 + 8),0);
      uVar19 = puVar16[1];
      uVar1 = puVar16[2];
      uVar2 = *puVar16;
      uVar3 = puVar16[3];
      UINewPVPTopZombieQueue::gettItem
                ((UINewPVPTopZombieQueue *)param_1,(int)uVar20 + *(int *)(param_1 + 0x250));
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      this_00 = Sexy::RtObject::Cast<SeedPacket_NewPVP>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      ServerZombieID::ServerZombieID((ServerZombieID *)&local_78,(int)local_28[0]);
      ServerZombieID::ToString();
      psVar17 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar17);
      pNVar12 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      uVar7 = NewPVPMgr::GetZombieRarityById(pNVar12,(int)local_28[0]);
      FUN_0351d4d4(this_00 + 0x240,uVar7);
      pcVar22 = *(code **)(*(long *)this_00 + 0x1a0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)aRStack_a8);
      (*pcVar22)(this_00,(vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)
                         &local_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      pNVar12 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      iVar9 = (int)local_28[0];
      iVar8 = NewPVPMgr::GetCurrentZombiePacketLevel(pNVar12,(int)local_28[0]);
      iVar9 = NewPVPUtils::ApplyOverride_ZombieCost(iVar9,iVar8,uVar1);
      Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      fVar23 = (float)NewPVPMgr::CalcCurrentSunCostMultiplier();
      Effect_AngerFlame::SetFlameCol((Effect_AngerFlame *)this_00,(int)((float)iVar9 * fVar23));
      FUN_0351d4ec(this_00 + 0x214,uVar19);
      FUN_0351d4f8(this_00 + 0x21c,uVar3);
      FUN_0351d528(this_00 + 0x224,uVar2);
      uVar19 = (uint)(iVar6 < (int)uVar2);
      std::string::string((string *)&local_a0,"[NEW_PVP_IN_GAME_PLANT_UNLOCKED_TIPS]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)&local_a0,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar2,uVar19);
      SeedPacket_NewPVP::SetLocked(this_00,iVar6 < (int)uVar2,(wstring *)&local_78);
      FUN_05476c50((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)&local_78)
      ;
      std::string::~string((string *)&local_a0);
      nop();
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)local_48,(int *)local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      std::string::~string(asStack_b0);
      NewPVPZombiePacketInfo::~NewPVPZombiePacketInfo((NewPVPZombiePacketInfo *)local_28);
      uVar20 = uVar20 + 1;
    }
    pNVar12 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    NewPVPMgr::SetCurrentZombiePacketInfos(pNVar12,(vector *)local_48);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_48);
    std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::~vector
              ((vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> *)&local_60);
    std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::~vector
              ((vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> *)&local_90);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSeedBank::setPlantPacketInfoList(std::vector<CurrentSelectedPlantPacketInfo,
   std::allocator<CurrentSelectedPlantPacketInfo> > const&, int) */

void NewPVPSeedBank::setPlantPacketInfoList(vector *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  RtObject *this;
  SeedPacket_NewPVP *this_00;
  string *psVar8;
  PlantType *this_01;
  long lVar9;
  int *piVar10;
  vector *pvVar11;
  int iVar12;
  code *pcVar13;
  undefined8 uVar14;
  ulong uVar15;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  int local_20 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  pvVar11 = (vector *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  std::vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>>::
  operator=((vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>> *
            )(param_1 + 0x238),pvVar11);
  cVar2 = std::vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>>
          ::empty((vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>>
                   *)(param_1 + 0x238));
  if (cVar2 == '\0') {
    Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar3 = NewPVPMgr::GetCurrentTurn();
    uVar15 = 0;
    while( true ) {
      uVar14 = *(undefined8 *)pvVar11;
      uVar6 = FUN_0351d5a8(uVar14,*(undefined8 *)(pvVar11 + 8));
      if (uVar6 <= uVar15) break;
      puVar7 = (undefined8 *)FUN_0351d5bc(uVar14,uVar15);
      local_28 = *puVar7;
      local_20[0] = *(int *)(puVar7 + 1);
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)param_1,(int)uVar15);
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      this_00 = Sexy::RtObject::Cast<SeedPacket_NewPVP>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      iVar5 = (int)local_28;
      if ((int)local_28 < 1) {
        uVar15 = uVar15 + 1;
        FUN_0351d508(this_00 + 0x220,0);
      }
      else {
        ServerPlantID::ServerPlantID((ServerPlantID *)aRStack_18,(int)local_28);
        uVar15 = uVar15 + 1;
        ServerPlantID::ToString();
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
        pcVar13 = *(code **)(*(long *)this_00 + 0x198);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_38);
        (*pcVar13)(this_00,aRStack_18);
        iVar12 = (int)pcVar13;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        iVar4 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        iVar5 = NewPVPMgr::GetPlantCost(iVar4,iVar5);
        Effect_AngerFlame::SetFlameCol((Effect_AngerFlame *)this_00,iVar5);
        this_01 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        lVar9 = PlantType::GetProps(this_01);
        piVar10 = eastl::min_alt<int>(local_20,(int *)(lVar9 + 0x2c));
        SeedPacket::SetPlantAvatarAndLevel((SeedPacket *)this_00,*piVar10,-1);
        uVar1 = local_28._4_4_;
        FUN_0351d528(this_00 + 0x224,local_28._4_4_);
        std::string::string(asStack_30,"[NEW_PVP_IN_GAME_PLANT_UNLOCKED_TIPS]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_30,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar1,iVar12);
        SeedPacket_NewPVP::SetLocked(this_00,iVar3 < (int)uVar1,(wstring *)aRStack_18);
        FUN_05476c50(aRStack_18);
        std::string::~string(asStack_30);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        std::string::~string(asStack_40);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPSeedBank::onNotifyTurnChanged(int) */

void NewPVPSeedBank::onNotifyTurnChanged(int param_1)

{
  int iVar1;
  NewPVPMgr *pNVar2;
  
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = NewPVPMgr::GetSelectedPlantPacketInfos(pNVar2);
  setPlantPacketInfoList((vector *)(ulong)(uint)param_1,iVar1);
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = NewPVPMgr::GetInBattleZombies(pNVar2);
  setZombiePacketInfoList((vector *)(ulong)(uint)param_1,iVar1);
  return;
}


/* NewPVPSeedBank::fillSeedPackets() */

void __thiscall NewPVPSeedBank::fillSeedPackets(NewPVPSeedBank *this)

{
  int iVar1;
  NewPVPMgr *pNVar2;
  
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = NewPVPMgr::GetSelectedPlantPacketInfos(pNVar2);
  setPlantPacketInfoList((vector *)this,iVar1);
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = NewPVPMgr::GetInBattleZombies(pNVar2);
  setZombiePacketInfoList((vector *)this,iVar1);
  return;
}

