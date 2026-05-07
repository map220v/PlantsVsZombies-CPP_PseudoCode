// Class: DarkSunbombEffect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DarkSunbombEffect::StaticClassInit() */

void DarkSunbombEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"DarkSunbombEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_04079218,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DarkSunbombEffect::StaticGetClass() */

long * DarkSunbombEffect::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"DarkSunbombEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DarkSunbombEffect::GetClass() const */

long * DarkSunbombEffect::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"DarkSunbombEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DarkSunbombEffect::DarkSunbombEffect() */

void __thiscall DarkSunbombEffect::DarkSunbombEffect(DarkSunbombEffect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067c96a0;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x110));
  DVec3::DVec3((DVec3 *)(this + 0x170));
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x188));
  return;
}


/* DarkSunbombEffect::StaticNew() */

DarkSunbombEffect * DarkSunbombEffect::StaticNew(void)

{
  DarkSunbombEffect *this;
  
  this = ::operator_new(400);
  DarkSunbombEffect(this);
  return this;
}


/* DarkSunbombEffect::~DarkSunbombEffect() */

void __thiscall DarkSunbombEffect::~DarkSunbombEffect(DarkSunbombEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_067c96a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* DarkSunbombEffect::~DarkSunbombEffect() */

void __thiscall DarkSunbombEffect::~DarkSunbombEffect(DarkSunbombEffect *this)

{
  ~DarkSunbombEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DarkSunbombEffect::OnAnimCommand(std::string const&, std::string const&) */

void DarkSunbombEffect::OnAnimCommand(string *param_1,string *param_2)

{
  RtWeakPtr *this;
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  Zombie *pZVar9;
  undefined8 uVar10;
  int in_w4;
  ulong uVar11;
  float fVar12;
  FastCurve aFStack_98 [4];
  float local_94;
  int local_8c;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68 [2];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_2,"use_action");
  if (bVar2) {
    this = (RtWeakPtr *)(param_1 + 0x188);
    uVar11 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar4 = operator|(2,4);
    Sexy::FastCurve::SetOutRange(aFStack_98,*(float *)(param_1 + 0x170),*(float *)(param_1 + 0x174))
    ;
    BoardTransforms::GridToBoardSpaceRect
              ((BoardTransforms *)0x0,*(int *)(param_1 + 0x17c),1,1,in_w4);
    fVar12 = *(float *)(param_1 + 0x180);
    iVar1 = *(int *)(param_1 + 0x17c);
    local_94 = (float)(local_8c + local_84 / 2);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * SQRT(*(float *)(param_1 + 0x180)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               aFStack_98,iVar1 - (int)fVar12 / 2,(int)fVar12 / 2 + iVar1);
    uVar10 = local_80;
    lVar6 = FUN_040784e4(local_80,local_78);
    if (lVar6 != 0) {
      do {
        puVar7 = (undefined8 *)FUN_040784d8(uVar10,uVar11);
        cVar3 = RealObject::IsOnOpposingTeam(*puVar7,1);
        if (cVar3 != '\0') {
          puVar7 = (undefined8 *)FUN_040784d8(local_80,uVar11);
          pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
          if (((pZVar9 == (Zombie *)0x0) ||
              (cVar3 = (**(code **)(*(long *)pZVar9 + 0x328))(), cVar3 == '\0')) ||
             (cVar3 = (**(code **)(*(long *)pZVar9 + 0xb8))(pZVar9,7), cVar3 != '\0')) {
            DamageInfo::DamageInfo((DamageInfo *)local_68,(DamageInfo *)(param_1 + 0x110));
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
            if ((bVar2) &&
               (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar3 != '\0')) {
              local_68[0] = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this);
              uVar10 = operator|(0x20,0x400);
              uVar10 = operator|(uVar10,0x1000);
              operator|=(auStack_58,uVar10);
            }
            puVar7 = (undefined8 *)FUN_040784d8(local_80,uVar11);
            (**(code **)(*(long *)*puVar7 + 0x110))((long *)*puVar7,(DamageInfo *)local_68);
            DamageInfo::~DamageInfo((DamageInfo *)local_68);
          }
        }
        uVar10 = local_80;
        uVar11 = uVar11 + 1;
        uVar8 = FUN_040784e4(local_80,local_78);
      } while (uVar11 < uVar8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DarkSunbombEffect::SetProps(DamageInfo, Sexy::SexyVector3, int, float,
   Sexy::RtWeakPtr<BoardEntity>) */

void DarkSunbombEffect::SetProps
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,DamageInfo *param_6,undefined4 param_7,RtWeakPtr *param_8)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  DamageInfo::operator=((DamageInfo *)(param_5 + 0x110),param_6);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_5 + 0x170),(SexyVector3 *)&local_10);
  *(undefined4 *)(param_5 + 0x17c) = param_7;
  *(undefined4 *)(param_5 + 0x180) = param_4;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_5 + 0x188),param_8);
  return;
}

