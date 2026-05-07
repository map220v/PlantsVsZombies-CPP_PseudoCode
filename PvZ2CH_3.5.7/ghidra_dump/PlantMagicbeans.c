// Class: PlantMagicbeans


/* PlantMagicbeans::TakeDamage(DamageInfo const&) */

DamageInfo * PlantMagicbeans::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  DamageInfo::DamageInfo(in_x8,in_x1);
  return in_x8;
}


/* PlantMagicbeans::onApplyCondition(PlantConditions) */

void PlantMagicbeans::onApplyCondition(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    Plant::EndCondition();
    return;
  }
  return;
}


/* PlantMagicbeans::HasShadow() */

void __thiscall PlantMagicbeans::HasShadow(PlantMagicbeans *this)

{
  FUN_04059fe0(*(undefined4 *)(*(long *)(this + 0x10) + 0x1d0));
  return;
}


/* PlantMagicbeans::PlantMagicbeans() */

void __thiscall PlantMagicbeans::PlantMagicbeans(PlantMagicbeans *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantMagicbeans)0x0;
  this[0x30] = (PlantMagicbeans)0x0;
  this[0x3c] = (PlantMagicbeans)0x0;
  *(undefined ***)this = &PTR_GetClass_067c2430;
  *(undefined4 *)(this + 0x44) = 0;
  return;
}


/* PlantMagicbeans::StaticNew() */

PlantMagicbeans * PlantMagicbeans::StaticNew(void)

{
  PlantMagicbeans *this;
  
  this = ::operator_new(0x48);
  PlantMagicbeans(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicbeans::StaticClassInit() */

void PlantMagicbeans::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMagicbeans");
    (*pcVar2)(plVar1,asStack_10,FUN_0405a5dc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagicbeans::StaticGetClass() */

long * PlantMagicbeans::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMagicbeans",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMagicbeans::GetClass() const */

long * PlantMagicbeans::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMagicbeans",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMagicbeans::~PlantMagicbeans() */

void __thiscall PlantMagicbeans::~PlantMagicbeans(PlantMagicbeans *this)

{
  *(undefined ***)this = &PTR_GetClass_067c2430;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMagicbeans::~PlantMagicbeans() */

void __thiscall PlantMagicbeans::~PlantMagicbeans(PlantMagicbeans *this)

{
  ~PlantMagicbeans(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicbeans::WhetherCanBePulled(Plant const*, int) */

void PlantMagicbeans::WhetherCanBePulled(Plant *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  Board *this;
  string asStack_20 [8];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == (Plant *)0x0) || (*(RtObject **)(param_1 + 0xa8) == (RtObject *)0x0)) ||
     (bVar2 = Sexy::RtObject::IsA<PlantMagicbeans>(*(RtObject **)(param_1 + 0xa8)), !bVar2)) {
    iVar8 = *(int *)(param_1 + 0x114);
    this = *(Board **)(gLawnApp + 0x9f0);
    if (iVar8 < *(int *)(this + 0xf8) + -1) {
      iVar1 = *(int *)(param_1 + 0x110);
      iVar3 = Board::GetGridSquareType(this,iVar8,iVar1);
      uVar4 = Board::GetGridSquareType(this,iVar8 + 1,iVar1);
      if (((iVar3 != 6) && (uVar4 != 1)) && ((uVar4 & 0xfffffff7) != 4)) goto LAB_0405b420;
    }
    iVar8 = iVar8 + 1;
    if (iVar8 <= param_2) {
      while( true ) {
        lVar7 = 0;
        local_18[0] = -1;
        local_18[1] = 0;
        local_18[2] = 1;
        while( true ) {
          iVar3 = *(int *)((long)local_18 + lVar7);
          iVar1 = *(int *)(param_1 + 0x110);
          std::string::string(asStack_20,"");
          lVar6 = Board::GetPlantAt(this,iVar8,iVar1 + iVar3,asStack_20);
          std::string::~string(asStack_20);
          nop();
          Sexy::Point::Point((Point *)asStack_20,iVar8,*(int *)(param_1 + 0x110));
          if ((lVar6 != 0) &&
             (bVar2 = Sexy::RtObject::IsA<PlantMagicbeans>(*(RtObject **)(lVar6 + 0xa8)), bVar2))
          goto LAB_0405b420;
          lVar7 = lVar7 + 4;
          if (lVar7 == 0xc) break;
          this = *(Board **)(gLawnApp + 0x9f0);
        }
        iVar8 = iVar8 + 1;
        if (param_2 < iVar8) break;
        this = *(Board **)(gLawnApp + 0x9f0);
      }
    }
    uVar5 = 1;
  }
  else {
LAB_0405b420:
    uVar5 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* PlantMagicbeans::Idle() */

void __thiscall PlantMagicbeans::Idle(PlantMagicbeans *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantMagicbeans::Initialize() */

void __thiscall PlantMagicbeans::Initialize(PlantMagicbeans *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Plant *this_00;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  PlantFramework::Initialize((PlantFramework *)this);
  FUN_0405c2d4(*(undefined8 *)(this + 0x10));
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x34) = uVar4;
  *(undefined4 *)(this + 0x38) = 5;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  lVar3 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  iVar2 = Plant::GetMaxHitpoints(*(Plant **)(this + 0x10));
  this_00 = *(Plant **)(this + 0x10);
  fVar6 = (float)(iVar2 + *(int *)(lVar3 + 0x10) * 200);
  *(float *)(this + 0x2c) = fVar6;
  iVar2 = Plant::GetMaxHitpoints(this_00);
  FUN_04059ff8(fVar6 / (float)iVar2,this_00 + 0x3c4);
  Plant::Heal(*(Plant **)(this + 0x10));
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    lVar3 = *(long *)(this + 0x10);
    fVar6 = 0.0;
    iVar2 = FUN_0405a004(lVar3);
    if (iVar2 < 2) {
      fVar6 = 15.0;
    }
    fVar5 = (float)PVZ_T();
    *(float *)(lVar3 + 0x128) = fVar5 + fVar6;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicbeans::FlyThroughAir(Sexy::SexyVector2, Sexy::SexyVector2) */

void PlantMagicbeans::FlyThroughAir
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  float local_20;
  undefined4 local_18;
  long local_8;
  
  *(undefined1 *)(param_5 + 0x30) = 1;
  *(undefined4 *)(*(long *)(param_5 + 0x10) + 200) = 0xe;
  local_8 = ___stack_chk_guard;
  RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
  local_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  local_24 = PVZ_T();
  local_20 = (float)PVZ_T();
  local_20 = local_20 + 1.0;
  local_18 = 0;
  Plant::addRelocationEvent(*(Plant **)(param_5 + 0x10),(RelocationEvent *)&local_38);
  plVar1 = (long *)FUN_0405c488(*(undefined8 *)(param_5 + 0x10));
  (**(code **)(*plVar1 + 0x270))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagicbeans::SetIsFlying() */

void __thiscall PlantMagicbeans::SetIsFlying(PlantMagicbeans *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 0xe;
  plVar1 = (long *)FUN_0405c488(lVar2);
  (**(code **)(*plVar1 + 0x270))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicbeans::ForceArming() */

void __thiscall PlantMagicbeans::ForceArming(PlantMagicbeans *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  RealObject *this_00;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_58,"Play_Plant_Potato_Nitro_End");
  RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 0xb;
  plVar1 = (long *)FUN_0405c488(lVar2);
  pcVar3 = *(code **)(*plVar1 + 0x268);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagicbeans::registerForEvents() */

void __thiscall PlantMagicbeans::registerForEvents(PlantMagicbeans *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<PlantMagicbeans,void(PlantMagicbeans::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  return;
}


/* PlantMagicbeans::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantMagicbeans::onAnimStoppedCallback(PlantMagicbeans *this,string *param_1)

{
  bool bVar1;
  
  FUN_0405c488(*(undefined8 *)(this + 0x10));
  bVar1 = std::operator==(param_1,"shake");
  if ((bVar1) && (this[0x30] = (PlantMagicbeans)0x0, this[0x28] != (PlantMagicbeans)0x0)) {
    MessageRouter::Post<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantDied,*(Plant **)(this + 0x10));
    (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicbeans::OnRelocationComplete() */

void __thiscall PlantMagicbeans::OnRelocationComplete(PlantMagicbeans *this)

{
  PlantMagicbeans PVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Plant *this_00;
  Zombie *this_01;
  GridItem *pGVar8;
  long *plVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  ZombieTosserSubSystem *pZVar10;
  long lVar11;
  RtObject *this_03;
  code *pcVar12;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_160 [8];
  undefined8 local_158;
  undefined8 local_150;
  Insets aIStack_148 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_138 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_120 [72];
  string asStack_d8 [24];
  char local_c0;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [8];
  char local_58;
  long local_8;
  
  lVar11 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(lVar11 + 200) == 0xe) {
    *(undefined4 *)(lVar11 + 200) = 0xb;
    plVar9 = (long *)FUN_0405c488(lVar11);
    pcVar12 = *(code **)(*plVar9 + 600);
    PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
    (*pcVar12)(plVar9,aRStack_120);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_120);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_160);
  Sexy::Insets::Insets
            (aIStack_148,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_138);
  uVar6 = operator|(2,4);
  uVar4 = operator|(uVar6,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_138,uVar4,aIStack_148);
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  local_158 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_138);
  local_150 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_138);
  do {
    PVar1 = (PlantMagicbeans)
            __gnu_cxx::operator!=((__normal_iterator *)&local_158,(__normal_iterator *)&local_150);
    if (!(bool)PVar1) {
      this[0x30] = PVar1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_138);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_160);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_158);
    this_03 = (RtObject *)*puVar7;
    this_00 = Sexy::RtObject::Cast<Plant>(this_03);
    if (this_00 == (Plant *)0x0) {
      this_01 = Sexy::RtObject::Cast<Zombie>(this_03);
      if (this_01 == (Zombie *)0x0) {
        pGVar8 = Sexy::RtObject::Cast<GridItem>(this_03);
        if (pGVar8 != (GridItem *)0x0) {
          GridItem::GetType();
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          FUN_05475d88(asStack_d8,lVar11 + 8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          bVar2 = std::operator==(asStack_d8,"magicbeans");
          if (((!bVar2) && (bVar2 = std::operator==(asStack_d8,"lilypad"), !bVar2)) &&
             (bVar2 = std::operator==(asStack_d8,"flowerpot"), !bVar2)) {
            DamageInfo::DamageInfo((DamageInfo *)&local_70);
            operator|=(auStack_60,0x4000);
            (**(code **)(*(long *)pGVar8 + 0x120))
                      (pGVar8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
            DamageInfo::~DamageInfo((DamageInfo *)&local_70);
          }
          goto LAB_0405d378;
        }
      }
      else {
        cVar3 = (**(code **)(*(long *)this_01 + 0x4d8))();
        if ((cVar3 == '\0') && (cVar3 = Zombie::IsBoss(this_01), cVar3 == '\0')) {
          Zombie::GetCurrentTitleStatus();
          if ((local_c0 == '\0') &&
             (cVar3 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar3 == '\0')) {
            Zombie::GetCurrentTitleStatus();
            cVar3 = local_58;
            TitleStatus::~TitleStatus((TitleStatus *)&local_70);
            TitleStatus::~TitleStatus((TitleStatus *)asStack_d8);
            if (cVar3 == '\0') {
              iVar5 = Zombie::GetSizeType(this_01);
              if ((iVar5 == 2) && (cVar3 = Zombie::IsBoss(this_01), cVar3 == '\0')) {
                this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                bVar2 = std::operator!=((string *)(lVar11 + 8),"zombossmech_iceage");
                if (bVar2) {
                  puVar7 = (undefined8 *)
                           std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this_01);
                  local_70 = *puVar7;
                  local_68 = *(undefined4 *)(puVar7 + 1);
                  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
                  local_70 = CONCAT44(local_70._4_4_,(float)iVar5 + (float)local_70);
                  pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>
                                      (*(Board **)(gLawnApp + 0x9f0));
                  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_120);
                  ZombieTosserSubSystem::LaunchZombie
                            ((ZombieTosserSubSystem *)0x43020000,0x3f000000,pZVar10,this_01,
                             (RtWeakPtr<Sexy::ResourceInfo> *)&local_70,
                             (RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_120,0);
                  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  ::~RtReflectionDelegate(aRStack_120);
                }
              }
              else {
                cVar3 = Zombie::IsBoss(this_01);
                if (cVar3 == '\0') {
                  iVar5 = PlantFramework::Rand((PlantFramework *)this,600);
                  EATextSquish::Vec3::Vec3((Vec3 *)&local_70,1000.0,(float)iVar5,0.0);
                  Zombie::FlickOff(this_01,(SexyVector3 *)&local_70);
                }
              }
            }
          }
          else {
            TitleStatus::~TitleStatus((TitleStatus *)asStack_d8);
          }
        }
      }
    }
    else {
      Plant::GetType();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      FUN_05475d88(asStack_d8,lVar11 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      bVar2 = std::operator!=(asStack_d8,"magicbeans");
      if (((bVar2) && (bVar2 = std::operator!=(asStack_d8,"lilypad"), bVar2)) &&
         (bVar2 = std::operator!=(asStack_d8,"flowerpot"), bVar2)) {
        Plant::beThrown(this_00);
      }
LAB_0405d378:
      std::string::~string(asStack_d8);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_158);
  } while( true );
}


/* PlantMagicbeans::queueShot(float, Sexy::Point const&, bool) */

void __thiscall
PlantMagicbeans::queueShot(PlantMagicbeans *this,float param_1,Point *param_2,bool param_3)

{
  MagicbeansLauncherSubSystem *this_00;
  
  this_00 = Board::GetGameSubSystem<MagicbeansLauncherSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  MagicbeansLauncherSubSystem::QueueShot(this_00,this,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicbeans::DoDuplicate() */

void __thiscall PlantMagicbeans::DoDuplicate(PlantMagicbeans *this)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  Plant *this_00;
  float *pfVar10;
  int iVar11;
  Board *pBVar12;
  long lVar13;
  int local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  local_48 = 0.0;
  if (0 < iVar4) {
    do {
      pBVar12 = *(Board **)(gLawnApp + 0x9f0);
      if (0 < *(int *)(pBVar12 + 0xf8)) {
        iVar11 = 0;
        do {
          Sexy::Point::Point((Point *)&local_40,iVar11,(int)local_48);
          Plant::GetType();
          cVar3 = Board::CanPlantAt(pBVar12,(Point *)&local_40,
                                    (RtWeakPtr<Sexy::ResourceInfo> *)local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20)
          ;
          if (cVar3 != '\0') {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)&local_38,(int *)&local_48);
            break;
          }
          iVar11 = iVar11 + 1;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        } while (iVar11 < *(int *)(pBVar12 + 0xf8));
      }
      local_48 = (float)((int)local_48 + 1);
    } while ((int)local_48 < iVar4);
  }
  cVar3 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)&local_38);
  if (cVar3 == '\0') {
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar6,uVar7);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    iVar4 = 2;
    if (cVar3 != '\0') {
      iVar4 = 3;
    }
    iVar11 = 0;
    do {
      lVar13 = (long)iVar11;
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)local_20);
      uVar6 = local_38;
      iVar5 = FUN_0405a010(local_38,local_30);
      if (iVar11 < iVar5) {
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        if (*(int *)(pBVar12 + 0xf8) < 7) goto LAB_0405e260;
LAB_0405e008:
        local_4c = 6;
        iVar5 = 0;
        do {
          iVar2 = local_4c;
          piVar8 = (int *)FUN_0405a03c(uVar6,lVar13);
          Sexy::Point::Point((Point *)&local_48,iVar2,*piVar8);
          Plant::GetType();
          cVar3 = Board::CanPlantAt(pBVar12,(Point *)&local_48,
                                    (RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          if (cVar3 != '\0') {
            iVar5 = iVar5 + 1;
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)local_20,&local_4c);
          }
          local_4c = local_4c + 1;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
          uVar6 = local_38;
        } while (local_4c < *(int *)(pBVar12 + 0xf8));
        if (iVar5 == 0) goto LAB_0405e1bc;
        iVar5 = PlantFramework::Rand((PlantFramework *)this,iVar5);
        piVar8 = (int *)FUN_0405a03c(local_20[0],(long)iVar5);
        iVar5 = *piVar8;
        puVar9 = (undefined4 *)FUN_0405a03c(local_38,lVar13);
        uVar1 = *puVar9;
      }
      else {
        iVar5 = PlantFramework::Rand((PlantFramework *)this,iVar5);
        lVar13 = (long)iVar5;
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        uVar6 = local_38;
        if (6 < *(int *)(pBVar12 + 0xf8)) goto LAB_0405e008;
LAB_0405e260:
        local_4c = 6;
LAB_0405e1bc:
        iVar5 = 5;
        while( true ) {
          piVar8 = (int *)FUN_0405a03c(uVar6,lVar13);
          Sexy::Point::Point((Point *)&local_48,iVar5,*piVar8);
          Plant::GetType();
          cVar3 = Board::CanPlantAt(pBVar12,(Point *)&local_48,
                                    (RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          if (cVar3 != '\0') break;
          iVar5 = iVar5 + -1;
          if (iVar5 == -1) goto LAB_0405e19c;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
          uVar6 = local_38;
        }
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        puVar9 = (undefined4 *)FUN_0405a03c(local_38,lVar13);
        uVar1 = *puVar9;
      }
      Plant::GetType();
      this_00 = (Plant *)Board::AddPlant((Board *)0x0,pBVar12,iVar5,uVar1,
                                         (RtWeakPtr<Sexy::ResourceInfo> *)&local_40,1,1,0xffffffff,0
                                         ,1,1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (this_00 != (Plant *)0x0) {
        Plant::SetIsDuplicatePlant(this_00,true);
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_48);
        iVar5 = BoardTransforms::GridToBoardSpaceX(*(int *)(this_00 + 0x114));
        local_48 = (float)iVar5;
        iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(this_00 + 0x110));
        local_44 = (float)iVar5;
        uVar6 = *(undefined8 *)(this_00 + 0xa8);
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(this + 0x10));
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,*pfVar10,pfVar10[1]);
        FlyThroughAir(local_40,local_3c,local_48,local_44,uVar6);
      }
LAB_0405e19c:
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar4);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* PlantMagicbeans::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantMagicbeans::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator!=(param_2,"use_action");
  if (bVar1) {
    return 0;
  }
  uVar2 = DoDuplicate((PlantMagicbeans *)param_1);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicbeans::FallBeans(bool) */

void __thiscall PlantMagicbeans::FallBeans(PlantMagicbeans *this,bool param_1)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RtWeakPtrBase *pRVar7;
  long *extraout_x0;
  BoardTransforms *this_00;
  long *plVar8;
  long lVar9;
  int iVar10;
  code *pcVar11;
  float fVar12;
  undefined8 local_98;
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  int local_88;
  int iStack_84;
  undefined8 local_80;
  undefined8 local_78;
  int local_68;
  int local_64;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  lVar9 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar10 = (int)((*(float *)(this + 0x2c) - *(float *)(lVar9 + 0xd8)) /
                (*(float *)(this + 0x2c) * 0.2));
  if (param_1) {
    if ((iVar10 <= *(int *)(this + 0x40)) || (*(int *)(this + 0x38) <= *(int *)(this + 0x40)))
    goto LAB_0405e564;
    plVar8 = (long *)FUN_0405c488(lVar9);
    pcVar11 = *(code **)(*plVar8 + 0x260);
    PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
    (*pcVar11)(plVar8,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    lVar9 = *(long *)(this + 0x10);
    this[0x30] = (PlantMagicbeans)0x1;
  }
  else {
    if (iVar10 < *(int *)(this + 0x38)) {
      iVar10 = iVar10 + 1;
    }
    if ((iVar10 <= *(int *)(this + 0x40)) || (*(int *)(this + 0x38) <= *(int *)(this + 0x40)))
    goto LAB_0405e564;
  }
  *(undefined4 *)(lVar9 + 200) = 0xc;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  (**(code **)(*(long *)this + 0xd0))
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_68,this,2);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::operator=
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_80,(vector *)&local_68);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_68);
  iVar4 = FUN_0405a028(local_80,local_78);
  iVar5 = ThemeBalloonProjectile::myrandom();
  iVar6 = ThemeBalloonProjectile::myrandom();
  Sexy::Point::Point((Point *)&local_98,iVar5 % 9 + -1,iVar6 % 5 + -1);
  if (0 < iVar4) {
    lVar9 = 0;
    bVar1 = true;
    do {
      pRVar7 = (RtWeakPtrBase *)FUN_0405a034(local_80,lVar9);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,pRVar7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      nop();
      if (((extraout_x0 != (long *)0x0) &&
          (cVar3 = (**(code **)(*extraout_x0 + 0x328))(), cVar3 == '\0')) &&
         (*(int *)(this + 0x40) < iVar10)) {
        BoardEntity::CalcGridPosition();
        this_00 = (BoardTransforms *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(this + 0x10));
        BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
        if (bVar1) {
LAB_0405e5f8:
          local_98 = CONCAT44(iStack_84,local_88);
        }
        else if ((float)((iStack_84 - local_64) * (iStack_84 - local_64) +
                        (local_88 - local_68) * (local_88 - local_68)) <
                 (float)((local_98._4_4_ - local_64) * (local_98._4_4_ - local_64) +
                        ((int)local_98 - local_68) * ((int)local_98 - local_68))) goto LAB_0405e5f8;
        bVar1 = false;
      }
      lVar9 = lVar9 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    } while ((int)lVar9 < iVar4);
  }
  if ((*(int *)(this + 0x40) < iVar10) && (iVar10 = iVar10 - *(int *)(this + 0x40), 0 < iVar10)) {
    iVar4 = 0;
    do {
      fVar12 = (float)PVZ_T();
      fVar2 = (float)iVar4;
      iVar4 = iVar4 + 1;
      queueShot(this,fVar12 + fVar2 * 0.5,(Point *)&local_98,false);
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    } while (iVar4 != iVar10);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_80);
LAB_0405e564:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicbeans::onKilled(bool) */

void __thiscall PlantMagicbeans::onKilled(PlantMagicbeans *this,bool param_1)

{
  PlantAnimRig_MagicBeans *pPVar1;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((!param_1) && (this[0x28] == (PlantMagicbeans)0x0)) {
    this[0x28] = (PlantMagicbeans)0x1;
    FallBeans(this,false);
    pPVar1 = (PlantAnimRig_MagicBeans *)FUN_0405c488(*(undefined8 *)(this + 0x10));
    PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
    PlantAnimRig_MagicBeans::PlayDie(pPVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagicbeans::onDestroy() */

void __thiscall PlantMagicbeans::onDestroy(PlantMagicbeans *this)

{
  char cVar1;
  float fVar2;
  
  if ((this[0x30] == (PlantMagicbeans)0x0) &&
     (cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false), cVar1 == '\0')) {
    fVar2 = *(float *)(this + 0x2c);
    fVar2 = fVar2 - (float)((int)((fVar2 - *(float *)(*(long *)(this + 0x10) + 0xd8)) /
                                 (fVar2 * 0.2)) + 1) * fVar2 * 0.2;
    if (fVar2 <= 0.0) {
      (**(code **)(*(long *)this + 0x130))(this);
    }
    else {
      *(float *)(*(long *)(this + 0x10) + 0xd8) = fVar2;
    }
    FallBeans(this,true);
    return;
  }
  return;
}


/* PlantMagicbeans::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantMagicbeans::TakeSmashAttack(PlantMagicbeans *param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(param_1 + 0x10),false);
  if (cVar1 == '\0') {
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar2 = fVar2 - (float)((int)((fVar2 - *(float *)(*(long *)(param_1 + 0x10) + 0xd8)) /
                                 (fVar2 * 0.2)) + 1) * fVar2 * 0.2;
    if (fVar2 <= 0.0) {
      (**(code **)(*(long *)param_1 + 0x130))(param_1);
    }
    else {
      *(float *)(*(long *)(param_1 + 0x10) + 0xd8) = fVar2;
    }
    FallBeans(param_1,true);
    return;
  }
  return;
}


/* PlantMagicbeans::UpdateActions() */

void __thiscall PlantMagicbeans::UpdateActions(PlantMagicbeans *this)

{
  char cVar1;
  PopAnimRig *this_00;
  long *plVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  fVar3 = (float)PVZ_T();
  if ((fVar3 - *(float *)(this + 0x34) < 1.0) || (this[0x28] != (PlantMagicbeans)0x0)) {
LAB_0405e840:
    if (*(float *)(this + 0x2c) <= *(float *)(*(long *)(this + 0x10) + 0xd8)) goto LAB_0405e854;
  }
  else {
    uVar4 = PVZ_T();
    fVar5 = *(float *)(this + 0x2c);
    fVar3 = *(float *)(*(long *)(this + 0x10) + 0xd8);
    *(undefined4 *)(this + 0x34) = uVar4;
    fVar3 = fVar3 - fVar5 * 0.05;
    if (fVar3 <= 0.0) {
      (**(code **)(*(long *)this + 0x130))(this,0);
      goto LAB_0405e840;
    }
    *(float *)(*(long *)(this + 0x10) + 0xd8) = fVar3;
    if (fVar5 <= fVar3) goto LAB_0405e854;
  }
  FallBeans(this,true);
LAB_0405e854:
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if ((cVar1 == '\0') && (*(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) == 0xb)) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar1 == '\0') {
      if (*(int *)(this + 0x40) == *(int *)(this + 0x38)) {
        this[0x3c] = (PlantMagicbeans)0x1;
      }
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar2 + 0x118))();
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicbeans::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PlantMagicbeans::gatherPlantingRestrictions
          (PlantMagicbeans *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_1c;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x10) + 400))(aTStack_18,*(long **)(this + 0x10));
  cVar1 = Sexy::TRect<int>::Contains(aTStack_18,(TPoint *)param_1);
  if (cVar1 != '\0') {
    local_1c = 0x4d;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_1c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

